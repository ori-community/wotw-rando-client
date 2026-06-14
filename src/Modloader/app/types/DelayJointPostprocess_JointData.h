#pragma once
#include <Modloader/app/structs/DelayJointPostprocess_JointData.h>
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Array.h>
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayJointPostprocess_JointData {
        inline app::DelayJointPostprocess_JointData__Class** type_info() {
            static app::DelayJointPostprocess_JointData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelayJointPostprocess_JointData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelayJointPostprocess_JointData__Class* get_class() {
            return il2cpp::get_nested_class<app::DelayJointPostprocess_JointData__Class>(type_info(), "Moon.Animation", "DelayJointPostprocess", "JointData");
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
