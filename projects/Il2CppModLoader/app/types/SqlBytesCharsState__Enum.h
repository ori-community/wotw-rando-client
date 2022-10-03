#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlBytesCharsState__Enum {
        namespace {
            app::SqlBytesCharsState__Enum__Class* type_info_ref = nullptr;
        }
        app::SqlBytesCharsState__Enum__Class** type_info = &type_info_ref;
        inline app::SqlBytesCharsState__Enum__Class* get_class() {
            return il2cpp::get_class<app::SqlBytesCharsState__Enum__Class>(type_info, "System.Data.SqlTypes", "SqlBytesCharsState");
        }
        inline app::SqlBytesCharsState__Enum* create() {
            return il2cpp::create_object<app::SqlBytesCharsState__Enum>(get_class());
        }
    } // namespace SqlBytesCharsState__Enum
} // namespace app::classes::types
