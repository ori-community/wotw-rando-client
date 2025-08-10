#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HPerfTestResult {
    IL2CPP_REGISTER_METHOD(
        0x0149BC20,
        void,
        ctor,
        app::HPerfTestResult* this_ptr,
        int32_t id,
        double cpu_time,
        double gpu_time,
        double srp_game_view_time,
        int32_t child_count,
        app::String* path,
        app::GameObject* target
    )
    IL2CPP_REGISTER_METHOD(0x0149BD00, bool, Equals, app::HPerfTestResult* this_ptr, app::HPerfTestResult* x, app::HPerfTestResult* y)
    IL2CPP_REGISTER_METHOD(0x0149BDD0, int32_t, GetHashCode, app::HPerfTestResult* this_ptr, app::HPerfTestResult* obj)
} // namespace app::classes::Moon::HierarchyPerformanceTest::HPerfTestResult
