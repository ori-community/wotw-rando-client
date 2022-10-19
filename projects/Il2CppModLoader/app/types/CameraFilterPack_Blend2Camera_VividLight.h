#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_VividLight {
        inline app::CameraFilterPack_Blend2Camera_VividLight__Class** type_info = (app::CameraFilterPack_Blend2Camera_VividLight__Class**)(modloader::win::memory::resolve_rva(0x0475CCF0));
        inline app::CameraFilterPack_Blend2Camera_VividLight__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_VividLight__Class>(type_info, "", "CameraFilterPack_Blend2Camera_VividLight");
        }
        inline app::CameraFilterPack_Blend2Camera_VividLight* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_VividLight>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_VividLight
} // namespace app::classes::types
