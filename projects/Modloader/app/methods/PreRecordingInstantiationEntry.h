#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry__Boxed.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::PreRecordingInstantiationEntry {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::PreRecordingInstantiationEntry__Boxed * this_ptr, app::GameObject* instance, app::GameObject* prefab))
}
