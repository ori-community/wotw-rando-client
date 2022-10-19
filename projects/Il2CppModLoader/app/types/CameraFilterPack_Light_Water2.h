#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Water2 {
        inline app::CameraFilterPack_Light_Water2__Class** type_info = (app::CameraFilterPack_Light_Water2__Class**)(modloader::win::memory::resolve_rva(0x04798620));
        inline app::CameraFilterPack_Light_Water2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Water2__Class>(type_info, "", "CameraFilterPack_Light_Water2");
        }
        inline app::CameraFilterPack_Light_Water2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Water2>(get_class());
        }
    } // namespace CameraFilterPack_Light_Water2
} // namespace app::classes::types
