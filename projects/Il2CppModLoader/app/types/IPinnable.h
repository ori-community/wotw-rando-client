#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPinnable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPinnable__Class** type_info;
        inline app::IPinnable__Class* get_class() {
            return il2cpp::get_class<app::IPinnable__Class>(type_info, "", "IPinnable");
        }
        inline app::IPinnable* create() {
            return il2cpp::create_object<app::IPinnable>(get_class());
        }
    } // namespace IPinnable
} // namespace app::classes::types
