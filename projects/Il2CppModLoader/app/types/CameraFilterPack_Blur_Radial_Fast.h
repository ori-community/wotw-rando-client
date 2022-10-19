#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Radial_Fast {
        inline app::CameraFilterPack_Blur_Radial_Fast__Class** type_info = (app::CameraFilterPack_Blur_Radial_Fast__Class**)(modloader::win::memory::resolve_rva(0x0478E790));
        inline app::CameraFilterPack_Blur_Radial_Fast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Radial_Fast__Class>(type_info, "", "CameraFilterPack_Blur_Radial_Fast");
        }
        inline app::CameraFilterPack_Blur_Radial_Fast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Radial_Fast>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Radial_Fast
} // namespace app::classes::types
