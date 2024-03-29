#pragma once
#include <Modloader/app/structs/LoginWithAndroidDeviceIDRequest.h>
#include <Modloader/app/structs/LoginWithAndroidDeviceIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithAndroidDeviceIDRequest {
        inline app::LoginWithAndroidDeviceIDRequest__Class** type_info() {
            static app::LoginWithAndroidDeviceIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04707158));
            }
            return cache;
        }
        inline app::LoginWithAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithAndroidDeviceIDRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithAndroidDeviceIDRequest");
        }
        inline app::LoginWithAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::LoginWithAndroidDeviceIDRequest>(get_class());
        }
    } // namespace LoginWithAndroidDeviceIDRequest
} // namespace app::classes::types
