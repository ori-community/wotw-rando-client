#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/KuLookUp.h>

namespace app::classes::KuLookUp {
    IL2CPP_REGISTER_METHOD(0x01241070, void, OnSetReferenceToKu, app::KuLookUp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012410A0, void, OnEnable, app::KuLookUp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01241250, void, OnDisable, app::KuLookUp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01241420, bool, get_IsStatePerforming, app::KuLookUp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01241450, void, UpdateState, app::KuLookUp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01241850, bool, ShouldLookUp, app::KuLookUp* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0122F500,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::KuLookUp* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x01241A20, void, ctor, app::KuLookUp* this_ptr)
} // namespace app::classes::KuLookUp
