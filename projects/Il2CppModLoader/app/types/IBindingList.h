#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBindingList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBindingList__Class** type_info;
        inline app::IBindingList__Class* get_class() {
            return il2cpp::get_class<app::IBindingList__Class>(type_info, "System.ComponentModel", "IBindingList");
        }
    } // namespace IBindingList
} // namespace app::classes::types
