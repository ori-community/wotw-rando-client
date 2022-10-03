#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::HierarchyPerformanceTest::SceneSample {
    IL2CPP_REGISTER_METHOD(0x014AA890, void, ctor, (app::SceneSample * this_ptr, app::Vector3 pos))
    IL2CPP_REGISTER_METHOD(0x014AAA20, app::HPerfTestResult*, GetParentResult, (app::SceneSample * this_ptr, app::GameObject* obj))
} // namespace app::classes::Moon::HierarchyPerformanceTest::SceneSample
