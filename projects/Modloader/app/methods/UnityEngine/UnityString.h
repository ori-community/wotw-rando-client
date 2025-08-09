#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::UnityString {
    IL2CPP_REGISTER_METHOD(0x031BB830, app::String*, Format, app::String* fmt, app::Object__Array* args)
}
