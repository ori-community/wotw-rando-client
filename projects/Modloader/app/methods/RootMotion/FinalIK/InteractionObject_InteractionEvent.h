#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::InteractionObject_InteractionEvent {
    IL2CPP_REGISTER_METHOD(0x02A0DC20, void, Activate, (app::InteractionObject_InteractionEvent * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InteractionObject_InteractionEvent * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionObject_InteractionEvent
