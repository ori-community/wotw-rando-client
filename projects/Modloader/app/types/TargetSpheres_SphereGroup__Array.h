#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetSpheres_SphereGroup__Array {
        namespace {
            inline app::TargetSpheres_SphereGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::TargetSpheres_SphereGroup__Array__Class** type_info = &type_info_ref;
        inline app::TargetSpheres_SphereGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::TargetSpheres_SphereGroup__Array__Class>(type_info, "", "TargetSpheres+SphereGroup[]");
        }
        inline app::TargetSpheres_SphereGroup__Array* create() {
            return il2cpp::create_object<app::TargetSpheres_SphereGroup__Array>(get_class());
        }
    } // namespace TargetSpheres_SphereGroup__Array
} // namespace app::classes::types
