#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry__Array.h>
#include <Modloader/app/structs/IComparer_1_FullSerializer_fsAotConfiguration_Entry_.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry.h>
#include <Modloader/app/structs/Comparison_1_FullSerializer_fsAotConfiguration_Entry_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_FullSerializer_fsAotConfiguration_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02F5B910, void, Sort_1, (app::fsAotConfiguration_Entry__Array * keys, int32_t index, int32_t length, app::IComparer_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04751968, ArraySortHelper_1_FullSerializer_fsAotConfiguration_Entry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5BC30, int32_t, BinarySearch, (app::fsAotConfiguration_Entry__Array * array, int32_t index, int32_t length, app::fsAotConfiguration_Entry value, app::IComparer_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047045C8, ArraySortHelper_1_FullSerializer_fsAotConfiguration_Entry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F5BDE0, void, Sort_2, (app::fsAotConfiguration_Entry__Array * keys, int32_t index, int32_t length, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475E430, ArraySortHelper_1_FullSerializer_fsAotConfiguration_Entry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::fsAotConfiguration_Entry__Array * array, int32_t index, int32_t length, app::fsAotConfiguration_Entry value, app::IComparer_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::fsAotConfiguration_Entry__Array * keys, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::fsAotConfiguration_Entry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::fsAotConfiguration_Entry__Array * keys, int32_t left, int32_t length, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::fsAotConfiguration_Entry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::fsAotConfiguration_Entry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::fsAotConfiguration_Entry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::fsAotConfiguration_Entry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::fsAotConfiguration_Entry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FullSerializer_fsAotConfiguration_Entry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_FullSerializer_fsAotConfiguration_Entry_
