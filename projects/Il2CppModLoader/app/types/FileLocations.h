#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileLocations {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileLocations__Class** type_info;
        inline app::FileLocations__Class* get_class() {
            return il2cpp::get_class<app::FileLocations__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FileLocations");
        }
        inline app::FileLocations* create() {
            return il2cpp::create_object<app::FileLocations>(get_class());
        }
    } // namespace FileLocations
} // namespace app::classes::types
