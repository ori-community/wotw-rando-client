#pragma once
#include <Modloader/app/structs/LeaderboardData.h>
#include <Modloader/app/structs/LeaderboardData__Array.h>
#include <Modloader/app/structs/LeaderboardData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardData {
        inline app::LeaderboardData__Class** type_info() {
            static app::LeaderboardData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardData__Class**)(modloader::win::memory::resolve_rva(0x04766870));
            }
            return cache;
        }
        inline app::LeaderboardData__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardData__Class>(type_info(), "", "LeaderboardData");
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
