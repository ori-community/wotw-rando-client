#pragma once
#include <Modloader/app/structs/SqlCompareOptions__Enum.h>
#include <Modloader/app/structs/SqlCompareOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlCompareOptions__Enum {
        inline app::SqlCompareOptions__Enum__Class** type_info() {
            static app::SqlCompareOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SqlCompareOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SqlCompareOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SqlCompareOptions__Enum__Class>(type_info(), "System.Data.SqlTypes", "SqlCompareOptions");
        }
        inline app::SqlCompareOptions__Enum* create() {
            return il2cpp::create_object<app::SqlCompareOptions__Enum>(get_class());
        }
    } // namespace SqlCompareOptions__Enum
} // namespace app::classes::types
