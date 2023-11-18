#pragma once
#include <Modloader/app/structs/TargetSpheres_SphereGroup__Array.h>
#include <Modloader/app/structs/TargetSpheres_SphereGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetSpheres_SphereGroup__Array {
        inline app::TargetSpheres_SphereGroup__Array__Class** type_info() {
            static app::TargetSpheres_SphereGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetSpheres_SphereGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetSpheres_SphereGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::TargetSpheres_SphereGroup__Array__Class>(type_info(), "", "TargetSpheres+SphereGroup[]");
        }
        inline app::TargetSpheres_SphereGroup__Array* create() {
            return il2cpp::create_object<app::TargetSpheres_SphereGroup__Array>(get_class());
        }
    } // namespace TargetSpheres_SphereGroup__Array
} // namespace app::classes::types
