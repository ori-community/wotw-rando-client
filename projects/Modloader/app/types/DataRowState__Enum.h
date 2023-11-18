#pragma once
#include <Modloader/app/structs/DataRowState__Enum.h>
#include <Modloader/app/structs/DataRowState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowState__Enum {
        inline app::DataRowState__Enum__Class** type_info() {
            static app::DataRowState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataRowState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataRowState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataRowState__Enum__Class>(type_info(), "System.Data", "DataRowState");
        }
        inline app::DataRowState__Enum* create() {
            return il2cpp::create_object<app::DataRowState__Enum>(get_class());
        }
    } // namespace DataRowState__Enum
} // namespace app::classes::types
