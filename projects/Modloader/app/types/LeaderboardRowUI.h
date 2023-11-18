#pragma once
#include <Modloader/app/structs/LeaderboardRowUI.h>
#include <Modloader/app/structs/LeaderboardRowUI__Array.h>
#include <Modloader/app/structs/LeaderboardRowUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardRowUI {
        inline app::LeaderboardRowUI__Class** type_info() {
            static app::LeaderboardRowUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardRowUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardRowUI__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardRowUI__Class>(type_info(), "", "LeaderboardRowUI");
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
