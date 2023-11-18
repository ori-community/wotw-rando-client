#pragma once
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/SortedList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortedList {
        inline app::SortedList__Class** type_info() {
            static app::SortedList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortedList__Class**)(modloader::win::memory::resolve_rva(0x047128C8));
            }
            return cache;
        }
        inline app::SortedList__Class* get_class() {
            return il2cpp::get_class<app::SortedList__Class>(type_info(), "System.Collections", "SortedList");
        }
        inline app::SortedList* create() {
            return il2cpp::create_object<app::SortedList>(get_class());
        }
    } // namespace SortedList
} // namespace app::classes::types
