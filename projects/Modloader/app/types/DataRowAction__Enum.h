#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRowAction__Enum {
        namespace {
            inline app::DataRowAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DataRowAction__Enum__Class** type_info = &type_info_ref;
        inline app::DataRowAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataRowAction__Enum__Class>(type_info, "System.Data", "DataRowAction");
        }
        inline app::DataRowAction__Enum* create() {
            return il2cpp::create_object<app::DataRowAction__Enum>(get_class());
        }
    } // namespace DataRowAction__Enum
} // namespace app::classes::types
