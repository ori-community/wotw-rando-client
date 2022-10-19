#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Aura {
        inline app::CameraFilterPack_Vision_Aura__Class** type_info = (app::CameraFilterPack_Vision_Aura__Class**)(modloader::win::memory::resolve_rva(0x04728D08));
        inline app::CameraFilterPack_Vision_Aura__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Aura__Class>(type_info, "", "CameraFilterPack_Vision_Aura");
        }
        inline app::CameraFilterPack_Vision_Aura* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Aura>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Aura
} // namespace app::classes::types
