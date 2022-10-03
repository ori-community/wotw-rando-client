#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserStatsStored_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserStatsStored_t__Class** type_info;
        inline app::UserStatsStored_t__Class* get_class() {
            return il2cpp::get_class<app::UserStatsStored_t__Class>(type_info, "Steamworks", "UserStatsStored_t");
        }
        inline app::UserStatsStored_t* create() {
            return il2cpp::create_object<app::UserStatsStored_t>(get_class());
        }
        inline app::UserStatsStored_t__Boxed* box(app::UserStatsStored_t value) {
            return il2cpp::box_value<app::UserStatsStored_t__Boxed>(get_class(), value);
        }
    } // namespace UserStatsStored_t
} // namespace app::classes::types
