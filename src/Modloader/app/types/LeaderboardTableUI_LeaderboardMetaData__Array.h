#pragma once
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData__Array.h>
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardTableUI_LeaderboardMetaData__Array {
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array__Class** type_info() {
            static app::LeaderboardTableUI_LeaderboardMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardTableUI_LeaderboardMetaData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardTableUI_LeaderboardMetaData__Array__Class>(type_info(), "", "LeaderboardTableUI+LeaderboardMetaData[]");
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array* create() {
            return il2cpp::create_object<app::LeaderboardTableUI_LeaderboardMetaData__Array>(get_class());
        }
    } // namespace LeaderboardTableUI_LeaderboardMetaData__Array
} // namespace app::classes::types
