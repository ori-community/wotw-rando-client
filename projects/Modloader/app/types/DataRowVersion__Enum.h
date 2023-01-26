#pragma once
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataRowVersion__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowVersion__Enum {
        inline app::DataRowVersion__Enum__Class** type_info() {
            static app::DataRowVersion__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataRowVersion__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataRowVersion__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataRowVersion__Enum__Class>(type_info(), "System.Data", "DataRowVersion");
        }
        inline app::DataRowVersion__Enum* create() {
            return il2cpp::create_object<app::DataRowVersion__Enum>(get_class());
        }
    } // namespace DataRowVersion__Enum
} // namespace app::classes::types
