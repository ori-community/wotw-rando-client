#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsVersionedType__Array.h>
#include <Modloader/app/structs/Comparison_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/IComparer_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/fsVersionedType.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_FullSerializer_Internal_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x02F5B2F0, void, Sort_1, (app::fsVersionedType__Array * keys, int32_t index, int32_t length, app::IComparer_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F5B610, int32_t, BinarySearch, (app::fsVersionedType__Array * array, int32_t index, int32_t length, app::fsVersionedType value, app::IComparer_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F5B7C0, void, Sort_2, (app::fsVersionedType__Array * keys, int32_t index, int32_t length, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::fsVersionedType__Array * array, int32_t index, int32_t length, app::fsVersionedType value, app::IComparer_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::fsVersionedType__Array * keys, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::fsVersionedType__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::fsVersionedType__Array * keys, int32_t left, int32_t length, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::fsVersionedType__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::fsVersionedType__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::fsVersionedType__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::fsVersionedType__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::fsVersionedType__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_FullSerializer_Internal_fsVersionedType_
