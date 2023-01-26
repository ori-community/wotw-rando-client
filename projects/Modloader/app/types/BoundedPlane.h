#pragma once
#include <Modloader/app/structs/BoundedPlane.h>
#include <Modloader/app/structs/BoundedPlane__Boxed.h>
#include <Modloader/app/structs/BoundedPlane__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoundedPlane {
        inline app::BoundedPlane__Class** type_info() {
            static app::BoundedPlane__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoundedPlane__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoundedPlane__Class* get_class() {
            return il2cpp::get_class<app::BoundedPlane__Class>(type_info(), "UnityEngine.Experimental.XR", "BoundedPlane");
        }
        inline app::BoundedPlane* create() {
            return il2cpp::create_object<app::BoundedPlane>(get_class());
        }
        inline app::BoundedPlane__Boxed* box(app::BoundedPlane value) {
            return il2cpp::box_value<app::BoundedPlane__Boxed>(get_class(), value);
        }
    } // namespace BoundedPlane
} // namespace app::classes::types
