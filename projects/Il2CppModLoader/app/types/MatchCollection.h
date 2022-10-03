#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MatchCollection__Class** type_info;
        inline app::MatchCollection__Class* get_class() {
            return il2cpp::get_class<app::MatchCollection__Class>(type_info, "System.Text.RegularExpressions", "MatchCollection");
        }
        inline app::MatchCollection* create() {
            return il2cpp::create_object<app::MatchCollection>(get_class());
        }
    } // namespace MatchCollection
} // namespace app::classes::types
