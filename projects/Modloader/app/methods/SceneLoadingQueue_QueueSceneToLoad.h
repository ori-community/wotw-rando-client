#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Boxed.h>

namespace app::classes::SceneLoadingQueue_QueueSceneToLoad {
    IL2CPP_REGISTER_METHOD(0x00115B50, void, SetAddTime, (app::SceneLoadingQueue_QueueSceneToLoad__Boxed * this_ptr, float time))
}
