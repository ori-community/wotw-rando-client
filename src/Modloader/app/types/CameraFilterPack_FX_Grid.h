#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Grid.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Grid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Grid {
        inline app::CameraFilterPack_FX_Grid__Class** type_info() {
            static app::CameraFilterPack_FX_Grid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_Grid__Class**)(modloader::win::memory::resolve_rva(0x047188F0));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Grid__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Grid__Class>(type_info(), "", "CameraFilterPack_FX_Grid");
        }
        inline app::CameraFilterPack_FX_Grid* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Grid>(get_class());
        }
    } // namespace CameraFilterPack_FX_Grid
} // namespace app::classes::types
