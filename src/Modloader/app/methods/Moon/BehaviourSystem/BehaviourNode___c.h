#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourNode_c.h>
#include <Modloader/app/structs/DecoratorNode.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/TreeBehaviour.h>

namespace app::classes::Moon::BehaviourSystem::BehaviourNode___c {
    IL2CPP_REGISTER_METHOD(0x03006440, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BehaviourNode_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__61_0, app::BehaviourNode_c* this_ptr, app::DecoratorNode* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__61_1, app::BehaviourNode_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__61_2, app::BehaviourNode_c* this_ptr, app::TreeBehaviour* _p0_, app::Exception* _p1_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__61_3, app::BehaviourNode_c* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::BehaviourNode___c
