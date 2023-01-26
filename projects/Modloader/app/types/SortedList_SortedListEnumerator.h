#pragma once
#include <Modloader/app/structs/SortedList_SortedListEnumerator.h>
#include <Modloader/app/structs/SortedList_SortedListEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortedList_SortedListEnumerator {
        inline app::SortedList_SortedListEnumerator__Class** type_info() {
            static app::SortedList_SortedListEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortedList_SortedListEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0478C2B8));
            }
            return cache;
        }
        inline app::SortedList_SortedListEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_SortedListEnumerator__Class>(type_info(), "System.Collections", "SortedList", "SortedListEnumerator");
        }
        inline app::SortedList_SortedListEnumerator* create() {
            return il2cpp::create_object<app::SortedList_SortedListEnumerator>(get_class());
        }
    } // namespace SortedList_SortedListEnumerator
} // namespace app::classes::types
