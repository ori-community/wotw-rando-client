#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::CompositeNode {
    IL2CPP_REGISTER_METHOD(0x0300A940, void, OnValidate, (app::CompositeNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300AA80, void, MoonCleanup, (app::CompositeNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::List_1_Moon_BehaviourSystem_BehaviourNode_ *, get_Children, (app::CompositeNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300AA90, void, AddChild, (app::CompositeNode * this_ptr, int32_t index, app::BehaviourNode * node))
    IL2CPP_REGISTER_METHOD(0x0300AB40, app::BehaviourStatus__Enum, Execute, (app::CompositeNode * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0300AC00, void, Reset, (app::CompositeNode * this_ptr, app::IContext * context, bool recursively))
    IL2CPP_REGISTER_METHOD(0x0300AD40, void, PerformSanityCheck, (app::CompositeNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300AF80, void, ctor, (app::CompositeNode * this_ptr))
}
