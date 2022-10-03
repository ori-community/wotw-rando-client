#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameTable_Entry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameTable_Entry__Array__Class** type_info;
        inline app::NameTable_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::NameTable_Entry__Array__Class>(type_info, "System.Xml", "NameTable+Entry[]");
        }
        inline app::NameTable_Entry__Array* create() {
            return il2cpp::create_object<app::NameTable_Entry__Array>(get_class());
        }
    } // namespace NameTable_Entry__Array
} // namespace app::classes::types
