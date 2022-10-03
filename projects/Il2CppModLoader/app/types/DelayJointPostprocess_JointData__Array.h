#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayJointPostprocess_JointData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayJointPostprocess_JointData__Array__Class** type_info;
        inline app::DelayJointPostprocess_JointData__Array__Class* get_class() {
            return il2cpp::get_class<app::DelayJointPostprocess_JointData__Array__Class>(type_info, "Moon.Animation", "DelayJointPostprocess+JointData[]");
        }
        inline app::DelayJointPostprocess_JointData__Array* create() {
            return il2cpp::create_object<app::DelayJointPostprocess_JointData__Array>(get_class());
        }
    } // namespace DelayJointPostprocess_JointData__Array
} // namespace app::classes::types
