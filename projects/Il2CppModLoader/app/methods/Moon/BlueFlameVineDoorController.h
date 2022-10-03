#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BlueFlameVineDoorController {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::BlueFlameVineDoorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::BlueFlameVineDoorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBC440, void, Apply, (app::BlueFlameVineDoorController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00CBC5E0, app::IUberState__Array*, get_AffectingUberStates, (app::BlueFlameVineDoorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBC660, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::BlueFlameVineDoorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBC840, void, OnUpdate, (app::BlueFlameVineDoorController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00CBCA30, void, Awake, (app::BlueFlameVineDoorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCAF0, void, OnDestroy, (app::BlueFlameVineDoorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCBB0, void, ctor, (app::BlueFlameVineDoorController * this_ptr))
} // namespace app::classes::Moon::BlueFlameVineDoorController
