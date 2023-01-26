#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain.h>
#include <Modloader/app/structs/JointChains_Chain.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly.h>

namespace app::classes::Moon::SimpleSwayAnimPostprocess_SwayChain {
    IL2CPP_REGISTER_METHOD(0x02121820, void, CopyPerFrameDataToJob, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::SimpleSwayAnimPostprocess_PerFrameReadOnly common))
    IL2CPP_REGISTER_METHOD(0x02121950, void, CopyPerFrameDataFromJob, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02121AF0, void, Allocate, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::JointChains_Chain* chain))
    IL2CPP_REGISTER_METHOD(0x02121B30, void, Dispose, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02121B40, void, Init, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::JointChains_Chain* chain, app::SimpleSwayAnimPostprocess_Params p))
    IL2CPP_REGISTER_METHOD(0x02122420, void, GetJointTransforms, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::JointChains_Chain* chain))
    IL2CPP_REGISTER_METHOD(0x02122560, void, ScheduleJob, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::JointChains_Chain* chain, app::SimpleSwayAnimPostprocess_PerFrameReadOnly common))
    IL2CPP_REGISTER_METHOD(0x021228A0, void, CompleteJob, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::JointChains_Chain* chain))
    IL2CPP_REGISTER_METHOD(0x02122DA0, void, UpdateParams, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr, app::SimpleSwayAnimPostprocess_Params p))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleSwayAnimPostprocess_SwayChain * this_ptr))
} // namespace app::classes::Moon::SimpleSwayAnimPostprocess_SwayChain
