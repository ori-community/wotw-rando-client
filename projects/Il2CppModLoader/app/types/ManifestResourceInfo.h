#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManifestResourceInfo {
        inline app::ManifestResourceInfo__Class** type_info = (app::ManifestResourceInfo__Class**)(modloader::win::memory::resolve_rva(0x0477B0F0));
        inline app::ManifestResourceInfo__Class* get_class() {
            return il2cpp::get_class<app::ManifestResourceInfo__Class>(type_info, "System.Reflection", "ManifestResourceInfo");
        }
        inline app::ManifestResourceInfo* create() {
            return il2cpp::create_object<app::ManifestResourceInfo>(get_class());
        }
    } // namespace ManifestResourceInfo
} // namespace app::classes::types
