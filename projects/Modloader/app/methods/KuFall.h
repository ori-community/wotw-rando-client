#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuFall.h>

namespace app::classes::KuFall {
    IL2CPP_REGISTER_METHOD(0x01235EE0, void, OnSetReferenceToKu, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235F10, bool, get_IsStatePerforming, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01235FE0, void, UpdateState, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236310, void, OnExit, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236310, void, StopFallAnimation, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236340, bool, get_HasStartedTurning, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236370, bool, get_HasFinishedTurning, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_WantsToFaceLeft, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_WantsToFaceLeft, app::KuFall* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01236390, bool, get_ShouldInterruptTurning, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236430, bool, get_IsCancellable, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236450, void, InterruptTurning, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236470, void, Turn, app::KuFall* this_ptr, bool face_left)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::KuFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012365B0, bool, _UpdateState_b__8_0, app::KuFall* this_ptr)
} // namespace app::classes::KuFall
