#pragma once
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#include <Modloader/app/structs/ListSortDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListSortDirection__Enum {
        inline app::ListSortDirection__Enum__Class** type_info() {
            static app::ListSortDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ListSortDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ListSortDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::ListSortDirection__Enum__Class>(type_info(), "System.ComponentModel", "ListSortDirection");
        }
        inline app::ListSortDirection__Enum* create() {
            return il2cpp::create_object<app::ListSortDirection__Enum>(get_class());
        }
    } // namespace ListSortDirection__Enum
} // namespace app::classes::types
