#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Dithering2x2 {
        inline app::CameraFilterPack_Blur_Dithering2x2__Class** type_info = (app::CameraFilterPack_Blur_Dithering2x2__Class**)(modloader::win::memory::resolve_rva(0x04791B20));
        inline app::CameraFilterPack_Blur_Dithering2x2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Dithering2x2__Class>(type_info, "", "CameraFilterPack_Blur_Dithering2x2");
        }
        inline app::CameraFilterPack_Blur_Dithering2x2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Dithering2x2>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Dithering2x2
} // namespace app::classes::types
