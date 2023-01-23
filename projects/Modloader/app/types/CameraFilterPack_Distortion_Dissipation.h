#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Dissipation__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Dissipation.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Dissipation {
        inline app::CameraFilterPack_Distortion_Dissipation__Class** type_info = (app::CameraFilterPack_Distortion_Dissipation__Class**)(modloader::win::memory::resolve_rva(0x04734278));
        inline app::CameraFilterPack_Distortion_Dissipation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Dissipation__Class>(type_info, "", "CameraFilterPack_Distortion_Dissipation");
        }
        inline app::CameraFilterPack_Distortion_Dissipation* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Dissipation>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Dissipation
} // namespace app::classes::types
