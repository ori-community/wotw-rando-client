#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserStatsUnloaded_t__Class.h>
#include <Modloader/app/structs/UserStatsUnloaded_t.h>
#include <Modloader/app/structs/UserStatsUnloaded_t__Boxed.h>

namespace app::classes::types {
    namespace UserStatsUnloaded_t {
        namespace {
            inline app::UserStatsUnloaded_t__Class* type_info_ref = nullptr;
        }
        inline app::UserStatsUnloaded_t__Class** type_info = &type_info_ref;
        inline app::UserStatsUnloaded_t__Class* get_class() {
            return il2cpp::get_class<app::UserStatsUnloaded_t__Class>(type_info, "Steamworks", "UserStatsUnloaded_t");
        }
        inline app::UserStatsUnloaded_t* create() {
            return il2cpp::create_object<app::UserStatsUnloaded_t>(get_class());
        }
        inline app::UserStatsUnloaded_t__Boxed* box(app::UserStatsUnloaded_t value) {
            return il2cpp::box_value<app::UserStatsUnloaded_t__Boxed>(get_class(), value);
        }
    } // namespace UserStatsUnloaded_t
} // namespace app::classes::types
