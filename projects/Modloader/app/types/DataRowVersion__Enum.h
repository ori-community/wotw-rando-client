#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRowVersion__Enum {
        namespace {
            inline app::DataRowVersion__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DataRowVersion__Enum__Class** type_info = &type_info_ref;
        inline app::DataRowVersion__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataRowVersion__Enum__Class>(type_info, "System.Data", "DataRowVersion");
        }
        inline app::DataRowVersion__Enum* create() {
            return il2cpp::create_object<app::DataRowVersion__Enum>(get_class());
        }
    } // namespace DataRowVersion__Enum
} // namespace app::classes::types
