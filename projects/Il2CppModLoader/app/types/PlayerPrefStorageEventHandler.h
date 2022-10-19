#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerPrefStorageEventHandler {
        inline app::PlayerPrefStorageEventHandler__Class** type_info = (app::PlayerPrefStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0476F060));
        inline app::PlayerPrefStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefStorageEventHandler__Class>(type_info, "frameworks.xboxLive", "PlayerPrefStorageEventHandler");
        }
        inline app::PlayerPrefStorageEventHandler* create() {
            return il2cpp::create_object<app::PlayerPrefStorageEventHandler>(get_class());
        }
    } // namespace PlayerPrefStorageEventHandler
} // namespace app::classes::types
