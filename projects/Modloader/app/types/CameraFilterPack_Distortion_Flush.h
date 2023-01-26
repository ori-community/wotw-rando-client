#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Flush.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Flush__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Flush {
        inline app::CameraFilterPack_Distortion_Flush__Class** type_info() {
            static app::CameraFilterPack_Distortion_Flush__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_Flush__Class**)(modloader::win::memory::resolve_rva(0x0472E348));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Flush__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Flush__Class>(type_info(), "", "CameraFilterPack_Distortion_Flush");
        }
        inline app::CameraFilterPack_Distortion_Flush* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Flush>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Flush
} // namespace app::classes::types
