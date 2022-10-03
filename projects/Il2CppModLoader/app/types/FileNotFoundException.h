#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileNotFoundException__Class** type_info;
        inline app::FileNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::FileNotFoundException__Class>(type_info, "System.IO", "FileNotFoundException");
        }
        inline app::FileNotFoundException* create() {
            return il2cpp::create_object<app::FileNotFoundException>(get_class());
        }
    } // namespace FileNotFoundException
} // namespace app::classes::types
