#pragma once
#include <Modloader/app/structs/CameraFilterPack_Edge_BlackLine.h>
#include <Modloader/app/structs/CameraFilterPack_Edge_BlackLine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_BlackLine {
        inline app::CameraFilterPack_Edge_BlackLine__Class** type_info() {
            static app::CameraFilterPack_Edge_BlackLine__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Edge_BlackLine__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Edge_BlackLine__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_BlackLine__Class>(type_info(), "", "CameraFilterPack_Edge_BlackLine");
        }
        inline app::CameraFilterPack_Edge_BlackLine* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_BlackLine>(get_class());
        }
    } // namespace CameraFilterPack_Edge_BlackLine
} // namespace app::classes::types
