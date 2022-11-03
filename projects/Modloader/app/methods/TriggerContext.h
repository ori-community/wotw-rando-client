#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriggerContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TriggerContext * this_ptr, app::Collider* collider, app::Collider* trigger_reciever))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Collider*, get_Collider, (app::TriggerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Collider, (app::TriggerContext * this_ptr, app::Collider* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Collider*, get_TriggerReciever, (app::TriggerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TriggerReciever, (app::TriggerContext * this_ptr, app::Collider* value))
} // namespace app::classes::TriggerContext
