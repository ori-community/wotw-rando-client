#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardTableUI_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardTableUI_c__Class** type_info;
        inline app::LeaderboardTableUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardTableUI_c__Class>(type_info, "", "LeaderboardTableUI", "<>c");
        }
        inline app::LeaderboardTableUI_c* create() {
            return il2cpp::create_object<app::LeaderboardTableUI_c>(get_class());
        }
    } // namespace LeaderboardTableUI_c
} // namespace app::classes::types
