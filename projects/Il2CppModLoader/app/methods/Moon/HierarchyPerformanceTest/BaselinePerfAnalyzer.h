#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::BaselinePerfAnalyzer {
    IL2CPP_REGISTER_METHOD(0x0149B670, bool, Analyze, (app::BaselinePerfAnalyzer * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results))
    IL2CPP_REGISTER_METHOD(0x0149B800, double, GetAverageGPUTime, (app::BaselinePerfAnalyzer * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results))
    IL2CPP_REGISTER_METHOD(0x0149B8E0, double, GetAverageSRPGameViewTime, (app::BaselinePerfAnalyzer * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results))
    IL2CPP_REGISTER_METHOD(0x0149B9C0, bool, ValidateResultsGPUDispersion, (app::BaselinePerfAnalyzer * this_ptr, app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results, double avg_gpu))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BaselinePerfAnalyzer * this_ptr))
}
