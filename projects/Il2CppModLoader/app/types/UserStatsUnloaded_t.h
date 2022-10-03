#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserStatsUnloaded_t {
        namespace {
            app::UserStatsUnloaded_t__Class* type_info_ref = nullptr;
        }
        app::UserStatsUnloaded_t__Class** type_info = &type_info_ref;
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
