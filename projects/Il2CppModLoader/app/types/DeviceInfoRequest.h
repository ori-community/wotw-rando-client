#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeviceInfoRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeviceInfoRequest__Class** type_info;
        inline app::DeviceInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::DeviceInfoRequest__Class>(type_info, "PlayFab.ClientModels", "DeviceInfoRequest");
        }
        inline app::DeviceInfoRequest* create() {
            return il2cpp::create_object<app::DeviceInfoRequest>(get_class());
        }
    } // namespace DeviceInfoRequest
} // namespace app::classes::types
