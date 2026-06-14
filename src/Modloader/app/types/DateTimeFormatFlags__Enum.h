#pragma once
#include <Modloader/app/structs/DateTimeFormatFlags__Enum.h>
#include <Modloader/app/structs/DateTimeFormatFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatFlags__Enum {
        inline app::DateTimeFormatFlags__Enum__Class** type_info() {
            static app::DateTimeFormatFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeFormatFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeFormatFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatFlags__Enum__Class>(type_info(), "System.Globalization", "DateTimeFormatFlags");
        }
        inline app::DateTimeFormatFlags__Enum* create() {
            return il2cpp::create_object<app::DateTimeFormatFlags__Enum>(get_class());
        }
    } // namespace DateTimeFormatFlags__Enum
} // namespace app::classes::types
