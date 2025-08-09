#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KwolokBossEntity_OnDamageReceivedDelegate.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::KwolokBossEntity_OnDamageReceivedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::KwolokBossEntity_OnDamageReceivedDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, app::KwolokBossEntity_OnDamageReceivedDelegate* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(
        0x012DEBE0,
        app::IAsyncResult*,
        BeginInvoke,
        app::KwolokBossEntity_OnDamageReceivedDelegate* this_ptr,
        app::DamageResult result,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::KwolokBossEntity_OnDamageReceivedDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::KwolokBossEntity_OnDamageReceivedDelegate
