#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Funk.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Funk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Funk {
        inline app::CameraFilterPack_FX_Funk__Class** type_info() {
            static app::CameraFilterPack_FX_Funk__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_FX_Funk__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Funk__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Funk__Class>(type_info(), "", "CameraFilterPack_FX_Funk");
        }
        inline app::CameraFilterPack_FX_Funk* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Funk>(get_class());
        }
    } // namespace CameraFilterPack_FX_Funk
} // namespace app::classes::types
