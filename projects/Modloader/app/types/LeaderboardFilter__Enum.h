#pragma once
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardFilter__Enum {
        inline app::LeaderboardFilter__Enum__Class** type_info() {
            static app::LeaderboardFilter__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardFilter__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474CB80));
            }
            return cache;
        }
        inline app::LeaderboardFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFilter__Enum__Class>(type_info(), "", "LeaderboardFilter");
        }
        inline app::LeaderboardFilter__Enum* create() {
            return il2cpp::create_object<app::LeaderboardFilter__Enum>(get_class());
        }
    } // namespace LeaderboardFilter__Enum
} // namespace app::classes::types
