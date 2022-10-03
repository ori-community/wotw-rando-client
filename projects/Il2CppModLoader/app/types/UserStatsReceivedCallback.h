#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserStatsReceivedCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserStatsReceivedCallback__Class** type_info;
        inline app::UserStatsReceivedCallback__Class* get_class() {
            return il2cpp::get_class<app::UserStatsReceivedCallback__Class>(type_info, "Steamworks", "UserStatsReceivedCallback");
        }
        inline app::UserStatsReceivedCallback* create() {
            return il2cpp::create_object<app::UserStatsReceivedCallback>(get_class());
        }
    } // namespace UserStatsReceivedCallback
} // namespace app::classes::types
