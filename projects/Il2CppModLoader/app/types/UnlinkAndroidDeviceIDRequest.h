#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkAndroidDeviceIDRequest {
        inline app::UnlinkAndroidDeviceIDRequest__Class** type_info = (app::UnlinkAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04710B18));
        inline app::UnlinkAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkAndroidDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkAndroidDeviceIDRequest");
        }
        inline app::UnlinkAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::UnlinkAndroidDeviceIDRequest>(get_class());
        }
    } // namespace UnlinkAndroidDeviceIDRequest
} // namespace app::classes::types
