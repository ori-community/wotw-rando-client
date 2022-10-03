#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManifestResourceInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ManifestResourceInfo__Class** type_info;
        inline app::ManifestResourceInfo__Class* get_class() {
            return il2cpp::get_class<app::ManifestResourceInfo__Class>(type_info, "System.Reflection", "ManifestResourceInfo");
        }
        inline app::ManifestResourceInfo* create() {
            return il2cpp::create_object<app::ManifestResourceInfo>(get_class());
        }
    } // namespace ManifestResourceInfo
} // namespace app::classes::types
