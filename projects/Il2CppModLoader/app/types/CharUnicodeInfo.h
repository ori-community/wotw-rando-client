#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharUnicodeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharUnicodeInfo__Class** type_info;
        inline app::CharUnicodeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharUnicodeInfo__Class>(type_info, "System.Globalization", "CharUnicodeInfo");
        }
        inline app::CharUnicodeInfo* create() {
            return il2cpp::create_object<app::CharUnicodeInfo>(get_class());
        }
    } // namespace CharUnicodeInfo
} // namespace app::classes::types
