#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberBehaviourTree::BehaviourEventIdGenerator {
    IL2CPP_REGISTER_METHOD(0x013DF7A0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x013DF840, int32_t, Next, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BehaviourEventIdGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::UberBehaviourTree::BehaviourEventIdGenerator
