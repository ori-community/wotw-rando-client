#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneTestData.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::Moon::HierarchyPerformanceTest::SceneTestData {
    IL2CPP_REGISTER_METHOD(0x014AACE0, void, ctor, (app::SceneTestData * this_ptr, app::SceneMetaData* scene_meta_data))
}
