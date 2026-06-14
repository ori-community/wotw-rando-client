#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_InverChromiLum.h>
#include <Modloader/app/structs/CameraFilterPack_FX_InverChromiLum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_InverChromiLum {
        inline app::CameraFilterPack_FX_InverChromiLum__Class** type_info() {
            static app::CameraFilterPack_FX_InverChromiLum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_FX_InverChromiLum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_InverChromiLum__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_InverChromiLum__Class>(type_info(), "", "CameraFilterPack_FX_InverChromiLum");
        }
        inline app::CameraFilterPack_FX_InverChromiLum* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_InverChromiLum>(get_class());
        }
    } // namespace CameraFilterPack_FX_InverChromiLum
} // namespace app::classes::types
