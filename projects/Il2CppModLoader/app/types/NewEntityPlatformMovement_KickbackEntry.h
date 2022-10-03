#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement_KickbackEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewEntityPlatformMovement_KickbackEntry__Class** type_info;
        inline app::NewEntityPlatformMovement_KickbackEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::NewEntityPlatformMovement_KickbackEntry__Class>(type_info, "", "NewEntityPlatformMovement", "KickbackEntry");
        }
        inline app::NewEntityPlatformMovement_KickbackEntry* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement_KickbackEntry>(get_class());
        }
    } // namespace NewEntityPlatformMovement_KickbackEntry
} // namespace app::classes::types
