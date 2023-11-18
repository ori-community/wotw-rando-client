#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuGlide.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>

namespace app::classes::KuGlide {
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsStatePerforming, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01238590, bool, get_InWindZone, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01238780, bool, get_WantsToGlide, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01238830, bool, get_CanGlide, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012388F0, bool, ShouldEnterGlide, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsGliding, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01238930, void, set_IsGliding, (app::KuGlide * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01238960, void, OnSetReferenceToKu, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01238990, void, OnEnterGlide, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01238D30, void, OnExitGlide, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01236310, void, OnExit, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239090, void, UpdateState, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239420, void, HandleFloatZones, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239870, void, ModifyGravityPlatformMovementSettings, (app::KuGlide * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01239910, void, ModifyHorizontalPlatformMovementSettings, (app::KuGlide * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x012399A0, bool, get_HasStartedTurning, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012399D0, bool, get_HasFinishedTurning, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_WantsToFaceLeft, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519B0, void, set_WantsToFaceLeft, (app::KuGlide * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012399F0, bool, get_ShouldInterruptTurning, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239A00, bool, get_IsCancellable, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239A20, void, InterruptTurning, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239A40, void, Turn, (app::KuGlide * this_ptr, bool face_left))
    IL2CPP_REGISTER_METHOD(0x01239B70, bool, IsEffectivelyDoubleJumping, (app::KuGlide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01239C00, void, ctor, (app::KuGlide * this_ptr))
} // namespace app::classes::KuGlide
