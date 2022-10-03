#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpanParse__Class** type_info;
        inline app::TimeSpanParse__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanParse__Class>(type_info, "System.Globalization", "TimeSpanParse");
        }
        inline app::TimeSpanParse* create() {
            return il2cpp::create_object<app::TimeSpanParse>(get_class());
        }
    } // namespace TimeSpanParse
} // namespace app::classes::types
