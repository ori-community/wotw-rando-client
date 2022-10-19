#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_GrayScale {
        namespace {
            inline app::CameraFilterPack_Color_GrayScale__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Color_GrayScale__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Color_GrayScale__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_GrayScale__Class>(type_info, "", "CameraFilterPack_Color_GrayScale");
        }
        inline app::CameraFilterPack_Color_GrayScale* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_GrayScale>(get_class());
        }
    } // namespace CameraFilterPack_Color_GrayScale
} // namespace app::classes::types
