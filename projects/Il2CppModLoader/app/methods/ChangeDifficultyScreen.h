#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ChangeDifficultyScreen {
    IL2CPP_REGISTER_METHOD(0x010459A0, app::String *, DifficultyToText, (app::ChangeDifficultyScreen * this_ptr, app::DifficultyMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x01045A20, void, Awake, (app::ChangeDifficultyScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01045AB0, void, OnDestroy, (app::ChangeDifficultyScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01045B30, void, SetDifficulty, (app::ChangeDifficultyScreen * this_ptr, app::DifficultyMode__Enum difficulty))
    IL2CPP_REGISTER_METHOD(0x01045DB0, void, Confirm, (app::ChangeDifficultyScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChangeDifficultyScreen * this_ptr))
}
