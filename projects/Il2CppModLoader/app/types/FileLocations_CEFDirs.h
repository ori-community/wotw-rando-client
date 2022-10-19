#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileLocations_CEFDirs {
        inline app::FileLocations_CEFDirs__Class** type_info = (app::FileLocations_CEFDirs__Class**)(modloader::win::memory::resolve_rva(0x0470AE50));
        inline app::FileLocations_CEFDirs__Class* get_class() {
            return il2cpp::get_nested_class<app::FileLocations_CEFDirs__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FileLocations", "CEFDirs");
        }
        inline app::FileLocations_CEFDirs* create() {
            return il2cpp::create_object<app::FileLocations_CEFDirs>(get_class());
        }
    } // namespace FileLocations_CEFDirs
} // namespace app::classes::types
