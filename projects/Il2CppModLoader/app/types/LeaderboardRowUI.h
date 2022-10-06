#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardRowUI {
        namespace {
            app::LeaderboardRowUI__Class* type_info_ref = nullptr;
        }
        app::LeaderboardRowUI__Class** type_info = &type_info_ref;
        inline app::LeaderboardRowUI__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardRowUI__Class>(type_info, "", "LeaderboardRowUI");
        }
        inline app::LeaderboardRowUI* create() {
            return il2cpp::create_object<app::LeaderboardRowUI>(get_class());
        }
        inline app::LeaderboardRowUI__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaderboardRowUI__Array>(get_class(), size);
        }
        inline app::LeaderboardRowUI__Array* create_array(const std::vector<app::LeaderboardRowUI*>& items) {
            return il2cpp::array_new<app::LeaderboardRowUI__Array>(get_class(), items);
        }
    } // namespace LeaderboardRowUI
} // namespace app::classes::types
