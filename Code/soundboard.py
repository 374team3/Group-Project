import pygame.mixer
from subprocess import Popen
from time import sleep
import RPi.GPIO as GPIO
from sys import exit

GPIO.setmode(GPIO.BOARD)
GPIO.setup(3, GPIO.IN)
GPIO.setup(5, GPIO.IN)
GPIO.setup(7, GPIO.IN)
GPIO.setup(16, GPIO.IN)
GPIO.setup(10, GPIO.IN)
GPIO.setup(12, GPIO.IN)
GPIO.setup(11, GPIO.IN)
GPIO.setup(13, GPIO.IN)
GPIO.setup(32, GPIO.IN)
GPIO.setup(36, GPIO.IN)
GPIO.setup(38, GPIO.IN)
GPIO.setup(40, GPIO.IN)
GPIO.setup(18, GPIO.IN)
GPIO.setup(19, GPIO.IN)
GPIO.setup(21, GPIO.IN)
GPIO.setup(23, GPIO.IN)
pygame.mixer.init(48000, -16, 1, 1024)

sndA = pygame.mixer.Sound("Guidance.wav")
sndB = pygame.mixer.Sound("Capcom.wav")
sndC = pygame.mixer.Sound("fao.wav")
sndD = pygame.mixer.Sound("Fido.wav")
sndE = pygame.mixer.Sound("alarm.wav")
sndF = pygame.mixer.Sound("Eecom.wav")
sndG = pygame.mixer.Sound("Retro.wav")
sndH = pygame.mixer.Sound("Blastoff.wav")
sndI = pygame.mixer.Sound("Gnc.wav")
sndJ = pygame.mixer.Sound("engine.wav")
sndK = pygame.mixer.Sound("launch.wav")
sndL = pygame.mixer.Sound("Abort.wav")
sndM = pygame.mixer.Sound("Booster.wav")
sndN = pygame.mixer.Sound("Fan.wav")
sndO = pygame.mixer.Sound("Waterpump.wav")
sndP = pygame.mixer.Sound("Pump.wav")

movie1 = ("Pixar.mp4")

soundChannelA = pygame.mixer.Channel(1)
soundChannelB = pygame.mixer.Channel(2)
soundChannelC = pygame.mixer.Channel(3)
soundChannelD = pygame.mixer.Channel(4)
soundChannelE = pygame.mixer.Channel(5)
soundChannelF = pygame.mixer.Channel(6)
soundChannelG = pygame.mixer.Channel(7)
soundChannelH = pygame.mixer.Channel(1)
soundChannelI = pygame.mixer.Channel(2)
soundChannelJ = pygame.mixer.Channel(3)
soundChannelK = pygame.mixer.Channel(4)
soundChannelL = pygame.mixer.Channel(5)
soundChannelM = pygame.mixer.Channel(6)
soundChannelN = pygame.mixer.Channel(7)
soundChannelO = pygame.mixer.Channel(1)
soundChannelP = pygame.mixer.Channel(2)
soundChannelQ = pygame.mixer.Channel(3)
soundChannelR = pygame.mixer.Channel(4)
soundChannelS = pygame.mixer.Channel(5)
soundChannelT = pygame.mixer.Channel(6)
soundChannelU = pygame.mixer.Channel(7)


print ("Sampler Ready.")

while True:
   try:
      if (GPIO.input(32) == True):
         soundChannelA.play(sndA)
         sleep(1.5)
         
      if (GPIO.input(36) == True):
         soundChannelB.play(sndB)
         sleep(1.5)
         
      if (GPIO.input(38) == True):
         soundChannelC.play(sndC)
         sleep(1.5)
         
      if (GPIO.input(40) == True):
         soundChannelD.play(sndD)
         sleep(1.5)
         
      if (GPIO.input(3) == True):
         soundChannelE.play(sndE)
         sleep(1.5)
         
      if (GPIO.input(5) == True):
         soundChannelF.play(sndF)
         sleep(1.5)
         
      if (GPIO.input(7) == True):
         soundChannelG.play(sndG)
         sleep(1.5)
         
      if (GPIO.input(16) == True):
         soundChannelH.play(sndH)
         sleep(1.5)
         
      if (GPIO.input(10) == True):
         soundChannelI.play(sndI)
         sleep(1.5)
         
      if (GPIO.input(12) == True):
         soundChannelJ.play(sndJ)
         sleep(1.5)
         
      if (GPIO.input(11) == True):
         soundChannelK.play(sndK)
         sleep(1.5)
         
      if (GPIO.input(13) == True):
         soundChannelL.play(sndL)
         sleep(1.5)
        
      if (GPIO.input(18) == True):
         soundChannelM.play(sndM)
         sleep(1.5)
         
      if (GPIO.input(19) == True):
         soundChannelN.play(sndN)
         sleep(1.5)
         
      if (GPIO.input(21) == True):
         soundChannelO.play(sndO)
         sleep(1.5)
        
      if (GPIO.input(23) == True):
         soundChannelP.play(sndP)
         sleep(1.5)
         
   except KeyboardInterrupt:
      os.system('killall omxplayer.bin')
      exit()