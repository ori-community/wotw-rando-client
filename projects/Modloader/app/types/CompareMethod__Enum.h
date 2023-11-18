#pragma once
#include <Modloader/app/structs/CompareMethod__Enum.h>
#include <Modloader/app/structs/CompareMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompareMethod__Enum {
        inline app::CompareMethod__Enum__Class** type_info() {
            static app::CompareMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompareMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompareMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompareMethod__Enum__Class>(type_info(), "", "CompareMethod");
        }
        inline app::CompareMethod__Enum* create() {
            return il2cpp::create_object<app::CompareMethod__Enum>(get_class());
        }
    } // namespace CompareMethod__Enum
} // namespace app::classes::types
