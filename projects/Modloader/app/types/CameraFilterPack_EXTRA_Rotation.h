#pragma once
#include <Modloader/app/structs/CameraFilterPack_EXTRA_Rotation.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_Rotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_Rotation {
        inline app::CameraFilterPack_EXTRA_Rotation__Class** type_info() {
            static app::CameraFilterPack_EXTRA_Rotation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_EXTRA_Rotation__Class**)(modloader::win::memory::resolve_rva(0x047622D8));
            }
            return cache;
        }
        inline app::CameraFilterPack_EXTRA_Rotation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EXTRA_Rotation__Class>(type_info(), "", "CameraFilterPack_EXTRA_Rotation");
        }
        inline app::CameraFilterPack_EXTRA_Rotation* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_Rotation>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_Rotation
} // namespace app::classes::types
