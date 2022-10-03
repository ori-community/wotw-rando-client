#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffsetConverter {
        namespace {
            app::DateTimeOffsetConverter__Class* type_info_ref = nullptr;
        }
        app::DateTimeOffsetConverter__Class** type_info = &type_info_ref;
        inline app::DateTimeOffsetConverter__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetConverter__Class>(type_info, "System.ComponentModel", "DateTimeOffsetConverter");
        }
        inline app::DateTimeOffsetConverter* create() {
            return il2cpp::create_object<app::DateTimeOffsetConverter>(get_class());
        }
    } // namespace DateTimeOffsetConverter
} // namespace app::classes::types
