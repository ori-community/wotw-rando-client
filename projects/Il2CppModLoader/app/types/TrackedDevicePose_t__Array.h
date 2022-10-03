#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrackedDevicePose_t__Array {
        namespace {
            app::TrackedDevicePose_t__Array__Class* type_info_ref = nullptr;
        }
        app::TrackedDevicePose_t__Array__Class** type_info = &type_info_ref;
        inline app::TrackedDevicePose_t__Array__Class* get_class() {
            return il2cpp::get_class<app::TrackedDevicePose_t__Array__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "TrackedDevicePose_t[]");
        }
        inline app::TrackedDevicePose_t__Array* create() {
            return il2cpp::create_object<app::TrackedDevicePose_t__Array>(get_class());
        }
    } // namespace TrackedDevicePose_t__Array
} // namespace app::classes::types
