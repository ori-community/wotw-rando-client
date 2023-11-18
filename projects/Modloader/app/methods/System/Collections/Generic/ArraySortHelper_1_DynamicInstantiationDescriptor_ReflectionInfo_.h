#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo__Array.h>
#include <Modloader/app/structs/Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo.h>
#include <Modloader/app/structs/IComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F30AB0, void, Sort_1, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F30DD0, int32_t, BinarySearch, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * array, int32_t index, int32_t length, app::DynamicInstantiationDescriptor_ReflectionInfo value, app::IComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F30F80, void, Sort_2, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * array, int32_t index, int32_t length, app::DynamicInstantiationDescriptor_ReflectionInfo value, app::IComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::DynamicInstantiationDescriptor_ReflectionInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_DynamicInstantiationDescriptor_ReflectionInfo_
