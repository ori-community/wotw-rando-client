#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayJointPostprocessJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayJointPostprocessJob__Class** type_info;
        inline app::DelayJointPostprocessJob__Class* get_class() {
            return il2cpp::get_class<app::DelayJointPostprocessJob__Class>(type_info, "Moon.Animation", "DelayJointPostprocessJob");
        }
        inline app::DelayJointPostprocessJob* create() {
            return il2cpp::create_object<app::DelayJointPostprocessJob>(get_class());
        }
        inline app::DelayJointPostprocessJob__Boxed* box(app::DelayJointPostprocessJob value) {
            return il2cpp::box_value<app::DelayJointPostprocessJob__Boxed>(get_class(), value);
        }
    } // namespace DelayJointPostprocessJob
} // namespace app::classes::types
