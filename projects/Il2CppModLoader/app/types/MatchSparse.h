#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchSparse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MatchSparse__Class** type_info;
        inline app::MatchSparse__Class* get_class() {
            return il2cpp::get_class<app::MatchSparse__Class>(type_info, "System.Text.RegularExpressions", "MatchSparse");
        }
        inline app::MatchSparse* create() {
            return il2cpp::create_object<app::MatchSparse>(get_class());
        }
    } // namespace MatchSparse
} // namespace app::classes::types
