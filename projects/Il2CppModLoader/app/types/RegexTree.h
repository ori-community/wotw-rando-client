#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexTree__Class** type_info;
        inline app::RegexTree__Class* get_class() {
            return il2cpp::get_class<app::RegexTree__Class>(type_info, "System.Text.RegularExpressions", "RegexTree");
        }
        inline app::RegexTree* create() {
            return il2cpp::create_object<app::RegexTree>(get_class());
        }
    } // namespace RegexTree
} // namespace app::classes::types
