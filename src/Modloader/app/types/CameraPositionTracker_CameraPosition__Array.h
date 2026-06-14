#pragma once
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition__Array.h>
#include <Modloader/app/structs/CameraPositionTracker_CameraPosition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPositionTracker_CameraPosition__Array {
        inline app::CameraPositionTracker_CameraPosition__Array__Class** type_info() {
            static app::CameraPositionTracker_CameraPosition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraPositionTracker_CameraPosition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraPositionTracker_CameraPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraPositionTracker_CameraPosition__Array__Class>(type_info(), "", "CameraPositionTracker+CameraPosition[]");
        }
        inline app::CameraPositionTracker_CameraPosition__Array* create() {
            return il2cpp::create_object<app::CameraPositionTracker_CameraPosition__Array>(get_class());
        }
    } // namespace CameraPositionTracker_CameraPosition__Array
} // namespace app::classes::types
