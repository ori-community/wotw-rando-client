#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardsB__Class.h>
#include <Modloader/app/structs/LeaderboardsB.h>

namespace app::classes::types {
    namespace LeaderboardsB {
        inline app::LeaderboardsB__Class** type_info = (app::LeaderboardsB__Class**)(modloader::win::memory::resolve_rva(0x04737420));
        inline app::LeaderboardsB__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardsB__Class>(type_info, "", "LeaderboardsB");
        }
        inline app::LeaderboardsB* create() {
            return il2cpp::create_object<app::LeaderboardsB>(get_class());
        }
    } // namespace LeaderboardsB
} // namespace app::classes::types
