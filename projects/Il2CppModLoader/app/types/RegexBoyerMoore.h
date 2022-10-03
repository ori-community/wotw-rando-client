#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexBoyerMoore {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexBoyerMoore__Class** type_info;
        inline app::RegexBoyerMoore__Class* get_class() {
            return il2cpp::get_class<app::RegexBoyerMoore__Class>(type_info, "System.Text.RegularExpressions", "RegexBoyerMoore");
        }
        inline app::RegexBoyerMoore* create() {
            return il2cpp::create_object<app::RegexBoyerMoore>(get_class());
        }
    } // namespace RegexBoyerMoore
} // namespace app::classes::types
