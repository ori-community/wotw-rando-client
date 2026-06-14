#pragma once
#include <Modloader/app/structs/LeaderboardData__Array.h>
#include <Modloader/app/structs/LeaderboardData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardData__Array {
        inline app::LeaderboardData__Array__Class** type_info() {
            static app::LeaderboardData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardData__Array__Class>(type_info(), "", "LeaderboardData[]");
        }
        inline app::LeaderboardData__Array* create() {
            return il2cpp::create_object<app::LeaderboardData__Array>(get_class());
        }
    } // namespace LeaderboardData__Array
} // namespace app::classes::types
