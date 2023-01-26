#pragma once
#include <Modloader/app/structs/LeaderboardFilters.h>
#include <Modloader/app/structs/LeaderboardFilters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardFilters {
        inline app::LeaderboardFilters__Class** type_info() {
            static app::LeaderboardFilters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardFilters__Class**)(modloader::win::memory::resolve_rva(0x047613A8));
            }
            return cache;
        }
        inline app::LeaderboardFilters__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFilters__Class>(type_info(), "", "LeaderboardFilters");
        }
        inline app::LeaderboardFilters* create() {
            return il2cpp::create_object<app::LeaderboardFilters>(get_class());
        }
    } // namespace LeaderboardFilters
} // namespace app::classes::types
