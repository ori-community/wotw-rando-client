#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData.h>

namespace app::classes::LeakedSceneObjectDetector_ObjectData {
    IL2CPP_REGISTER_METHOD(0x015C52E0, void, ctor, app::LeakedSceneObjectDetector_ObjectData* this_ptr, int32_t id, app::GameObject* game_object)
}
