#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HideInInspector.h>

namespace app::classes::UnityEngine::HideInInspector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HideInInspector* this_ptr)
}
