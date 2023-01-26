#pragma once
#include <Modloader/app/structs/LinkAndroidDeviceIDRequest.h>
#include <Modloader/app/structs/LinkAndroidDeviceIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkAndroidDeviceIDRequest {
        inline app::LinkAndroidDeviceIDRequest__Class** type_info() {
            static app::LinkAndroidDeviceIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x0470C0A0));
            }
            return cache;
        }
        inline app::LinkAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkAndroidDeviceIDRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkAndroidDeviceIDRequest");
        }
        inline app::LinkAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::LinkAndroidDeviceIDRequest>(get_class());
        }
    } // namespace LinkAndroidDeviceIDRequest
} // namespace app::classes::types
