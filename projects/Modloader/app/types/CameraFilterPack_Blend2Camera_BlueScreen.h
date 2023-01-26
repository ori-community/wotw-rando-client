#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_BlueScreen.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_BlueScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_BlueScreen {
        inline app::CameraFilterPack_Blend2Camera_BlueScreen__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_BlueScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Blend2Camera_BlueScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_BlueScreen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_BlueScreen__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_BlueScreen");
        }
        inline app::CameraFilterPack_Blend2Camera_BlueScreen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_BlueScreen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_BlueScreen
} // namespace app::classes::types
