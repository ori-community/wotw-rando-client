#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatFlags__Enum {
        namespace {
            app::DateTimeFormatFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::DateTimeFormatFlags__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeFormatFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatFlags__Enum__Class>(type_info, "System.Globalization", "DateTimeFormatFlags");
        }
        inline app::DateTimeFormatFlags__Enum* create() {
            return il2cpp::create_object<app::DateTimeFormatFlags__Enum>(get_class());
        }
    } // namespace DateTimeFormatFlags__Enum
} // namespace app::classes::types
