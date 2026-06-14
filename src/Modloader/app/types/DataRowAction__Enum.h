#pragma once
#include <Modloader/app/structs/DataRowAction__Enum.h>
#include <Modloader/app/structs/DataRowAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowAction__Enum {
        inline app::DataRowAction__Enum__Class** type_info() {
            static app::DataRowAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataRowAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataRowAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataRowAction__Enum__Class>(type_info(), "System.Data", "DataRowAction");
        }
        inline app::DataRowAction__Enum* create() {
            return il2cpp::create_object<app::DataRowAction__Enum>(get_class());
        }
    } // namespace DataRowAction__Enum
} // namespace app::classes::types
