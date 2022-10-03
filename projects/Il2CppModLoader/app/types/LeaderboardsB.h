#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardsB {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardsB__Class** type_info;
        inline app::LeaderboardsB__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardsB__Class>(type_info, "", "LeaderboardsB");
        }
        inline app::LeaderboardsB* create() {
            return il2cpp::create_object<app::LeaderboardsB>(get_class());
        }
    } // namespace LeaderboardsB
} // namespace app::classes::types
