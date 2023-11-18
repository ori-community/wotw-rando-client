#pragma once
#include <Modloader/app/structs/LoginWithIOSDeviceIDRequest.h>
#include <Modloader/app/structs/LoginWithIOSDeviceIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithIOSDeviceIDRequest {
        inline app::LoginWithIOSDeviceIDRequest__Class** type_info() {
            static app::LoginWithIOSDeviceIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithIOSDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x0470DF18));
            }
            return cache;
        }
        inline app::LoginWithIOSDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithIOSDeviceIDRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithIOSDeviceIDRequest");
        }
        inline app::LoginWithIOSDeviceIDRequest* create() {
            return il2cpp::create_object<app::LoginWithIOSDeviceIDRequest>(get_class());
        }
    } // namespace LoginWithIOSDeviceIDRequest
} // namespace app::classes::types
