#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::FPSCharacter {
    IL2CPP_REGISTER_METHOD(0x0221DBE0, void, Start, (app::FPSCharacter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221DC80, void, Update, (app::FPSCharacter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221DED0, void, OnGUI, (app::FPSCharacter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221E000, void, ctor, (app::FPSCharacter * this_ptr))
} // namespace app::classes::RootMotion::Demos::FPSCharacter
