#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Psycho {
        inline app::CameraFilterPack_Vision_Psycho__Class** type_info = (app::CameraFilterPack_Vision_Psycho__Class**)(modloader::win::memory::resolve_rva(0x0472DC70));
        inline app::CameraFilterPack_Vision_Psycho__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Psycho__Class>(type_info, "", "CameraFilterPack_Vision_Psycho");
        }
        inline app::CameraFilterPack_Vision_Psycho* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Psycho>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Psycho
} // namespace app::classes::types
