#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RepeatInvoker {
    IL2CPP_REGISTER_METHOD(0x008FE3B0, bool, Update, (app::RepeatInvoker * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x008FE3F0, void, ctor, (app::RepeatInvoker * this_ptr, float duration, app::Action* method_1))
} // namespace app::classes::RepeatInvoker
