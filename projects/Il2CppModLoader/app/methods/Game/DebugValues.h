#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Game::DebugValues {
    IL2CPP_REGISTER_METHOD(0x015247D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01524940, bool, ToggleEnemies, ())
    IL2CPP_REGISTER_METHODINFO(0x0470B968, DebugValues_ToggleEnemies__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01524D50, bool, DisableArt, ())
    IL2CPP_REGISTER_METHODINFO(0x04700EB8, DebugValues_DisableArt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01525160, bool, DisableAllParticles, ())
    IL2CPP_REGISTER_METHODINFO(0x04785DE0, DebugValues_DisableAllParticles__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01525640, bool, ToggleSceneMode, ())
    IL2CPP_REGISTER_METHODINFO(0x0477FEC0, DebugValues_ToggleSceneMode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01525790, void, cctor, ())
}
