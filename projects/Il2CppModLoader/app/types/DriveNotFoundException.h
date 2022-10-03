#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DriveNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DriveNotFoundException__Class** type_info;
        inline app::DriveNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DriveNotFoundException__Class>(type_info, "System.IO", "DriveNotFoundException");
        }
        inline app::DriveNotFoundException* create() {
            return il2cpp::create_object<app::DriveNotFoundException>(get_class());
        }
    } // namespace DriveNotFoundException
} // namespace app::classes::types
