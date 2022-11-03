#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardFindResult_t {
        namespace {
            inline app::LeaderboardFindResult_t__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardFindResult_t__Class** type_info = &type_info_ref;
        inline app::LeaderboardFindResult_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFindResult_t__Class>(type_info, "Steamworks", "LeaderboardFindResult_t");
        }
        inline app::LeaderboardFindResult_t* create() {
            return il2cpp::create_object<app::LeaderboardFindResult_t>(get_class());
        }
        inline app::LeaderboardFindResult_t__Boxed* box(app::LeaderboardFindResult_t value) {
            return il2cpp::box_value<app::LeaderboardFindResult_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardFindResult_t
} // namespace app::classes::types
