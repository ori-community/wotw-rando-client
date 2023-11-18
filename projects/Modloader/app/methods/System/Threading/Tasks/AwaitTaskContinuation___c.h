#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AwaitTaskContinuation_c.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::Tasks::AwaitTaskContinuation___c {
    IL2CPP_REGISTER_METHOD(0x0232F700, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AwaitTaskContinuation_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232F840, void, _ThrowAsyncIfNecessary_b__17_0, (app::AwaitTaskContinuation_c * this_ptr, app::Object* s))
} // namespace app::classes::System::Threading::Tasks::AwaitTaskContinuation___c
