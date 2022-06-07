#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::ActivateAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x0311AC10, app::ActivateAnimatorSystem *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::ActivateAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311AF40, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0311B0A0, void, OnDestroy, (app::ActivateAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311B0B0, void, SubmitDynamicGameObjectState, (app::ActivateAnimatorSystem * this_ptr, app::GameObject * go, bool state))
    IL2CPP_REGISTER_METHOD(0x0311B2E0, void, SubmitStaticGameObjectState, (app::ActivateAnimatorSystem * this_ptr, app::GameObject * go, bool state))
    IL2CPP_REGISTER_METHOD(0x0311B520, void, ClearState_1, (app::ActivateAnimatorSystem * this_ptr, app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x0311B560, void, ClearState_2, (app::ActivateAnimatorSystem * this_ptr, int32_t object_id))
    IL2CPP_REGISTER_METHOD(0x0311B6F0, void, ClearAllStates, ())
    IL2CPP_REGISTER_METHOD(0x0311B810, void, BeforeSaving, ())
    IL2CPP_REGISTER_METHOD(0x0311BA30, void, AfterSaving, ())
    IL2CPP_REGISTER_METHOD(0x0311BBE0, void, ClearAll, (app::ActivateAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311BCC0, void, OnUpdate, (app::ActivateAnimatorSystem * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0311C0C0, bool, GetBaselineValueFor, (app::ActivateAnimatorSystem * this_ptr, app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x0311C1F0, void, ctor, (app::ActivateAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311C4F0, void, cctor, ())
}
