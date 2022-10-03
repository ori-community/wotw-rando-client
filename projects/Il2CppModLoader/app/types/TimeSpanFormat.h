#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpanFormat__Class** type_info;
        inline app::TimeSpanFormat__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanFormat__Class>(type_info, "System.Globalization", "TimeSpanFormat");
        }
        inline app::TimeSpanFormat* create() {
            return il2cpp::create_object<app::TimeSpanFormat>(get_class());
        }
    } // namespace TimeSpanFormat
} // namespace app::classes::types
