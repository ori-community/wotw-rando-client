#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyNotFoundException__Class** type_info;
        inline app::KeyNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::KeyNotFoundException__Class>(type_info, "System.Collections.Generic", "KeyNotFoundException");
        }
        inline app::KeyNotFoundException* create() {
            return il2cpp::create_object<app::KeyNotFoundException>(get_class());
        }
    } // namespace KeyNotFoundException
} // namespace app::classes::types
