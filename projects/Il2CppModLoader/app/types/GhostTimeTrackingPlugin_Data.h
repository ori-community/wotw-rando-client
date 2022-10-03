#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostTimeTrackingPlugin_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostTimeTrackingPlugin_Data__Class** type_info;
        inline app::GhostTimeTrackingPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimeTrackingPlugin_Data__Class>(type_info, "", "GhostTimeTrackingPlugin", "Data");
        }
        inline app::GhostTimeTrackingPlugin_Data* create() {
            return il2cpp::create_object<app::GhostTimeTrackingPlugin_Data>(get_class());
        }
    } // namespace GhostTimeTrackingPlugin_Data
} // namespace app::classes::types
