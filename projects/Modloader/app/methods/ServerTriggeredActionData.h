#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerTriggeredActionData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ServerTriggeredActionData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Id, (app::ServerTriggeredActionData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Active, (app::ServerTriggeredActionData * this_ptr))
} // namespace app::classes::ServerTriggeredActionData
