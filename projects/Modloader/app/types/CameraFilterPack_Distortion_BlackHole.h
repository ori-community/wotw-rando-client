#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_BlackHole__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_BlackHole.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_BlackHole {
        inline app::CameraFilterPack_Distortion_BlackHole__Class** type_info = (app::CameraFilterPack_Distortion_BlackHole__Class**)(modloader::win::memory::resolve_rva(0x04756840));
        inline app::CameraFilterPack_Distortion_BlackHole__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_BlackHole__Class>(type_info, "", "CameraFilterPack_Distortion_BlackHole");
        }
        inline app::CameraFilterPack_Distortion_BlackHole* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_BlackHole>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_BlackHole
} // namespace app::classes::types
