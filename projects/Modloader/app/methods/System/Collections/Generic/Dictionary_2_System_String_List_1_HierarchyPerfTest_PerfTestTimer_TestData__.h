#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValu_Enumerato_Syste_Strin_Lis_1_HierarchyPerfTes_PerfTestTime_TestDat_.h>
#include <Modloader/app/structs/List_1_HierarchyPerfTest_PerfTestTimer_TestData_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData__ {
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::List_1_HierarchyPerfTest_PerfTestTimer_TestData_*,
        get_Item,
        app::Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* this_ptr,
        app::String* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_,
        GetEnumerator,
        app::Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* this_ptr,
        app::String* key,
        app::List_1_HierarchyPerfTest_PerfTestTimer_TestData_* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData__
