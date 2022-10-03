#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexWriter__Class** type_info;
        inline app::RegexWriter__Class* get_class() {
            return il2cpp::get_class<app::RegexWriter__Class>(type_info, "System.Text.RegularExpressions", "RegexWriter");
        }
        inline app::RegexWriter* create() {
            return il2cpp::create_object<app::RegexWriter>(get_class());
        }
    } // namespace RegexWriter
} // namespace app::classes::types
