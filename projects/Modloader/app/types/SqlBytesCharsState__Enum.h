#pragma once
#include <Modloader/app/structs/SqlBytesCharsState__Enum.h>
#include <Modloader/app/structs/SqlBytesCharsState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlBytesCharsState__Enum {
        inline app::SqlBytesCharsState__Enum__Class** type_info() {
            static app::SqlBytesCharsState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SqlBytesCharsState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SqlBytesCharsState__Enum__Class* get_class() {
            return il2cpp::get_class<app::SqlBytesCharsState__Enum__Class>(type_info(), "System.Data.SqlTypes", "SqlBytesCharsState");
        }
        inline app::SqlBytesCharsState__Enum* create() {
            return il2cpp::create_object<app::SqlBytesCharsState__Enum>(get_class());
        }
    } // namespace SqlBytesCharsState__Enum
} // namespace app::classes::types
