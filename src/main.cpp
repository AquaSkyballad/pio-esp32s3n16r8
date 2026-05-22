#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("--- ESP32-S3 N16R8 init ---");

    Serial.printf("ChipModel: %s\n", ESP.getChipModel());
    Serial.printf("ChipCores: %d\n", ESP.getChipCores());

    Serial.printf("FlashSize: %d MB\n", ESP.getFlashChipSize() / (1024 * 1024));
    Serial.printf("PSRAMSize: %d MB\n", ESP.getPsramSize() / (1024 * 1024));

    if (ESP.getPsramSize() > 0) {
        int* psramTest = (int*)ps_malloc(1024);
        if (psramTest) {
            Serial.println("PSRAM init successfully!");
            free(psramTest);
        } else {
            Serial.println("PSRAM init failed.");
        }
    }

    Serial.println("--- Init complete ---");
}

void loop() {
    delay(1000);
}