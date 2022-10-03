#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexFCD {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexFCD__Class** type_info;
        inline app::RegexFCD__Class* get_class() {
            return il2cpp::get_class<app::RegexFCD__Class>(type_info, "System.Text.RegularExpressions", "RegexFCD");
        }
        inline app::RegexFCD* create() {
            return il2cpp::create_object<app::RegexFCD>(get_class());
        }
    } // namespace RegexFCD
} // namespace app::classes::types
