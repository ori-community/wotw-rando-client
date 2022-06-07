#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::CallbackDispatcher {
    IL2CPP_REGISTER_METHOD(0x015FA770, void, ExceptionHandler, (app::Exception * e))
}
