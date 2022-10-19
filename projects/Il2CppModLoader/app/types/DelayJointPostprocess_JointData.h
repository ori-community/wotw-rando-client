#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelayJointPostprocess_JointData {
        namespace {
            inline app::DelayJointPostprocess_JointData__Class* type_info_ref = nullptr;
        }
        inline app::DelayJointPostprocess_JointData__Class** type_info = &type_info_ref;
        inline app::DelayJointPostprocess_JointData__Class* get_class() {
            return il2cpp::get_nested_class<app::DelayJointPostprocess_JointData__Class>(type_info, "Moon.Animation", "DelayJointPostprocess", "JointData");
        }
        inline app::DelayJointPostprocess_JointData* create() {
            return il2cpp::create_object<app::DelayJointPostprocess_JointData>(get_class());
        }
        inline app::DelayJointPostprocess_JointData__Array* create_array(int size) {
            return il2cpp::array_new<app::DelayJointPostprocess_JointData__Array>(get_class(), size);
        }
        inline app::DelayJointPostprocess_JointData__Array* create_array(const std::vector<app::DelayJointPostprocess_JointData*>& items) {
            return il2cpp::array_new<app::DelayJointPostprocess_JointData__Array>(get_class(), items);
        }
    } // namespace DelayJointPostprocess_JointData
} // namespace app::classes::types
