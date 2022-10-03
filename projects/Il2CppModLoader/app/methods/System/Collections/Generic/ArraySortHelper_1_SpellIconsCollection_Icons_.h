#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x02FF27B0, void, Sort_1, (app::SpellIconsCollection_Icons__Array * keys, int32_t index, int32_t length, app::IComparer_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04727C08, ArraySortHelper_1_SpellIconsCollection_Icons__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF2AD0, int32_t, BinarySearch, (app::SpellIconsCollection_Icons__Array * array, int32_t index, int32_t length, app::SpellIconsCollection_Icons value, app::IComparer_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047134A0, ArraySortHelper_1_SpellIconsCollection_Icons__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF2C80, void, Sort_2, (app::SpellIconsCollection_Icons__Array * keys, int32_t index, int32_t length, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477D6F8, ArraySortHelper_1_SpellIconsCollection_Icons__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8BFB0, int32_t, InternalBinarySearch, (app::SpellIconsCollection_Icons__Array * array, int32_t index, int32_t length, app::SpellIconsCollection_Icons value, app::IComparer_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C170, void, SwapIfGreater, (app::SpellIconsCollection_Icons__Array * keys, app::Comparison_1_SpellIconsCollection_Icons_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8C330, void, Swap, (app::SpellIconsCollection_Icons__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::SpellIconsCollection_Icons__Array * keys, int32_t left, int32_t length, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::SpellIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C3D0, int32_t, PickPivotAndPartition, (app::SpellIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::SpellIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8C820, void, DownHeap, (app::SpellIconsCollection_Icons__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8CBA0, void, InsertionSort, (app::SpellIconsCollection_Icons__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SpellIconsCollection_Icons_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_SpellIconsCollection_Icons_
