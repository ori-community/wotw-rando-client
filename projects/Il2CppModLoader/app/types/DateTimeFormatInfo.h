#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeFormatInfo__Class** type_info;
        inline app::DateTimeFormatInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatInfo__Class>(type_info, "System.Globalization", "DateTimeFormatInfo");
        }
        inline app::DateTimeFormatInfo* create() {
            return il2cpp::create_object<app::DateTimeFormatInfo>(get_class());
        }
    } // namespace DateTimeFormatInfo
} // namespace app::classes::types
