#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPrefStorageEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerPrefStorageEventHandler__Class** type_info;
        inline app::PlayerPrefStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefStorageEventHandler__Class>(type_info, "frameworks.xboxLive", "PlayerPrefStorageEventHandler");
        }
        inline app::PlayerPrefStorageEventHandler* create() {
            return il2cpp::create_object<app::PlayerPrefStorageEventHandler>(get_class());
        }
    } // namespace PlayerPrefStorageEventHandler
} // namespace app::classes::types
