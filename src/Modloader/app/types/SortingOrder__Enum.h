#pragma once
#include <Modloader/app/structs/SortingOrder__Enum.h>
#include <Modloader/app/structs/SortingOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortingOrder__Enum {
        inline app::SortingOrder__Enum__Class** type_info() {
            static app::SortingOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SortingOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SortingOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::SortingOrder__Enum__Class>(type_info(), "SystemIntegration", "SortingOrder");
        }
        inline app::SortingOrder__Enum* create() {
            return il2cpp::create_object<app::SortingOrder__Enum>(get_class());
        }
    } // namespace SortingOrder__Enum
} // namespace app::classes::types
