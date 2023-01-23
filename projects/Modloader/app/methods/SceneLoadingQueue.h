#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#include <Modloader/app/structs/SceneLoadingQueue.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>

namespace app::classes::SceneLoadingQueue {
    IL2CPP_REGISTER_METHOD(0x00BA7400, app::SceneLoadingQueue_QueueSceneToLoad, get_Item, (app::SceneLoadingQueue * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x00BA74D0, int32_t, get_Count, (app::SceneLoadingQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA7560, void, ClearQueuedScenesToLoad, (app::SceneLoadingQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA7610, bool, IsSceneQueued, (app::SceneLoadingQueue * this_ptr, app::MoonGuid* guid))
    IL2CPP_REGISTER_METHOD(0x00BA7860, bool, IsSceneFirstInQueue, (app::SceneLoadingQueue * this_ptr, app::MoonGuid* guid))
    IL2CPP_REGISTER_METHOD(0x00BA79D0, app::SceneLoadingQueue_QueueSceneToLoad, GetTopScene, (app::SceneLoadingQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA7AD0, void, SortQueue, (app::SceneLoadingQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA7BF0, void, AddScene, (app::SceneLoadingQueue * this_ptr, app::RuntimeSceneMetaData* scene_meta_data, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x00BA7DF0, void, RemoveScene, (app::SceneLoadingQueue * this_ptr, app::MoonGuid* scene_moon_guid))
    IL2CPP_REGISTER_METHOD(0x00BA8010, void, RemoveTopSceneAndPurge, (app::SceneLoadingQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA83F0, void, ctor, (app::SceneLoadingQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA86D0, void, cctor, ())
} // namespace app::classes::SceneLoadingQueue
