#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeStyles__Enum {
        namespace {
            app::DateTimeStyles__Enum__Class* type_info_ref = nullptr;
        }
        app::DateTimeStyles__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeStyles__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeStyles__Enum__Class>(type_info, "System.Globalization", "DateTimeStyles");
        }
        inline app::DateTimeStyles__Enum* create() {
            return il2cpp::create_object<app::DateTimeStyles__Enum>(get_class());
        }
    } // namespace DateTimeStyles__Enum
} // namespace app::classes::types
