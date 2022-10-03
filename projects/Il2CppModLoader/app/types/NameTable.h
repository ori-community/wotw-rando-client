#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameTable__Class** type_info;
        inline app::NameTable__Class* get_class() {
            return il2cpp::get_class<app::NameTable__Class>(type_info, "System.Xml", "NameTable");
        }
        inline app::NameTable* create() {
            return il2cpp::create_object<app::NameTable>(get_class());
        }
    } // namespace NameTable
} // namespace app::classes::types
