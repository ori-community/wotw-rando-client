#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardData__Class** type_info;
        inline app::LeaderboardData__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardData__Class>(type_info, "", "LeaderboardData");
        }
        inline app::LeaderboardData* create() {
            return il2cpp::create_object<app::LeaderboardData>(get_class());
        }
        inline app::LeaderboardData__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaderboardData__Array>(get_class(), size);
        }
        inline app::LeaderboardData__Array* create_array(const std::vector<app::LeaderboardData*>& items) {
            return il2cpp::array_new<app::LeaderboardData__Array>(get_class(), items);
        }
    } // namespace LeaderboardData
} // namespace app::classes::types
