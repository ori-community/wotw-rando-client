#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexCode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexCode__Class** type_info;
        inline app::RegexCode__Class* get_class() {
            return il2cpp::get_class<app::RegexCode__Class>(type_info, "System.Text.RegularExpressions", "RegexCode");
        }
        inline app::RegexCode* create() {
            return il2cpp::create_object<app::RegexCode>(get_class());
        }
    } // namespace RegexCode
} // namespace app::classes::types
