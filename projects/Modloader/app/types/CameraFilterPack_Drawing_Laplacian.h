#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Laplacian.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Laplacian__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Laplacian {
        inline app::CameraFilterPack_Drawing_Laplacian__Class** type_info() {
            static app::CameraFilterPack_Drawing_Laplacian__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Drawing_Laplacian__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Laplacian__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Laplacian__Class>(type_info(), "", "CameraFilterPack_Drawing_Laplacian");
        }
        inline app::CameraFilterPack_Drawing_Laplacian* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Laplacian>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Laplacian
} // namespace app::classes::types
