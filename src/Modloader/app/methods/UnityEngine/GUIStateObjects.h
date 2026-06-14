#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::UnityEngine::GUIStateObjects {
    IL2CPP_REGISTER_METHOD(0x029F2C10, app::Object*, GetStateObject, app::Type* t, int32_t control_i_d)
    IL2CPP_REGISTER_METHOD(0x029F2DD0, void, cctor, )
} // namespace app::classes::UnityEngine::GUIStateObjects
