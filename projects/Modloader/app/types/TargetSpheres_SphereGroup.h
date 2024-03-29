#pragma once
#include <Modloader/app/structs/TargetSpheres_SphereGroup.h>
#include <Modloader/app/structs/TargetSpheres_SphereGroup__Array.h>
#include <Modloader/app/structs/TargetSpheres_SphereGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetSpheres_SphereGroup {
        inline app::TargetSpheres_SphereGroup__Class** type_info() {
            static app::TargetSpheres_SphereGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetSpheres_SphereGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetSpheres_SphereGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::TargetSpheres_SphereGroup__Class>(type_info(), "", "TargetSpheres", "SphereGroup");
        }
        inline app::TargetSpheres_SphereGroup* create() {
            return il2cpp::create_object<app::TargetSpheres_SphereGroup>(get_class());
        }
        inline app::TargetSpheres_SphereGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::TargetSpheres_SphereGroup__Array>(get_class(), size);
        }
        inline app::TargetSpheres_SphereGroup__Array* create_array(const std::vector<app::TargetSpheres_SphereGroup*>& items) {
            return il2cpp::array_new<app::TargetSpheres_SphereGroup__Array>(get_class(), items);
        }
    } // namespace TargetSpheres_SphereGroup
} // namespace app::classes::types
