#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneTeleportDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneTeleportDebugMenuItem__Class** type_info;
        inline app::SceneTeleportDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SceneTeleportDebugMenuItem__Class>(type_info, "", "SceneTeleportDebugMenuItem");
        }
        inline app::SceneTeleportDebugMenuItem* create() {
            return il2cpp::create_object<app::SceneTeleportDebugMenuItem>(get_class());
        }
    } // namespace SceneTeleportDebugMenuItem
} // namespace app::classes::types
