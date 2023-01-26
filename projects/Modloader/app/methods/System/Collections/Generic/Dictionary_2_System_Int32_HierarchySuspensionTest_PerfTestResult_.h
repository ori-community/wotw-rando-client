#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_.h>
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ * this_ptr, int32_t key, app::HierarchySuspensionTest_PerfTestResult** value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ * this_ptr, int32_t key, app::HierarchySuspensionTest_PerfTestResult* value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ * this_ptr, int32_t key, app::HierarchySuspensionTest_PerfTestResult* value))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::HierarchySuspensionTest_PerfTestResult*, get_Item, (app::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_
