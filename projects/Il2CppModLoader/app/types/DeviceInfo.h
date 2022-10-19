#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeviceInfo {
        inline app::DeviceInfo__Class** type_info = (app::DeviceInfo__Class**)(modloader::win::memory::resolve_rva(0x047801D0));
        inline app::DeviceInfo__Class* get_class() {
            return il2cpp::get_class<app::DeviceInfo__Class>(type_info, "Microsoft.Xbox.Services.Xal", "DeviceInfo");
        }
        inline app::DeviceInfo* create() {
            return il2cpp::create_object<app::DeviceInfo>(get_class());
        }
    } // namespace DeviceInfo
} // namespace app::classes::types
