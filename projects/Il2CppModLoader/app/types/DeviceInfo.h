#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeviceInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeviceInfo__Class** type_info;
        inline app::DeviceInfo__Class* get_class() {
            return il2cpp::get_class<app::DeviceInfo__Class>(type_info, "Microsoft.Xbox.Services.Xal", "DeviceInfo");
        }
        inline app::DeviceInfo* create() {
            return il2cpp::create_object<app::DeviceInfo>(get_class());
        }
    } // namespace DeviceInfo
} // namespace app::classes::types
