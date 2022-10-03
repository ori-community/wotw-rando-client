#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding_TextBox_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x02F2D740, void, Sort_1, (app::TextBoxLine__Array * keys, int32_t index, int32_t length, app::IComparer_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475B918, ArraySortHelper_1_CatlikeCoding_TextBox_TextBoxLine__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2DA60, int32_t, BinarySearch, (app::TextBoxLine__Array * array, int32_t index, int32_t length, app::TextBoxLine value, app::IComparer_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04799278, ArraySortHelper_1_CatlikeCoding_TextBox_TextBoxLine__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2DC20, void, Sort_2, (app::TextBoxLine__Array * keys, int32_t index, int32_t length, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04746F78, ArraySortHelper_1_CatlikeCoding_TextBox_TextBoxLine__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F2DD70, int32_t, InternalBinarySearch, (app::TextBoxLine__Array * array, int32_t index, int32_t length, app::TextBoxLine value, app::IComparer_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2DED0, void, SwapIfGreater, (app::TextBoxLine__Array * keys, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F2E0A0, void, Swap, (app::TextBoxLine__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::TextBoxLine__Array * keys, int32_t left, int32_t length, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::TextBoxLine__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2E150, int32_t, PickPivotAndPartition, (app::TextBoxLine__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::TextBoxLine__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2E5D0, void, DownHeap, (app::TextBoxLine__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F2E990, void, InsertionSort, (app::TextBoxLine__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_CatlikeCoding_TextBox_TextBoxLine_
