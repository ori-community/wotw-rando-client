#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::PlayFabException {
    IL2CPP_REGISTER_METHOD(0x01A2A080, void, ctor, (app::PlayFabException * this_ptr, app::PlayFabExceptionCode__Enum code, app::String * message))
}
