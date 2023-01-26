#pragma once
#include <Modloader/app/structs/CameraInfluencePositionZone.h>
#include <Modloader/app/structs/CameraInfluencePositionZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraInfluencePositionZone {
        inline app::CameraInfluencePositionZone__Class** type_info() {
            static app::CameraInfluencePositionZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraInfluencePositionZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraInfluencePositionZone__Class* get_class() {
            return il2cpp::get_class<app::CameraInfluencePositionZone__Class>(type_info(), "", "CameraInfluencePositionZone");
        }
        inline app::CameraInfluencePositionZone* create() {
            return il2cpp::create_object<app::CameraInfluencePositionZone>(get_class());
        }
    } // namespace CameraInfluencePositionZone
} // namespace app::classes::types
