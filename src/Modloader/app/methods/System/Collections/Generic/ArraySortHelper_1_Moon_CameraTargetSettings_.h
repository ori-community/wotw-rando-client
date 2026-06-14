#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraTargetSettings.h>
#include <Modloader/app/structs/CameraTargetSettings__Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/IComparer_1_Moon_CameraTargetSettings_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_CameraTargetSettings_ {
    IL2CPP_REGISTER_METHOD(
        0x02F344E0,
        void,
        Sort_1,
        app::CameraTargetSettings__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F34800,
        int32_t,
        BinarySearch,
        app::CameraTargetSettings__Array* array,
        int32_t index,
        int32_t length,
        app::CameraTargetSettings value,
        app::IComparer_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F349B0,
        void,
        Sort_2,
        app::CameraTargetSettings__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AB70,
        int32_t,
        InternalBinarySearch,
        app::CameraTargetSettings__Array* array,
        int32_t index,
        int32_t length,
        app::CameraTargetSettings value,
        app::IComparer_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AD30,
        void,
        SwapIfGreater,
        app::CameraTargetSettings__Array* keys,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, app::CameraTargetSettings__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::CameraTargetSettings__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::CameraTargetSettings__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8AF80,
        int32_t,
        PickPivotAndPartition,
        app::CameraTargetSettings__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::CameraTargetSettings__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8B3D0,
        void,
        DownHeap,
        app::CameraTargetSettings__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8B740,
        void,
        InsertionSort,
        app::CameraTargetSettings__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_Moon_CameraTargetSettings_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_CameraTargetSettings_
