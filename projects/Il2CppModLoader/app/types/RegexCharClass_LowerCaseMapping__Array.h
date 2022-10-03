#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_LowerCaseMapping__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexCharClass_LowerCaseMapping__Array__Class** type_info;
        inline app::RegexCharClass_LowerCaseMapping__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexCharClass_LowerCaseMapping__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexCharClass+LowerCaseMapping[]");
        }
        inline app::RegexCharClass_LowerCaseMapping__Array* create() {
            return il2cpp::create_object<app::RegexCharClass_LowerCaseMapping__Array>(get_class());
        }
    } // namespace RegexCharClass_LowerCaseMapping__Array
} // namespace app::classes::types
