#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HmdQuaternion_t {
        namespace {
            app::HmdQuaternion_t__Class* type_info_ref = nullptr;
        }
        app::HmdQuaternion_t__Class** type_info = &type_info_ref;
        inline app::HmdQuaternion_t__Class* get_class() {
            return il2cpp::get_class<app::HmdQuaternion_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdQuaternion_t");
        }
        inline app::HmdQuaternion_t* create() {
            return il2cpp::create_object<app::HmdQuaternion_t>(get_class());
        }
        inline app::HmdQuaternion_t__Boxed* box(app::HmdQuaternion_t value) {
            return il2cpp::box_value<app::HmdQuaternion_t__Boxed>(get_class(), value);
        }
    } // namespace HmdQuaternion_t
} // namespace app::classes::types
