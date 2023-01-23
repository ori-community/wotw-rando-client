#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaitForSeconds.h>

namespace app::classes::UnityEngine::WaitForSeconds {
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor, (app::WaitForSeconds * this_ptr, float seconds))
}
