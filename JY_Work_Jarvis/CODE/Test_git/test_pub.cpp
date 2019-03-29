OLD______________________  .h   ===========================

class JoystickEvents
{
public:
    virtual void OnGamePadChanged(const GamePadEventData *evt);
};



New____________________  .h   =============================
class JoystickEvents
{
public:
    virtual void OnGamePadChanged(const GamePad EventData *evt);
    static GamePadEventData mostRecentEvent;
};





OLD______________________  .cpp   ===========================

void JoystickEvents::OnGamePadChanged(const GamePadEventData *evt)git git
{
    Serial.print("X: ");
    PrintHex<uint16_t>(evt->x, 0x80);
    Serial.print(" Y: ");
    PrintHex<uint16_t>(evt->y, 0x80);
    Serial.print(" Hat Switch: ");
    PrintHex<uint8_t>(evt->hat, 0x80);
    Serial.print(" Twist: ");
    PrintHex<uint8_t>(evt->twist, 0x80);
    Serial.print(" Slider: ");
    PrintHex<uint8_t>(evt->slider, 0x80);
    Serial.print(" Buttons A: ");
    PrintHex<uint8_t>(evt->buttons_a, 0x80);
    Serial.print(" Buttons B: ");
    PrintHex<uint8_t>(evt->buttons_b, 0x80);
    Serial.println("");
}



New____________________  .cpp   =============================

GamePadEventData JoystickEvents::mostRecentEvent;
void JoystickEvents::OnGamePadChanged(const GamePadEventData *evt)
{
    mostReventEvent = *evt;
}



NEW liine to test updates