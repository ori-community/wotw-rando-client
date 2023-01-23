#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Brain.h>
#include <Modloader/app/structs/BrainBehaviour.h>

namespace app::classes::Moon::Brain {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::Brain * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_LastSelectedBehaviourScore, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBEF20, void, Awake, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBF0D0, void, OnDestroy, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBF280, void, OnPreRestore, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476CB70, Brain_OnPreRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CBF430, void, AddBehaviour, (app::Brain * this_ptr, app::BrainBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00CBF4F0, void, RemoveBehaviour, (app::Brain * this_ptr, app::BrainBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00CBF590, void, StopCurrentBehaviour, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBF650, void, EnqueueBehaviour, (app::Brain * this_ptr, app::BrainBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00CBF6F0, void, FixedUpdate, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBFB30, app::BrainBehaviour*, SelectNextBehaviour, (app::Brain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBFD00, void, StartBehaviour, (app::Brain * this_ptr, app::BrainBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00CBFDC0, void, EndBehaviour, (app::Brain * this_ptr, app::BrainBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00CBFE90, void, ctor, (app::Brain * this_ptr))
} // namespace app::classes::Moon::Brain
