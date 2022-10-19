#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetSpheres_SphereGroup {
        namespace {
            inline app::TargetSpheres_SphereGroup__Class* type_info_ref = nullptr;
        }
        inline app::TargetSpheres_SphereGroup__Class** type_info = &type_info_ref;
        inline app::TargetSpheres_SphereGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::TargetSpheres_SphereGroup__Class>(type_info, "", "TargetSpheres", "SphereGroup");
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
