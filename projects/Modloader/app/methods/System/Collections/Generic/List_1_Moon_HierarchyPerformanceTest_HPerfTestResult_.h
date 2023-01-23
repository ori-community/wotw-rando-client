#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#include <Modloader/app/structs/IComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733788, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr, app::HPerfTestResult* item))
    IL2CPP_REGISTER_METHODINFO(0x04745860, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712398, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744508, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::HPerfTestResult*, get_Item, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474BC60, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr, app::IComparer_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477CE20, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04732BB0, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * this_ptr, app::IEnumerable_1_Moon_HierarchyPerformanceTest_HPerfTestResult_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04772C48, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult__AddRange__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_
