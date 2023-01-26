#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneLoadingTest_GatherStatsScope.h>
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#include <Modloader/app/structs/SceneLoadingTest_Stats.h>

namespace app::classes::Moon::SceneLoadingTest_GatherStatsScope {
    IL2CPP_REGISTER_METHOD(0x00ECB3A0, void, ctor, (app::SceneLoadingTest_GatherStatsScope * this_ptr, app::SceneLoadingTest_Context* ctx, app::SceneLoadingTest_Stats* stats))
    IL2CPP_REGISTER_METHOD(0x00ECB530, void, EndFrameHandler, (app::SceneLoadingTest_GatherStatsScope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ECB670, void, Dispose, (app::SceneLoadingTest_GatherStatsScope * this_ptr))
} // namespace app::classes::Moon::SceneLoadingTest_GatherStatsScope
