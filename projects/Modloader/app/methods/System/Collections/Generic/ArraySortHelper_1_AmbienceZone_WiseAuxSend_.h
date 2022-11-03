#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_AmbienceZone_WiseAuxSend_ {
    IL2CPP_REGISTER_METHOD(0x02F294A0, void, Sort_1, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t index, int32_t length, app::IComparer_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474C2F8, ArraySortHelper_1_AmbienceZone_WiseAuxSend__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F297C0, int32_t, BinarySearch, (app::AmbienceZone_WiseAuxSend__Array * array, int32_t index, int32_t length, app::AmbienceZone_WiseAuxSend value, app::IComparer_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472EDA0, ArraySortHelper_1_AmbienceZone_WiseAuxSend__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F29970, void, Sort_2, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t index, int32_t length, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04707A00, ArraySortHelper_1_AmbienceZone_WiseAuxSend__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::AmbienceZone_WiseAuxSend__Array * array, int32_t index, int32_t length, app::AmbienceZone_WiseAuxSend value, app::IComparer_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::AmbienceZone_WiseAuxSend__Array * keys, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::AmbienceZone_WiseAuxSend__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t left, int32_t length, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::AmbienceZone_WiseAuxSend__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_AmbienceZone_WiseAuxSend_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_AmbienceZone_WiseAuxSend_
