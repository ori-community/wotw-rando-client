#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::SceneLoadingTest_GatherStatsScope {
    IL2CPP_REGISTER_METHOD(0x00ECB3A0, void, ctor, (app::SceneLoadingTest_GatherStatsScope * this_ptr, app::SceneLoadingTest_Context* ctx, app::SceneLoadingTest_Stats* stats))
    IL2CPP_REGISTER_METHOD(0x00ECB530, void, EndFrameHandler, (app::SceneLoadingTest_GatherStatsScope * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B6D8, SceneLoadingTest_GatherStatsScope_EndFrameHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ECB670, void, Dispose, (app::SceneLoadingTest_GatherStatsScope * this_ptr))
} // namespace app::classes::Moon::SceneLoadingTest_GatherStatsScope
