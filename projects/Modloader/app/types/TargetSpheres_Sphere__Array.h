#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetSpheres_Sphere__Array {
        namespace {
            inline app::TargetSpheres_Sphere__Array__Class* type_info_ref = nullptr;
        }
        inline app::TargetSpheres_Sphere__Array__Class** type_info = &type_info_ref;
        inline app::TargetSpheres_Sphere__Array__Class* get_class() {
            return il2cpp::get_class<app::TargetSpheres_Sphere__Array__Class>(type_info, "", "TargetSpheres+Sphere[]");
        }
        inline app::TargetSpheres_Sphere__Array* create() {
            return il2cpp::create_object<app::TargetSpheres_Sphere__Array>(get_class());
        }
    } // namespace TargetSpheres_Sphere__Array
} // namespace app::classes::types
