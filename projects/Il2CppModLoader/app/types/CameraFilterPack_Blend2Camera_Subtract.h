#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Subtract {
        inline app::CameraFilterPack_Blend2Camera_Subtract__Class** type_info = (app::CameraFilterPack_Blend2Camera_Subtract__Class**)(modloader::win::memory::resolve_rva(0x04756670));
        inline app::CameraFilterPack_Blend2Camera_Subtract__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Subtract__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Subtract");
        }
        inline app::CameraFilterPack_Blend2Camera_Subtract* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Subtract>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Subtract
} // namespace app::classes::types
