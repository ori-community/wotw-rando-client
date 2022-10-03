#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileLocations_CEFDirs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileLocations_CEFDirs__Class** type_info;
        inline app::FileLocations_CEFDirs__Class* get_class() {
            return il2cpp::get_nested_class<app::FileLocations_CEFDirs__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FileLocations", "CEFDirs");
        }
        inline app::FileLocations_CEFDirs* create() {
            return il2cpp::create_object<app::FileLocations_CEFDirs>(get_class());
        }
    } // namespace FileLocations_CEFDirs
} // namespace app::classes::types
