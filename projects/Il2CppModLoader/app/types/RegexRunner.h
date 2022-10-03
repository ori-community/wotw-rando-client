#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexRunner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexRunner__Class** type_info;
        inline app::RegexRunner__Class* get_class() {
            return il2cpp::get_class<app::RegexRunner__Class>(type_info, "System.Text.RegularExpressions", "RegexRunner");
        }
        inline app::RegexRunner* create() {
            return il2cpp::create_object<app::RegexRunner>(get_class());
        }
    } // namespace RegexRunner
} // namespace app::classes::types
