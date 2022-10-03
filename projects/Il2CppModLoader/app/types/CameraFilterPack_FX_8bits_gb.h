#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_8bits_gb {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_FX_8bits_gb__Class** type_info;
        inline app::CameraFilterPack_FX_8bits_gb__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_8bits_gb__Class>(type_info, "", "CameraFilterPack_FX_8bits_gb");
        }
        inline app::CameraFilterPack_FX_8bits_gb* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_8bits_gb>(get_class());
        }
    } // namespace CameraFilterPack_FX_8bits_gb
} // namespace app::classes::types
