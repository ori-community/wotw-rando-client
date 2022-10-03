#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatInfoScanner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeFormatInfoScanner__Class** type_info;
        inline app::DateTimeFormatInfoScanner__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatInfoScanner__Class>(type_info, "System.Globalization", "DateTimeFormatInfoScanner");
        }
        inline app::DateTimeFormatInfoScanner* create() {
            return il2cpp::create_object<app::DateTimeFormatInfoScanner>(get_class());
        }
    } // namespace DateTimeFormatInfoScanner
} // namespace app::classes::types
