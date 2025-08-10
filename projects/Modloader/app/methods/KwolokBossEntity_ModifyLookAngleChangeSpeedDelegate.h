#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* this_ptr, float* a)
    IL2CPP_REGISTER_METHOD(
        0x012DE5B0,
        app::IAsyncResult*,
        BeginInvoke,
        app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* this_ptr,
        float* a,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, app::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate* this_ptr, float* a, app::IAsyncResult* result)
} // namespace app::classes::KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate
