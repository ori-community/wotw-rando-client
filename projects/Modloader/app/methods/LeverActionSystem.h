#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeverActionSystem.h>

namespace app::classes::LeverActionSystem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverEnter, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverExit, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGrabLever, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleaseLever, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01136D40, void, OnLeverLeft, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01136E10, void, OnLeverRight, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverLeftFailed, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverRightFailed, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftMiddle, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01136EE0, bool, CanLeverLeftCallback, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01136FC0, bool, CanLeverRightCallback, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011370A0, void, StopMutuallyExclusivite, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011371B0, void, Start, (app::LeverActionSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LeverActionSystem * this_ptr))
} // namespace app::classes::LeverActionSystem
