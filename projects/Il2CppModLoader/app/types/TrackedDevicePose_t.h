#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrackedDevicePose_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrackedDevicePose_t__Class** type_info;
        inline app::TrackedDevicePose_t__Class* get_class() {
            return il2cpp::get_class<app::TrackedDevicePose_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "TrackedDevicePose_t");
        }
        inline app::TrackedDevicePose_t* create() {
            return il2cpp::create_object<app::TrackedDevicePose_t>(get_class());
        }
        inline app::TrackedDevicePose_t__Boxed* box(app::TrackedDevicePose_t value) {
            return il2cpp::box_value<app::TrackedDevicePose_t__Boxed>(get_class(), value);
        }
        inline app::TrackedDevicePose_t__Array* create_array(int size) {
            return il2cpp::array_new<app::TrackedDevicePose_t__Array>(get_class(), size);
        }
        inline app::TrackedDevicePose_t__Array* create_array(const std::vector<app::TrackedDevicePose_t>& items) {
            return il2cpp::array_new<app::TrackedDevicePose_t__Array>(get_class(), items);
        }
    } // namespace TrackedDevicePose_t
} // namespace app::classes::types
