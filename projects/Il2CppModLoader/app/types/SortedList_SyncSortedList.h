#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortedList_SyncSortedList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortedList_SyncSortedList__Class** type_info;
        inline app::SortedList_SyncSortedList__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_SyncSortedList__Class>(type_info, "System.Collections", "SortedList", "SyncSortedList");
        }
        inline app::SortedList_SyncSortedList* create() {
            return il2cpp::create_object<app::SortedList_SyncSortedList>(get_class());
        }
    } // namespace SortedList_SyncSortedList
} // namespace app::classes::types
