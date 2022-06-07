#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberBehaviourTree::InverterNode {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, (app::InverterNode * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x013E24C0, app::BehaviourTreeStatus__Enum, Tick, (app::InverterNode * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHODINFO(0x04736468, InverterNode_Tick__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013E2620, void, AddChild, (app::InverterNode * this_ptr, app::IBehaviourTreeNode * child))
    IL2CPP_REGISTER_METHODINFO(0x04785ED0, InverterNode_AddChild__MethodInfo)
}
