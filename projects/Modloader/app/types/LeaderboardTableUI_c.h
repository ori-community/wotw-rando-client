#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardTableUI_c {
        inline app::LeaderboardTableUI_c__Class** type_info = (app::LeaderboardTableUI_c__Class**)(modloader::win::memory::resolve_rva(0x04740CF8));
        inline app::LeaderboardTableUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardTableUI_c__Class>(type_info, "", "LeaderboardTableUI", "<>c");
        }
        inline app::LeaderboardTableUI_c* create() {
            return il2cpp::create_object<app::LeaderboardTableUI_c>(get_class());
        }
    } // namespace LeaderboardTableUI_c
} // namespace app::classes::types
