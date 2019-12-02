import serial
import pygame.mixer
from subprocess import Popen
from time import sleep
import RPi.GPIO as GPIO
from sys import exit

pygame.mixer.init(48000, -16, 1, 1024)
ser = serial.Serial('/dev/ttyACM0',9600)
s = [0,1]

guidance = pygame.mixer.Sound("Guidance.wav")
capcom = pygame.mixer.Sound("Capcom.wav")
fao = pygame.mixer.Sound("fao.wav")
fido = pygame.mixer.Sound("Fido.wav")
alarm = pygame.mixer.Sound("alarm.wav")
eecom = pygame.mixer.Sound("Eecom.wav")
retro = pygame.mixer.Sound("Retro.wav")
blastoff = pygame.mixer.Sound("Blastoff.wav")
gnc = pygame.mixer.Sound("Gnc.wav")
engine = pygame.mixer.Sound("engine.wav")
launch = pygame.mixer.Sound("launch.wav")
abort = pygame.mixer.Sound("Abort.wav")
booster = pygame.mixer.Sound("Booster.wav")
fan = pygame.mixer.Sound("Fan.wav")
waterpump = pygame.mixer.Sound("Waterpump.wav")
pump = pygame.mixer.Sound("Pump.wav")

soundChannelA = pygame.mixer.Channel(1)
soundChannelB = pygame.mixer.Channel(2)
soundChannelC = pygame.mixer.Channel(3)
soundChannelD = pygame.mixer.Channel(4)
soundChannelE = pygame.mixer.Channel(5)
soundChannelF = pygame.mixer.Channel(6)
soundChannelG = pygame.mixer.Channel(7)

occurenced = [0] * 1000

print ("Sampler Ready.")

while True:
    read_serial=ser.readline()
    s[0] = int (ser.readline(),16)
    print (s[0])
    print (read_serial)

    if (s[0] == 1):
        soundChannelA.play(capcom)
        
    if (s[0] == 3):
        soundChannelB.play(fao)
        
    if (s[0] == 4):
        soundChannelC.play(fido)
        
    if (s[0] == 5):
        soundChannelD.play(alarm)
        

        
  
        

        