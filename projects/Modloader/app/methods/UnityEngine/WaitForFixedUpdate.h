#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaitForFixedUpdate.h>

namespace app::classes::UnityEngine::WaitForFixedUpdate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WaitForFixedUpdate * this_ptr))
}
