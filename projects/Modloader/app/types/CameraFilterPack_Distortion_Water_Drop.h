#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Water_Drop.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Water_Drop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Water_Drop {
        inline app::CameraFilterPack_Distortion_Water_Drop__Class** type_info() {
            static app::CameraFilterPack_Distortion_Water_Drop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_Water_Drop__Class**)(modloader::win::memory::resolve_rva(0x0477D3C0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Water_Drop__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Water_Drop__Class>(type_info(), "", "CameraFilterPack_Distortion_Water_Drop");
        }
        inline app::CameraFilterPack_Distortion_Water_Drop* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Water_Drop>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Water_Drop
} // namespace app::classes::types
