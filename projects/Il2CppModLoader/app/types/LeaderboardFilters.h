#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardFilters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardFilters__Class** type_info;
        inline app::LeaderboardFilters__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFilters__Class>(type_info, "", "LeaderboardFilters");
        }
        inline app::LeaderboardFilters* create() {
            return il2cpp::create_object<app::LeaderboardFilters>(get_class());
        }
    } // namespace LeaderboardFilters
} // namespace app::classes::types
