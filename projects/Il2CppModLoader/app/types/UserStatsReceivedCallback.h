#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserStatsReceivedCallback {
        inline app::UserStatsReceivedCallback__Class** type_info = (app::UserStatsReceivedCallback__Class**)(modloader::win::memory::resolve_rva(0x04767E30));
        inline app::UserStatsReceivedCallback__Class* get_class() {
            return il2cpp::get_class<app::UserStatsReceivedCallback__Class>(type_info, "Steamworks", "UserStatsReceivedCallback");
        }
        inline app::UserStatsReceivedCallback* create() {
            return il2cpp::create_object<app::UserStatsReceivedCallback>(get_class());
        }
    } // namespace UserStatsReceivedCallback
} // namespace app::classes::types
