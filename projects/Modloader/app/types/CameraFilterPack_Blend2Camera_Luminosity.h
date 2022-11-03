#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Luminosity {
        inline app::CameraFilterPack_Blend2Camera_Luminosity__Class** type_info = (app::CameraFilterPack_Blend2Camera_Luminosity__Class**)(modloader::win::memory::resolve_rva(0x0471E050));
        inline app::CameraFilterPack_Blend2Camera_Luminosity__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Luminosity__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Luminosity");
        }
        inline app::CameraFilterPack_Blend2Camera_Luminosity* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Luminosity>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Luminosity
} // namespace app::classes::types
