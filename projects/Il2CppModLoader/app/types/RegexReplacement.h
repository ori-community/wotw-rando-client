#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexReplacement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexReplacement__Class** type_info;
        inline app::RegexReplacement__Class* get_class() {
            return il2cpp::get_class<app::RegexReplacement__Class>(type_info, "System.Text.RegularExpressions", "RegexReplacement");
        }
        inline app::RegexReplacement* create() {
            return il2cpp::create_object<app::RegexReplacement>(get_class());
        }
    } // namespace RegexReplacement
} // namespace app::classes::types
