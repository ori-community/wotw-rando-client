#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserStatsStoredCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserStatsStoredCallback__Class** type_info;
        inline app::UserStatsStoredCallback__Class* get_class() {
            return il2cpp::get_class<app::UserStatsStoredCallback__Class>(type_info, "Steamworks", "UserStatsStoredCallback");
        }
        inline app::UserStatsStoredCallback* create() {
            return il2cpp::create_object<app::UserStatsStoredCallback>(get_class());
        }
    } // namespace UserStatsStoredCallback
} // namespace app::classes::types
