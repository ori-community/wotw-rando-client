#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerPrefsException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::PlayerPrefsException {
    IL2CPP_REGISTER_METHOD(0x02968020, void, ctor, (app::PlayerPrefsException * this_ptr, app::String* error))
}
