#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::DecoratorNode {
    IL2CPP_REGISTER_METHOD(0x0300CEF0, app::BehaviourStatus__Enum, get_DecoratorStatus, (app::DecoratorNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::BehaviourNode*, get_Child, (app::DecoratorNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300CF40, void, set_Child, (app::DecoratorNode * this_ptr, app::BehaviourNode* value))
    IL2CPP_REGISTER_METHOD(0x0300D000, app::BehaviourStatus__Enum, Execute, (app::DecoratorNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300D130, app::BehaviourStatus__Enum, ExecuteDecorator, (app::DecoratorNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300D2D0, void, Reset, (app::DecoratorNode * this_ptr, app::IContext* context, bool recursively))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldEvaluateEachTick, (app::DecoratorNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::DecoratorNode * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::DecoratorNode
