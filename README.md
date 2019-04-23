# MICS-VZ-89TE
VOC and CO2 sensor
I had a lot of trouble getting this sensor working.
I have used libraries from Herve Grabas https://github.com/HGrabas/MICS-VZ-89TE and an .ino from mkesleem https://github.com/mkesleem/mech45X_PhotonScripts/tree/master/VOC_MICS
unfortunately the folder from mkesleem does not contain the .h from Herve, thats all that is required to make it work.

The .ino will serial print VOC and CO2 values.
More information on the sensor can be found here: https://www.amphenol-sensors.com/en/telaire/524-voc/3285-mics-vz-89te

I had two faulty sensors during this process, this cost me a lot of time as I couldn't understand why the code would not work.
I would suggest anyone having trouble as I did to run a I2Cscanner script https://playground.arduino.cc/Main/I2cScanner/
If this does not return any results then the sensor is eithe faulty or incorrectly wired.
