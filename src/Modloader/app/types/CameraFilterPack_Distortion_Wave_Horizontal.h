#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Wave_Horizontal.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Wave_Horizontal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Wave_Horizontal {
        inline app::CameraFilterPack_Distortion_Wave_Horizontal__Class** type_info() {
            static app::CameraFilterPack_Distortion_Wave_Horizontal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_Wave_Horizontal__Class**)(modloader::win::memory::resolve_rva(0x047609E8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Wave_Horizontal__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Wave_Horizontal__Class>(type_info(), "", "CameraFilterPack_Distortion_Wave_Horizontal");
        }
        inline app::CameraFilterPack_Distortion_Wave_Horizontal* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Wave_Horizontal>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Wave_Horizontal
} // namespace app::classes::types
