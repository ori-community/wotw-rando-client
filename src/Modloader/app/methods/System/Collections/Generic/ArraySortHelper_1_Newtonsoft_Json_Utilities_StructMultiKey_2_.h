#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_.h>
#include <Modloader/app/structs/IComparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_.h>
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object___Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02F7AA10,
        void,
        Sort_1,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F7AD30,
        int32_t,
        BinarySearch,
        app::StructMultiKey_2_System_Object_System_Object___Array* array,
        int32_t index,
        int32_t length,
        app::StructMultiKey_2_System_Object_System_Object_ value,
        app::IComparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F7AEE0,
        void,
        Sort_2,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C898B0,
        int32_t,
        InternalBinarySearch,
        app::StructMultiKey_2_System_Object_System_Object___Array* array,
        int32_t index,
        int32_t length,
        app::StructMultiKey_2_System_Object_System_Object_ value,
        app::IComparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89A40,
        void,
        SwapIfGreater,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, app::StructMultiKey_2_System_Object_System_Object___Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C89C60,
        int32_t,
        PickPivotAndPartition,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A050,
        void,
        DownHeap,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8A330,
        void,
        InsertionSort,
        app::StructMultiKey_2_System_Object_System_Object___Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Newtonsoft_Json_Utilities_StructMultiKey_2_
