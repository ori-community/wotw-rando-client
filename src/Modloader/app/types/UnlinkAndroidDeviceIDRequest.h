#pragma once
#include <Modloader/app/structs/UnlinkAndroidDeviceIDRequest.h>
#include <Modloader/app/structs/UnlinkAndroidDeviceIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkAndroidDeviceIDRequest {
        inline app::UnlinkAndroidDeviceIDRequest__Class** type_info() {
            static app::UnlinkAndroidDeviceIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04710B18));
            }
            return cache;
        }
        inline app::UnlinkAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkAndroidDeviceIDRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkAndroidDeviceIDRequest");
        }
        inline app::UnlinkAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::UnlinkAndroidDeviceIDRequest>(get_class());
        }
    } // namespace UnlinkAndroidDeviceIDRequest
} // namespace app::classes::types
