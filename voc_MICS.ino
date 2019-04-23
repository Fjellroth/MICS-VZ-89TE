#include <MICS-VZ-89TE.h>

#include <Wire.h>

int data [7];
bool MICS_status;
int MICS_voc;
int MICS_eqco2;

// allah = new MICS_VZ_89TE(void);

void setup() {
    // MICS_VZ_89TE=MICS_VZ_89TE(void);
	// class MICS_VZ_89TE::MICS_VZ_89TE();
	// swag = MICS_VZ_89TE::begin();
	Serial.begin(9600);
	Serial.println("Application Note: Particle Photon MICS VOC test");
}

void loop()
{
    MICS_VZ_89TE myMICS;
    MICS_status = myMICS.begin();
    myMICS.readSensor();
    MICS_eqco2 = myMICS.getCO2();
    MICS_voc = myMICS.getVOC();
    Serial.print("MICS VOC PPB: ");
    Serial.println(MICS_voc);
    Serial.print("MICS CO2 PPM: ");
    Serial.println(MICS_eqco2);
    delay(2000);
}
