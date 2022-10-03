#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ {
    IL2CPP_REGISTER_METHOD(0x02F2D120, void, Sort_1, (app::MoonIconRenderer_IconObject__Array * keys, int32_t index, int32_t length, app::IComparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04722988, ArraySortHelper_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2D440, int32_t, BinarySearch, (app::MoonIconRenderer_IconObject__Array * array, int32_t index, int32_t length, app::MoonIconRenderer_IconObject value, app::IComparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04725AA0, ArraySortHelper_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2D5F0, void, Sort_2, (app::MoonIconRenderer_IconObject__Array * keys, int32_t index, int32_t length, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477B550, ArraySortHelper_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::MoonIconRenderer_IconObject__Array * array, int32_t index, int32_t length, app::MoonIconRenderer_IconObject value, app::IComparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::MoonIconRenderer_IconObject__Array * keys, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::MoonIconRenderer_IconObject__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::MoonIconRenderer_IconObject__Array * keys, int32_t left, int32_t length, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::MoonIconRenderer_IconObject__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::MoonIconRenderer_IconObject__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::MoonIconRenderer_IconObject__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::MoonIconRenderer_IconObject__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::MoonIconRenderer_IconObject__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_
