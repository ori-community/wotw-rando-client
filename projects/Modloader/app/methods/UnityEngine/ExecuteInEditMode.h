#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteInEditMode.h>

namespace app::classes::UnityEngine::ExecuteInEditMode {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExecuteInEditMode* this_ptr)
}
