#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeFormat__Class** type_info;
        inline app::DateTimeFormat__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormat__Class>(type_info, "System", "DateTimeFormat");
        }
        inline app::DateTimeFormat* create() {
            return il2cpp::create_object<app::DateTimeFormat>(get_class());
        }
    } // namespace DateTimeFormat
} // namespace app::classes::types
