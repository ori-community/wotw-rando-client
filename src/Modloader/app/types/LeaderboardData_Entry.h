#pragma once
#include <Modloader/app/structs/LeaderboardData_Entry.h>
#include <Modloader/app/structs/LeaderboardData_Entry__Array.h>
#include <Modloader/app/structs/LeaderboardData_Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardData_Entry {
        inline app::LeaderboardData_Entry__Class** type_info() {
            static app::LeaderboardData_Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardData_Entry__Class**)(modloader::win::memory::resolve_rva(0x0475B880));
            }
            return cache;
        }
        inline app::LeaderboardData_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardData_Entry__Class>(type_info(), "", "LeaderboardData", "Entry");
        }
        inline app::LeaderboardData_Entry* create() {
            return il2cpp::create_object<app::LeaderboardData_Entry>(get_class());
        }
        inline app::LeaderboardData_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaderboardData_Entry__Array>(get_class(), size);
        }
        inline app::LeaderboardData_Entry__Array* create_array(const std::vector<app::LeaderboardData_Entry*>& items) {
            return il2cpp::array_new<app::LeaderboardData_Entry__Array>(get_class(), items);
        }
    } // namespace LeaderboardData_Entry
} // namespace app::classes::types
