#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaitForEndOfFrame.h>

namespace app::classes::UnityEngine::WaitForEndOfFrame {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WaitForEndOfFrame * this_ptr))
}
