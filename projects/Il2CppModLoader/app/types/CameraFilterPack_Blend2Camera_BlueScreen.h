#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_BlueScreen {
        namespace {
            inline app::CameraFilterPack_Blend2Camera_BlueScreen__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Blend2Camera_BlueScreen__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Blend2Camera_BlueScreen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_BlueScreen__Class>(type_info, "", "CameraFilterPack_Blend2Camera_BlueScreen");
        }
        inline app::CameraFilterPack_Blend2Camera_BlueScreen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_BlueScreen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_BlueScreen
} // namespace app::classes::types
