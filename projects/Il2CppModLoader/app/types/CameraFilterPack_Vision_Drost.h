#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Drost {
        inline app::CameraFilterPack_Vision_Drost__Class** type_info = (app::CameraFilterPack_Vision_Drost__Class**)(modloader::win::memory::resolve_rva(0x04714148));
        inline app::CameraFilterPack_Vision_Drost__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Drost__Class>(type_info, "", "CameraFilterPack_Vision_Drost");
        }
        inline app::CameraFilterPack_Vision_Drost* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Drost>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Drost
} // namespace app::classes::types
