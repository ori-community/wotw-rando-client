#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CartAnimation {
    IL2CPP_REGISTER_METHOD(0x00B31760, void, set_AddtiveRotation, (app::CartAnimation * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_BodyNormalizedLocalRotation, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31770, void, Awake, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31870, void, OnEnable, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B319C0, void, Update, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31E10, void, AddForceToBody, (app::CartAnimation * this_ptr, float force))
    IL2CPP_REGISTER_METHOD(0x00B31E40, void, AddForceToBumper, (app::CartAnimation * this_ptr, float force))
    IL2CPP_REGISTER_METHOD(0x00B31E70, void, AddForceToScale, (app::CartAnimation * this_ptr, float force))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateRoot, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31EA0, void, UpdateScale, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31F50, void, UpdateBody, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32190, void, UpdateBumper, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B323D0, void, StepAllSprings, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32440, bool, AllSpringsAreResting, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B324C0, void, RotateWhell, (app::CartAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B325D0, void, ctor, (app::CartAnimation * this_ptr))
} // namespace app::classes::CartAnimation
