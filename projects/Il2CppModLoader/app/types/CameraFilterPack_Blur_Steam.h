#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Steam {
        inline app::CameraFilterPack_Blur_Steam__Class** type_info = (app::CameraFilterPack_Blur_Steam__Class**)(modloader::win::memory::resolve_rva(0x047587C0));
        inline app::CameraFilterPack_Blur_Steam__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Steam__Class>(type_info, "", "CameraFilterPack_Blur_Steam");
        }
        inline app::CameraFilterPack_Blur_Steam* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Steam>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Steam
} // namespace app::classes::types
