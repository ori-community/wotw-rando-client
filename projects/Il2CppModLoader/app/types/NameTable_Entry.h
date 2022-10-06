#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameTable_Entry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameTable_Entry__Class** type_info;
        inline app::NameTable_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::NameTable_Entry__Class>(type_info, "System.Xml", "NameTable", "Entry");
        }
        inline app::NameTable_Entry* create() {
            return il2cpp::create_object<app::NameTable_Entry>(get_class());
        }
        inline app::NameTable_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::NameTable_Entry__Array>(get_class(), size);
        }
        inline app::NameTable_Entry__Array* create_array(const std::vector<app::NameTable_Entry*>& items) {
            return il2cpp::array_new<app::NameTable_Entry__Array>(get_class(), items);
        }
    } // namespace NameTable_Entry
} // namespace app::classes::types
