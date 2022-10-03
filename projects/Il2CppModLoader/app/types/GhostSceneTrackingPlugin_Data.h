#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostSceneTrackingPlugin_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostSceneTrackingPlugin_Data__Class** type_info;
        inline app::GhostSceneTrackingPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostSceneTrackingPlugin_Data__Class>(type_info, "", "GhostSceneTrackingPlugin", "Data");
        }
        inline app::GhostSceneTrackingPlugin_Data* create() {
            return il2cpp::create_object<app::GhostSceneTrackingPlugin_Data>(get_class());
        }
    } // namespace GhostSceneTrackingPlugin_Data
} // namespace app::classes::types
