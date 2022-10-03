#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberWaterControl_SplashInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F63A30, void, Sort_1, (app::UberWaterControl_SplashInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04790030, ArraySortHelper_1_UberWaterControl_SplashInfo__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F63D50, int32_t, BinarySearch, (app::UberWaterControl_SplashInfo__Array * array, int32_t index, int32_t length, app::UberWaterControl_SplashInfo value, app::IComparer_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478D6C8, ArraySortHelper_1_UberWaterControl_SplashInfo__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F63F00, void, Sort_2, (app::UberWaterControl_SplashInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04779CC0, ArraySortHelper_1_UberWaterControl_SplashInfo__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberWaterControl_SplashInfo__Array * array, int32_t index, int32_t length, app::UberWaterControl_SplashInfo value, app::IComparer_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberWaterControl_SplashInfo__Array * keys, app::Comparison_1_UberWaterControl_SplashInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberWaterControl_SplashInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberWaterControl_SplashInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberWaterControl_SplashInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberWaterControl_SplashInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberWaterControl_SplashInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberWaterControl_SplashInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberWaterControl_SplashInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberWaterControl_SplashInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberWaterControl_SplashInfo_
