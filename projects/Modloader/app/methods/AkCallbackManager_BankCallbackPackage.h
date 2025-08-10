#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AkCallbackManager_BankCallbackPackage {
    IL2CPP_REGISTER_METHOD(
        0x026D4120,
        void,
        ctor,
        app::AkCallbackManager_BankCallbackPackage* this_ptr,
        app::AkCallbackManager_BankCallback* in_cb,
        app::Object* in_cookie
    )
}
