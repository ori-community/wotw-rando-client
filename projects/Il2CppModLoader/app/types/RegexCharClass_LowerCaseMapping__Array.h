#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexCharClass_LowerCaseMapping__Array {
        inline app::RegexCharClass_LowerCaseMapping__Array__Class** type_info = (app::RegexCharClass_LowerCaseMapping__Array__Class**)(modloader::win::memory::resolve_rva(0x04718040));
        inline app::RegexCharClass_LowerCaseMapping__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexCharClass_LowerCaseMapping__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexCharClass+LowerCaseMapping[]");
        }
        inline app::RegexCharClass_LowerCaseMapping__Array* create() {
            return il2cpp::create_object<app::RegexCharClass_LowerCaseMapping__Array>(get_class());
        }
    } // namespace RegexCharClass_LowerCaseMapping__Array
} // namespace app::classes::types
