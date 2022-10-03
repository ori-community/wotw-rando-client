#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Calendar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Calendar__Class** type_info;
        inline app::Calendar__Class* get_class() {
            return il2cpp::get_class<app::Calendar__Class>(type_info, "System.Globalization", "Calendar");
        }
        inline app::Calendar* create() {
            return il2cpp::create_object<app::Calendar>(get_class());
        }
    } // namespace Calendar
} // namespace app::classes::types
