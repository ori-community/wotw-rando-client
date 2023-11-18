#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/Comparison_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A0E0, int32_t, Compare, (app::ComparisonComparer_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad x, app::SceneLoadingQueue_QueueSceneToLoad y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_SceneLoadingQueue_QueueSceneToLoad_
