#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteAlways.h>

namespace app::classes::UnityEngine::ExecuteAlways {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExecuteAlways* this_ptr)
}
