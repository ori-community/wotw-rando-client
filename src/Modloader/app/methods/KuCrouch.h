#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/KuCrouch.h>

namespace app::classes::KuCrouch {
    IL2CPP_REGISTER_METHOD(0x0122EAF0, void, OnSetReferenceToKu, app::KuCrouch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122EB20, void, OnEnable, app::KuCrouch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122ECD0, void, OnDisable, app::KuCrouch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122EEA0, bool, get_IsStatePerforming, app::KuCrouch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122EED0, void, UpdateState, app::KuCrouch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0122F2D0, bool, ShouldCrouch, app::KuCrouch* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0122F500,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::KuCrouch* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x0122F550, void, ctor, app::KuCrouch* this_ptr)
} // namespace app::classes::KuCrouch
