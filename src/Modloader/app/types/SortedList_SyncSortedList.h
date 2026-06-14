#pragma once
#include <Modloader/app/structs/SortedList_SyncSortedList.h>
#include <Modloader/app/structs/SortedList_SyncSortedList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortedList_SyncSortedList {
        inline app::SortedList_SyncSortedList__Class** type_info() {
            static app::SortedList_SyncSortedList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortedList_SyncSortedList__Class**)(modloader::win::memory::resolve_rva(0x0471E368));
            }
            return cache;
        }
        inline app::SortedList_SyncSortedList__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_SyncSortedList__Class>(type_info(), "System.Collections", "SortedList", "SyncSortedList");
        }
        inline app::SortedList_SyncSortedList* create() {
            return il2cpp::create_object<app::SortedList_SyncSortedList>(get_class());
        }
    } // namespace SortedList_SyncSortedList
} // namespace app::classes::types
