#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneTeleportDebugMenuItem {
        inline app::SceneTeleportDebugMenuItem__Class** type_info = (app::SceneTeleportDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047561A0));
        inline app::SceneTeleportDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SceneTeleportDebugMenuItem__Class>(type_info, "", "SceneTeleportDebugMenuItem");
        }
        inline app::SceneTeleportDebugMenuItem* create() {
            return il2cpp::create_object<app::SceneTeleportDebugMenuItem>(get_class());
        }
    } // namespace SceneTeleportDebugMenuItem
} // namespace app::classes::types
