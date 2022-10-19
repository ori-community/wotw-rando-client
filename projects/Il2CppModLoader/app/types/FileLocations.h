#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileLocations {
        inline app::FileLocations__Class** type_info = (app::FileLocations__Class**)(modloader::win::memory::resolve_rva(0x047138D8));
        inline app::FileLocations__Class* get_class() {
            return il2cpp::get_class<app::FileLocations__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FileLocations");
        }
        inline app::FileLocations* create() {
            return il2cpp::create_object<app::FileLocations>(get_class());
        }
    } // namespace FileLocations
} // namespace app::classes::types
