#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/IComparer_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(
        0x02FEEA10,
        void,
        Sort_1,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t index,
        int32_t length,
        app::IComparer_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FEED30,
        int32_t,
        BinarySearch,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* array,
        int32_t index,
        int32_t length,
        app::SceneLoadingQueue_QueueSceneToLoad value,
        app::IComparer_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02FEEEE0,
        void,
        Sort_2,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t index,
        int32_t length,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8BFB0,
        int32_t,
        InternalBinarySearch,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* array,
        int32_t index,
        int32_t length,
        app::SceneLoadingQueue_QueueSceneToLoad value,
        app::IComparer_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C170,
        void,
        SwapIfGreater,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer,
        int32_t a,
        int32_t b
    )
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, app::SceneLoadingQueue_QueueSceneToLoad__Array* a, int32_t i, int32_t j)
    IL2CPP_REGISTER_METHOD(
        0x02C86EC0,
        void,
        IntrospectiveSort,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t left,
        int32_t length,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C86FB0,
        void,
        IntroSort,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t lo,
        int32_t hi,
        int32_t depth_limit,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C3D0,
        int32_t,
        PickPivotAndPartition,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C87750,
        void,
        Heapsort,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8C820,
        void,
        DownHeap,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t i,
        int32_t n,
        int32_t lo,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C8CBA0,
        void,
        InsertionSort,
        app::SceneLoadingQueue_QueueSceneToLoad__Array* keys,
        int32_t lo,
        int32_t hi,
        app::Comparison_1_SceneLoadingQueue_QueueSceneToLoad_* comparer
    )
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SceneLoadingQueue_QueueSceneToLoad_
