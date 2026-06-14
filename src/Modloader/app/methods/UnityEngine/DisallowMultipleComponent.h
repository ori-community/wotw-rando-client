#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DisallowMultipleComponent.h>

namespace app::classes::UnityEngine::DisallowMultipleComponent {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DisallowMultipleComponent* this_ptr)
}
