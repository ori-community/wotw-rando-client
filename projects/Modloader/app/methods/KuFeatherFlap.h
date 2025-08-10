#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/KuFeatherFlap.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KuFeatherFlap {
    IL2CPP_REGISTER_METHOD(0x00A3CA60, bool, get_CanCancel, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236600, void, OnSetReferenceToKu, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_IsStatePerforming, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236630, app::Input_InputButtonProcessor*, get_Button, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012366F0, void, Start, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01236F50, void, OnDestroy, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01237220, void, UpdateState, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012374B0, void, PerformFeatherFlap, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012378C0, void, OnRootMotion, app::KuFeatherFlap* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x01237B40, void, SpawnWindFX, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01237F30,
        void,
        ModifyGravityPlatformMovementSettings,
        app::KuFeatherFlap* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01238030,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::KuFeatherFlap* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x01238160, void, ctor, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012381A0, void, _Start_b__24_2, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012381B0, void, _Start_b__24_0, app::KuFeatherFlap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012383A0, void, _Start_b__24_1, app::KuFeatherFlap* this_ptr)
} // namespace app::classes::KuFeatherFlap
