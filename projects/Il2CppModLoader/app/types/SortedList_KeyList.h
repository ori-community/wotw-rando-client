#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortedList_KeyList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortedList_KeyList__Class** type_info;
        inline app::SortedList_KeyList__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_KeyList__Class>(type_info, "System.Collections", "SortedList", "KeyList");
        }
        inline app::SortedList_KeyList* create() {
            return il2cpp::create_object<app::SortedList_KeyList>(get_class());
        }
    } // namespace SortedList_KeyList
} // namespace app::classes::types
