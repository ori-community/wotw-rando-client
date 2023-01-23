#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PointerUIBase_PointerState__Array.h>
#include <Modloader/app/structs/IComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>
#include <Modloader/app/structs/PointerUIBase_PointerState.h>
#include <Modloader/app/structs/Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ {
    IL2CPP_REGISTER_METHOD(0x02C8E810, void, Sort_1, (app::PointerUIBase_PointerState__Array * keys, int32_t index, int32_t length, app::IComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04792CF0, ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8EB30, int32_t, BinarySearch, (app::PointerUIBase_PointerState__Array * array, int32_t index, int32_t length, app::PointerUIBase_PointerState value, app::IComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478FFE8, ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8ED00, void, Sort_2, (app::PointerUIBase_PointerState__Array * keys, int32_t index, int32_t length, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04711418, ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8EE50, int32_t, InternalBinarySearch, (app::PointerUIBase_PointerState__Array * array, int32_t index, int32_t length, app::PointerUIBase_PointerState value, app::IComparer_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8EFD0, void, SwapIfGreater, (app::PointerUIBase_PointerState__Array * keys, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8F1D0, void, Swap, (app::PointerUIBase_PointerState__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::PointerUIBase_PointerState__Array * keys, int32_t left, int32_t length, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::PointerUIBase_PointerState__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8F290, int32_t, PickPivotAndPartition, (app::PointerUIBase_PointerState__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::PointerUIBase_PointerState__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8F750, void, DownHeap, (app::PointerUIBase_PointerState__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8FB70, void, InsertionSort, (app::PointerUIBase_PointerState__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_
