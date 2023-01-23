#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum__Class.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>

namespace app::classes::types {
    namespace LeaderboardFilter__Enum {
        inline app::LeaderboardFilter__Enum__Class** type_info = (app::LeaderboardFilter__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474CB80));
        inline app::LeaderboardFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFilter__Enum__Class>(type_info, "", "LeaderboardFilter");
        }
        inline app::LeaderboardFilter__Enum* create() {
            return il2cpp::create_object<app::LeaderboardFilter__Enum>(get_class());
        }
    } // namespace LeaderboardFilter__Enum
} // namespace app::classes::types
