#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::CallbackDispatcher {
    IL2CPP_REGISTER_METHOD(0x015FA770, void, ExceptionHandler, (app::Exception * e))
}
