#pragma once
#include <Modloader/app/structs/LeaderboardTableUI.h>
#include <Modloader/app/structs/LeaderboardTableUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardTableUI {
        inline app::LeaderboardTableUI__Class** type_info() {
            static app::LeaderboardTableUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardTableUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardTableUI__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardTableUI__Class>(type_info(), "", "LeaderboardTableUI");
        }
        inline app::LeaderboardTableUI* create() {
            return il2cpp::create_object<app::LeaderboardTableUI>(get_class());
        }
    } // namespace LeaderboardTableUI
} // namespace app::classes::types
