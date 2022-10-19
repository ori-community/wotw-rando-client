#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Screens {
        inline app::CameraFilterPack_FX_Screens__Class** type_info = (app::CameraFilterPack_FX_Screens__Class**)(modloader::win::memory::resolve_rva(0x04723338));
        inline app::CameraFilterPack_FX_Screens__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Screens__Class>(type_info, "", "CameraFilterPack_FX_Screens");
        }
        inline app::CameraFilterPack_FX_Screens* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Screens>(get_class());
        }
    } // namespace CameraFilterPack_FX_Screens
} // namespace app::classes::types
