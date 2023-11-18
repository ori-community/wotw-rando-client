#pragma once
#include <Modloader/app/structs/SortedList_SortedListDebugView.h>
#include <Modloader/app/structs/SortedList_SortedListDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortedList_SortedListDebugView {
        inline app::SortedList_SortedListDebugView__Class** type_info() {
            static app::SortedList_SortedListDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SortedList_SortedListDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SortedList_SortedListDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_SortedListDebugView__Class>(type_info(), "System.Collections", "SortedList", "SortedListDebugView");
        }
        inline app::SortedList_SortedListDebugView* create() {
            return il2cpp::create_object<app::SortedList_SortedListDebugView>(get_class());
        }
    } // namespace SortedList_SortedListDebugView
} // namespace app::classes::types
