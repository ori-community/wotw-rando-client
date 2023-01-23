#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Array__Class.h>
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Array.h>

namespace app::classes::types {
    namespace DelayJointPostprocess_JointData__Array {
        inline app::DelayJointPostprocess_JointData__Array__Class** type_info = (app::DelayJointPostprocess_JointData__Array__Class**)(modloader::win::memory::resolve_rva(0x047420C0));
        inline app::DelayJointPostprocess_JointData__Array__Class* get_class() {
            return il2cpp::get_class<app::DelayJointPostprocess_JointData__Array__Class>(type_info, "Moon.Animation", "DelayJointPostprocess+JointData[]");
        }
        inline app::DelayJointPostprocess_JointData__Array* create() {
            return il2cpp::create_object<app::DelayJointPostprocess_JointData__Array>(get_class());
        }
    } // namespace DelayJointPostprocess_JointData__Array
} // namespace app::classes::types
