#pragma once
#include <Modloader/app/structs/LeaderboardData_Entry__Array.h>
#include <Modloader/app/structs/LeaderboardData_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardData_Entry__Array {
        inline app::LeaderboardData_Entry__Array__Class** type_info() {
            static app::LeaderboardData_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardData_Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardData_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardData_Entry__Array__Class>(type_info(), "", "LeaderboardData+Entry[]");
        }
        inline app::LeaderboardData_Entry__Array* create() {
            return il2cpp::create_object<app::LeaderboardData_Entry__Array>(get_class());
        }
    } // namespace LeaderboardData_Entry__Array
} // namespace app::classes::types
