#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateController_ApplierContext__Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_UberStateController_ApplierContext_.h>
#include <Modloader/app/structs/IComparer_1_Moon_UberStateController_ApplierContext_.h>
#include <Modloader/app/structs/UberStateController_ApplierContext.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UberStateController_ApplierContext_ {
    IL2CPP_REGISTER_METHOD(0x02F75530, void, Sort_1, (app::UberStateController_ApplierContext__Array * keys, int32_t index, int32_t length, app::IComparer_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F75850, int32_t, BinarySearch, (app::UberStateController_ApplierContext__Array * array, int32_t index, int32_t length, app::UberStateController_ApplierContext value, app::IComparer_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F75A00, void, Sort_2, (app::UberStateController_ApplierContext__Array * keys, int32_t index, int32_t length, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberStateController_ApplierContext__Array * array, int32_t index, int32_t length, app::UberStateController_ApplierContext value, app::IComparer_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberStateController_ApplierContext__Array * keys, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberStateController_ApplierContext__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberStateController_ApplierContext__Array * keys, int32_t left, int32_t length, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberStateController_ApplierContext__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberStateController_ApplierContext__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberStateController_ApplierContext__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberStateController_ApplierContext__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberStateController_ApplierContext__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_Moon_UberStateController_ApplierContext_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_Moon_UberStateController_ApplierContext_
