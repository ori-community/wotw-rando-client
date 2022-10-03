#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexInterpreter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexInterpreter__Class** type_info;
        inline app::RegexInterpreter__Class* get_class() {
            return il2cpp::get_class<app::RegexInterpreter__Class>(type_info, "System.Text.RegularExpressions", "RegexInterpreter");
        }
        inline app::RegexInterpreter* create() {
            return il2cpp::create_object<app::RegexInterpreter>(get_class());
        }
    } // namespace RegexInterpreter
} // namespace app::classes::types
