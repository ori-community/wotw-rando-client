#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/IComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x02FF02B0,
        void,
        Sort_1,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF05D0,
        int32_t,
        BinarySearch,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* array,
        int32_t index,
        int32_t length,
        app::ServerPhysicalSystemManager_RigidbodyStateData value,
        app::IComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF07A0,
        void,
        Sort_2,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37310,
        int32_t,
        InternalBinarySearch,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* array,
        int32_t index,
        int32_t length,
        app::ServerPhysicalSystemManager_RigidbodyStateData value,
        app::IComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37490,
        void,
        SwapIfGreater,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02F376A0, void, Swap, app::ServerPhysicalSystemManager_RigidbodyStateData__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37770,
        int32_t,
        PickPivotAndPartition,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F37C40,
        void,
        DownHeap,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02F38060,
        void,
        InsertionSort,
        app::ServerPhysicalSystemManager_RigidbodyStateData__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ServerPhysicalSystemManager_RigidbodyStateData_
