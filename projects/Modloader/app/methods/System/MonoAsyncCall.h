#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MonoAsyncCall.h>

namespace app::classes::System::MonoAsyncCall {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MonoAsyncCall * this_ptr))
}
