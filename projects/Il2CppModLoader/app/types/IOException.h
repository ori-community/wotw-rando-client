#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IOException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IOException__Class** type_info;
        inline app::IOException__Class* get_class() {
            return il2cpp::get_class<app::IOException__Class>(type_info, "System.IO", "IOException");
        }
        inline app::IOException* create() {
            return il2cpp::create_object<app::IOException>(get_class());
        }
    } // namespace IOException
} // namespace app::classes::types
