#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeConverter {
        namespace {
            app::DateTimeConverter__Class* type_info_ref = nullptr;
        }
        app::DateTimeConverter__Class** type_info = &type_info_ref;
        inline app::DateTimeConverter__Class* get_class() {
            return il2cpp::get_class<app::DateTimeConverter__Class>(type_info, "System.ComponentModel", "DateTimeConverter");
        }
        inline app::DateTimeConverter* create() {
            return il2cpp::create_object<app::DateTimeConverter>(get_class());
        }
    } // namespace DateTimeConverter
} // namespace app::classes::types
