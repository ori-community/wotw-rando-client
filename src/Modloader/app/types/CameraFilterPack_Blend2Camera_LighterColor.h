#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_LighterColor.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_LighterColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_LighterColor {
        inline app::CameraFilterPack_Blend2Camera_LighterColor__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_LighterColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_LighterColor__Class**)(modloader::win::memory::resolve_rva(0x047065E0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_LighterColor__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_LighterColor__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_LighterColor");
        }
        inline app::CameraFilterPack_Blend2Camera_LighterColor* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_LighterColor>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_LighterColor
} // namespace app::classes::types
