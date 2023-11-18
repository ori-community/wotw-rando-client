#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_GreenScreen.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_GreenScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_GreenScreen {
        inline app::CameraFilterPack_Blend2Camera_GreenScreen__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_GreenScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Blend2Camera_GreenScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_GreenScreen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_GreenScreen__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_GreenScreen");
        }
        inline app::CameraFilterPack_Blend2Camera_GreenScreen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_GreenScreen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_GreenScreen
} // namespace app::classes::types
