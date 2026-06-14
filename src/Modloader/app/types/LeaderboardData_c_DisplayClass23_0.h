#pragma once
#include <Modloader/app/structs/LeaderboardData_c_DisplayClass23_0.h>
#include <Modloader/app/structs/LeaderboardData_c_DisplayClass23_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardData_c_DisplayClass23_0 {
        inline app::LeaderboardData_c_DisplayClass23_0__Class** type_info() {
            static app::LeaderboardData_c_DisplayClass23_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardData_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x04704E70));
            }
            return cache;
        }
        inline app::LeaderboardData_c_DisplayClass23_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardData_c_DisplayClass23_0__Class>(type_info(), "", "LeaderboardData", "<>c__DisplayClass23_0");
        }
        inline app::LeaderboardData_c_DisplayClass23_0* create() {
            return il2cpp::create_object<app::LeaderboardData_c_DisplayClass23_0>(get_class());
        }
    } // namespace LeaderboardData_c_DisplayClass23_0
} // namespace app::classes::types
