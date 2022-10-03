#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_NightVisionFX_preset__Enum {
        namespace {
            app::CameraFilterPack_NightVisionFX_preset__Enum__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_NightVisionFX_preset__Enum__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_NightVisionFX_preset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFilterPack_NightVisionFX_preset__Enum__Class>(type_info, "", "CameraFilterPack_NightVisionFX", "preset");
        }
        inline app::CameraFilterPack_NightVisionFX_preset__Enum* create() {
            return il2cpp::create_object<app::CameraFilterPack_NightVisionFX_preset__Enum>(get_class());
        }
    } // namespace CameraFilterPack_NightVisionFX_preset__Enum
} // namespace app::classes::types
