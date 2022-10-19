#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_HUE_Rotate {
        inline app::CameraFilterPack_Colors_HUE_Rotate__Class** type_info = (app::CameraFilterPack_Colors_HUE_Rotate__Class**)(modloader::win::memory::resolve_rva(0x04769F98));
        inline app::CameraFilterPack_Colors_HUE_Rotate__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_HUE_Rotate__Class>(type_info, "", "CameraFilterPack_Colors_HUE_Rotate");
        }
        inline app::CameraFilterPack_Colors_HUE_Rotate* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_HUE_Rotate>(get_class());
        }
    } // namespace CameraFilterPack_Colors_HUE_Rotate
} // namespace app::classes::types
