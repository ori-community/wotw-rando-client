#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_RgbClamp {
        namespace {
            app::CameraFilterPack_Colors_RgbClamp__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Colors_RgbClamp__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Colors_RgbClamp__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_RgbClamp__Class>(type_info, "", "CameraFilterPack_Colors_RgbClamp");
        }
        inline app::CameraFilterPack_Colors_RgbClamp* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_RgbClamp>(get_class());
        }
    } // namespace CameraFilterPack_Colors_RgbClamp
} // namespace app::classes::types
