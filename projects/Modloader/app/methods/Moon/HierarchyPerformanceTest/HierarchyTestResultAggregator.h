#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HierarchyTestResultAggregator.h>
#include <Modloader/app/structs/SceneTestData.h>
#include <Modloader/app/structs/HierarchyTestResultAggregator_AggregationType__Enum.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/HPerfTestResult__Array.h>

namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestResultAggregator {
    IL2CPP_REGISTER_METHOD(0x014A44A0, void, Calculate, (app::HierarchyTestResultAggregator * this_ptr, app::SceneTestData* data, app::HierarchyTestResultAggregator_AggregationType__Enum aggregation, app::Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* container))
    IL2CPP_REGISTER_METHOD(0x014A4850, app::HPerfTestResult*, Aggregate, (app::HierarchyTestResultAggregator * this_ptr, app::HPerfTestResult__Array* object_samples))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HierarchyTestResultAggregator * this_ptr))
} // namespace app::classes::Moon::HierarchyPerformanceTest::HierarchyTestResultAggregator
