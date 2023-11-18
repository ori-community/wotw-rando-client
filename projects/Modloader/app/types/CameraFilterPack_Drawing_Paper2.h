#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper2.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Paper2 {
        inline app::CameraFilterPack_Drawing_Paper2__Class** type_info() {
            static app::CameraFilterPack_Drawing_Paper2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Drawing_Paper2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Paper2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Paper2__Class>(type_info(), "", "CameraFilterPack_Drawing_Paper2");
        }
        inline app::CameraFilterPack_Drawing_Paper2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Paper2>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Paper2
} // namespace app::classes::types
