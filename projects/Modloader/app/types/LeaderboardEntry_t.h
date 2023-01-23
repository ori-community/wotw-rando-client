#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardEntry_t__Class.h>
#include <Modloader/app/structs/LeaderboardEntry_t.h>
#include <Modloader/app/structs/LeaderboardEntry_t__Boxed.h>

namespace app::classes::types {
    namespace LeaderboardEntry_t {
        namespace {
            inline app::LeaderboardEntry_t__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardEntry_t__Class** type_info = &type_info_ref;
        inline app::LeaderboardEntry_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardEntry_t__Class>(type_info, "Steamworks", "LeaderboardEntry_t");
        }
        inline app::LeaderboardEntry_t* create() {
            return il2cpp::create_object<app::LeaderboardEntry_t>(get_class());
        }
        inline app::LeaderboardEntry_t__Boxed* box(app::LeaderboardEntry_t value) {
            return il2cpp::box_value<app::LeaderboardEntry_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardEntry_t
} // namespace app::classes::types
