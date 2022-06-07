#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
    IL2CPP_REGISTER_METHOD(0x02C90440, void, Sort_1, (app::RejectHandler__Array * keys, int32_t index, int32_t length, app::IComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04783440, ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_RejectHandler__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C90760, int32_t, BinarySearch, (app::RejectHandler__Array * array, int32_t index, int32_t length, app::RejectHandler value, app::IComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04778710, ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_RejectHandler__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C90910, void, Sort_2, (app::RejectHandler__Array * keys, int32_t index, int32_t length, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04728C90, ArraySortHelper_1_ZenFulcrum_EmbeddedBrowser_RejectHandler__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::RejectHandler__Array * array, int32_t index, int32_t length, app::RejectHandler value, app::IComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::RejectHandler__Array * keys, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::RejectHandler__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::RejectHandler__Array * keys, int32_t left, int32_t length, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::RejectHandler__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::RejectHandler__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::RejectHandler__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::RejectHandler__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::RejectHandler__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * comparer))
}
