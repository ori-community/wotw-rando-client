#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SortedList_KeyList__Class.h>
#include <Modloader/app/structs/SortedList_KeyList.h>

namespace app::classes::types {
    namespace SortedList_KeyList {
        inline app::SortedList_KeyList__Class** type_info = (app::SortedList_KeyList__Class**)(modloader::win::memory::resolve_rva(0x047839A8));
        inline app::SortedList_KeyList__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_KeyList__Class>(type_info, "System.Collections", "SortedList", "KeyList");
        }
        inline app::SortedList_KeyList* create() {
            return il2cpp::create_object<app::SortedList_KeyList>(get_class());
        }
    } // namespace SortedList_KeyList
} // namespace app::classes::types
