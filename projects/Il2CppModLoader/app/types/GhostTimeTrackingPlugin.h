#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostTimeTrackingPlugin {
        inline app::GhostTimeTrackingPlugin__Class** type_info = (app::GhostTimeTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x0473ED80));
        inline app::GhostTimeTrackingPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostTimeTrackingPlugin__Class>(type_info, "", "GhostTimeTrackingPlugin");
        }
        inline app::GhostTimeTrackingPlugin* create() {
            return il2cpp::create_object<app::GhostTimeTrackingPlugin>(get_class());
        }
    } // namespace GhostTimeTrackingPlugin
} // namespace app::classes::types
