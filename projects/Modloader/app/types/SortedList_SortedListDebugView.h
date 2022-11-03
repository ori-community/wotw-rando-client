#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortedList_SortedListDebugView {
        namespace {
            inline app::SortedList_SortedListDebugView__Class* type_info_ref = nullptr;
        }
        inline app::SortedList_SortedListDebugView__Class** type_info = &type_info_ref;
        inline app::SortedList_SortedListDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_SortedListDebugView__Class>(type_info, "System.Collections", "SortedList", "SortedListDebugView");
        }
        inline app::SortedList_SortedListDebugView* create() {
            return il2cpp::create_object<app::SortedList_SortedListDebugView>(get_class());
        }
    } // namespace SortedList_SortedListDebugView
} // namespace app::classes::types
