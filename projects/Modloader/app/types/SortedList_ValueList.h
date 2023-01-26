#pragma once
#include <Modloader/app/structs/SortedList_ValueList.h>
#include <Modloader/app/structs/SortedList_ValueList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortedList_ValueList {
        inline app::SortedList_ValueList__Class** type_info() {
            static app::SortedList_ValueList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortedList_ValueList__Class**)(modloader::win::memory::resolve_rva(0x0478D160));
            }
            return cache;
        }
        inline app::SortedList_ValueList__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_ValueList__Class>(type_info(), "System.Collections", "SortedList", "ValueList");
        }
        inline app::SortedList_ValueList* create() {
            return il2cpp::create_object<app::SortedList_ValueList>(get_class());
        }
    } // namespace SortedList_ValueList
} // namespace app::classes::types
