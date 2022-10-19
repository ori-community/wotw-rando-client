#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Noise_TV_3 {
        inline app::CameraFilterPack_Noise_TV_3__Class** type_info = (app::CameraFilterPack_Noise_TV_3__Class**)(modloader::win::memory::resolve_rva(0x0472CE20));
        inline app::CameraFilterPack_Noise_TV_3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Noise_TV_3__Class>(type_info, "", "CameraFilterPack_Noise_TV_3");
        }
        inline app::CameraFilterPack_Noise_TV_3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Noise_TV_3>(get_class());
        }
    } // namespace CameraFilterPack_Noise_TV_3
} // namespace app::classes::types
