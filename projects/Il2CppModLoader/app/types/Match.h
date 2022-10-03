#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Match {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Match__Class** type_info;
        inline app::Match__Class* get_class() {
            return il2cpp::get_class<app::Match__Class>(type_info, "System.Text.RegularExpressions", "Match");
        }
        inline app::Match* create() {
            return il2cpp::create_object<app::Match>(get_class());
        }
    } // namespace Match
} // namespace app::classes::types
