#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VersionNotFoundException {
        inline app::VersionNotFoundException__Class** type_info = (app::VersionNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04746BB8));
        inline app::VersionNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::VersionNotFoundException__Class>(type_info, "System.Data", "VersionNotFoundException");
        }
        inline app::VersionNotFoundException* create() {
            return il2cpp::create_object<app::VersionNotFoundException>(get_class());
        }
    } // namespace VersionNotFoundException
} // namespace app::classes::types
