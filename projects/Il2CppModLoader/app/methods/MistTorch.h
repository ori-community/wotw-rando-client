#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MistTorch {
    IL2CPP_REGISTER_METHOD(0x01327220, void, Awake, (app::MistTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013273E0, void, OnDestroy, (app::MistTorch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327590, void, OnGameReset, (app::MistTorch * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D780, MistTorch_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, OnPressed, (app::MistTorch * this_ptr, app::IPressurePlate * plate))
    IL2CPP_REGISTER_METHOD(0x00650B90, void, OnReleased, (app::MistTorch * this_ptr, app::IPressurePlate * plate))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MistTorch * this_ptr))
}
