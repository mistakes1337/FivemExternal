#pragma once
#include <string>
#include <Windows.h>

struct Globals
{
    // System(Base
    bool process_active = false;
    bool ShowMenu = false;

    // GameData
    RECT GameRect{};
    POINT GamePoint{};

    // Aim
    bool AimBot = false;
    bool AimBotPrediction = false;
    float AimFov = 10.f;

    // Visual
    bool ESP = false;
    bool ESP_Box = false;
    bool ESP_Line = false;
    bool ESP_Distance = false;
    bool ESP_HealthBar = false;
    bool ESP_Skeleton = false;
    float ESP_MaxDistance = 1000.f;

    // Misc
    bool GodMode = false;
    bool NoRecoil = false;
    bool NoSpread = false;

    // System(Cheat
    bool Crosshair = false;
    bool StreamProof = false;

    // Key
    int MenuKey = VK_INSERT;
    int AimKey0 = VK_RBUTTON;
    int AimKey1 = VK_LBUTTON;
};

extern Globals g;
extern bool IsKeyDown(int VK);
extern const char* KeyNames[];