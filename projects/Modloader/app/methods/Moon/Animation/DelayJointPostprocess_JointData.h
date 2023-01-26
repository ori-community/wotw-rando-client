#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DelayJointPostprocess_JointData.h>

namespace app::classes::Moon::Animation::DelayJointPostprocess_JointData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DelayJointPostprocess_JointData * this_ptr))
}
