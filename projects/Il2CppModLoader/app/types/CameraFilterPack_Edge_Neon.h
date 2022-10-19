#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Neon {
        inline app::CameraFilterPack_Edge_Neon__Class** type_info = (app::CameraFilterPack_Edge_Neon__Class**)(modloader::win::memory::resolve_rva(0x04769588));
        inline app::CameraFilterPack_Edge_Neon__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Neon__Class>(type_info, "", "CameraFilterPack_Edge_Neon");
        }
        inline app::CameraFilterPack_Edge_Neon* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Neon>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Neon
} // namespace app::classes::types
