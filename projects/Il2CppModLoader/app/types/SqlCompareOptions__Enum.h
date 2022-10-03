#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlCompareOptions__Enum {
        namespace {
            app::SqlCompareOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::SqlCompareOptions__Enum__Class** type_info = &type_info_ref;
        inline app::SqlCompareOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SqlCompareOptions__Enum__Class>(type_info, "System.Data.SqlTypes", "SqlCompareOptions");
        }
        inline app::SqlCompareOptions__Enum* create() {
            return il2cpp::create_object<app::SqlCompareOptions__Enum>(get_class());
        }
    } // namespace SqlCompareOptions__Enum
} // namespace app::classes::types
