#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabException.h>
#include <Modloader/app/structs/PlayFabExceptionCode__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::PlayFabException {
    IL2CPP_REGISTER_METHOD(0x01A2A080, void, ctor, (app::PlayFabException * this_ptr, app::PlayFabExceptionCode__Enum code, app::String* message))
}
