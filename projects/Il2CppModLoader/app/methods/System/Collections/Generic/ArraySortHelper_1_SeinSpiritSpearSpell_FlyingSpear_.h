#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(0x02FEFC70, void, Sort_1, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t index, int32_t length, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x047561B8, ArraySortHelper_1_SeinSpiritSpearSpell_FlyingSpear__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEFF90, int32_t, BinarySearch, (app::SeinSpiritSpearSpell_FlyingSpear__Array * array, int32_t index, int32_t length, app::SeinSpiritSpearSpell_FlyingSpear value, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478B6B8, ArraySortHelper_1_SeinSpiritSpearSpell_FlyingSpear__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF0160, void, Sort_2, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t index, int32_t length, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04771930, ArraySortHelper_1_SeinSpiritSpearSpell_FlyingSpear__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F37310, int32_t, InternalBinarySearch, (app::SeinSpiritSpearSpell_FlyingSpear__Array * array, int32_t index, int32_t length, app::SeinSpiritSpearSpell_FlyingSpear value, app::IComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F37490, void, SwapIfGreater, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02F376A0, void, Swap, (app::SeinSpiritSpearSpell_FlyingSpear__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t left, int32_t length, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F37770, int32_t, PickPivotAndPartition, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F37C40, void, DownHeap, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02F38060, void, InsertionSort, (app::SeinSpiritSpearSpell_FlyingSpear__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparer))
}
