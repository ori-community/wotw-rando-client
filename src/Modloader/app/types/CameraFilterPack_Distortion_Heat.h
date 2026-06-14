#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Heat.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Heat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Heat {
        inline app::CameraFilterPack_Distortion_Heat__Class** type_info() {
            static app::CameraFilterPack_Distortion_Heat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_Heat__Class**)(modloader::win::memory::resolve_rva(0x04790A00));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Heat__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Heat__Class>(type_info(), "", "CameraFilterPack_Distortion_Heat");
        }
        inline app::CameraFilterPack_Distortion_Heat* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Heat>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Heat
} // namespace app::classes::types
