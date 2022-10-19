#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoundedPlane {
        namespace {
            inline app::BoundedPlane__Class* type_info_ref = nullptr;
        }
        inline app::BoundedPlane__Class** type_info = &type_info_ref;
        inline app::BoundedPlane__Class* get_class() {
            return il2cpp::get_class<app::BoundedPlane__Class>(type_info, "UnityEngine.Experimental.XR", "BoundedPlane");
        }
        inline app::BoundedPlane* create() {
            return il2cpp::create_object<app::BoundedPlane>(get_class());
        }
        inline app::BoundedPlane__Boxed* box(app::BoundedPlane value) {
            return il2cpp::box_value<app::BoundedPlane__Boxed>(get_class(), value);
        }
    } // namespace BoundedPlane
} // namespace app::classes::types
