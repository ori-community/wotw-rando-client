#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyTestResultAggregator {
    IL2CPP_REGISTER_METHOD(0x014A44A0, void, Calculate, (app::HierarchyTestResultAggregator * this_ptr, app::SceneTestData * data, app::HierarchyTestResultAggregator_AggregationType__Enum aggregation, app::Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_ * container))
    IL2CPP_REGISTER_METHOD(0x014A4850, app::HPerfTestResult *, Aggregate, (app::HierarchyTestResultAggregator * this_ptr, app::HPerfTestResult__Array * object_samples))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HierarchyTestResultAggregator * this_ptr))
}
