#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDashAtackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDashAtackable__Class** type_info;
        inline app::IDashAtackable__Class* get_class() {
            return il2cpp::get_class<app::IDashAtackable__Class>(type_info, "", "IDashAtackable");
        }
    } // namespace IDashAtackable
} // namespace app::classes::types
