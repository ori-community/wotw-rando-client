#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneRoot.h>

namespace app::classes::ResourcesCollectionHelper {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CollectDisposableResoucesBuildTime, app::SceneRoot* root)
}
