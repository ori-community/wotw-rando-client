#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardTableUI {
        namespace {
            inline app::LeaderboardTableUI__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardTableUI__Class** type_info = &type_info_ref;
        inline app::LeaderboardTableUI__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardTableUI__Class>(type_info, "", "LeaderboardTableUI");
        }
        inline app::LeaderboardTableUI* create() {
            return il2cpp::create_object<app::LeaderboardTableUI>(get_class());
        }
    } // namespace LeaderboardTableUI
} // namespace app::classes::types
