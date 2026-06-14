#pragma once
#include <Modloader/app/structs/SceneTeleportDebugMenuItem.h>
#include <Modloader/app/structs/SceneTeleportDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneTeleportDebugMenuItem {
        inline app::SceneTeleportDebugMenuItem__Class** type_info() {
            static app::SceneTeleportDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneTeleportDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047561A0));
            }
            return cache;
        }
        inline app::SceneTeleportDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SceneTeleportDebugMenuItem__Class>(type_info(), "", "SceneTeleportDebugMenuItem");
        }
        inline app::SceneTeleportDebugMenuItem* create() {
            return il2cpp::create_object<app::SceneTeleportDebugMenuItem>(get_class());
        }
    } // namespace SceneTeleportDebugMenuItem
} // namespace app::classes::types
