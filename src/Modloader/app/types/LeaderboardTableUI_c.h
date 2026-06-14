#pragma once
#include <Modloader/app/structs/LeaderboardTableUI_c.h>
#include <Modloader/app/structs/LeaderboardTableUI_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardTableUI_c {
        inline app::LeaderboardTableUI_c__Class** type_info() {
            static app::LeaderboardTableUI_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardTableUI_c__Class**)(modloader::win::memory::resolve_rva(0x04740CF8));
            }
            return cache;
        }
        inline app::LeaderboardTableUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardTableUI_c__Class>(type_info(), "", "LeaderboardTableUI", "<>c");
        }
        inline app::LeaderboardTableUI_c* create() {
            return il2cpp::create_object<app::LeaderboardTableUI_c>(get_class());
        }
    } // namespace LeaderboardTableUI_c
} // namespace app::classes::types
