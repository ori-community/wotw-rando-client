#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Alien_Vision {
        inline app::CameraFilterPack_Alien_Vision__Class** type_info = (app::CameraFilterPack_Alien_Vision__Class**)(modloader::win::memory::resolve_rva(0x047044A8));
        inline app::CameraFilterPack_Alien_Vision__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Alien_Vision__Class>(type_info, "", "CameraFilterPack_Alien_Vision");
        }
        inline app::CameraFilterPack_Alien_Vision* create() {
            return il2cpp::create_object<app::CameraFilterPack_Alien_Vision>(get_class());
        }
    } // namespace CameraFilterPack_Alien_Vision
} // namespace app::classes::types
