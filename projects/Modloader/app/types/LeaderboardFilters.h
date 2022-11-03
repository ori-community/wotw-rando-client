#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardFilters {
        inline app::LeaderboardFilters__Class** type_info = (app::LeaderboardFilters__Class**)(modloader::win::memory::resolve_rva(0x047613A8));
        inline app::LeaderboardFilters__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFilters__Class>(type_info, "", "LeaderboardFilters");
        }
        inline app::LeaderboardFilters* create() {
            return il2cpp::create_object<app::LeaderboardFilters>(get_class());
        }
    } // namespace LeaderboardFilters
} // namespace app::classes::types
