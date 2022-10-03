#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReferencePoint {
        namespace {
            app::ReferencePoint__Class* type_info_ref = nullptr;
        }
        app::ReferencePoint__Class** type_info = &type_info_ref;
        inline app::ReferencePoint__Class* get_class() {
            return il2cpp::get_class<app::ReferencePoint__Class>(type_info, "UnityEngine.Experimental.XR", "ReferencePoint");
        }
        inline app::ReferencePoint* create() {
            return il2cpp::create_object<app::ReferencePoint>(get_class());
        }
        inline app::ReferencePoint__Boxed* box(app::ReferencePoint value) {
            return il2cpp::box_value<app::ReferencePoint__Boxed>(get_class(), value);
        }
    } // namespace ReferencePoint
} // namespace app::classes::types
