#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexPrefix {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexPrefix__Class** type_info;
        inline app::RegexPrefix__Class* get_class() {
            return il2cpp::get_class<app::RegexPrefix__Class>(type_info, "System.Text.RegularExpressions", "RegexPrefix");
        }
        inline app::RegexPrefix* create() {
            return il2cpp::create_object<app::RegexPrefix>(get_class());
        }
    } // namespace RegexPrefix
} // namespace app::classes::types
