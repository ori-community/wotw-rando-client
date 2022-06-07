#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_SaveSlotBackupsManager_BackupParseQueue_ {
    IL2CPP_REGISTER_METHOD(0x02FEE3F0, void, Sort_1, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t index, int32_t length, app::IComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472A3B8, ArraySortHelper_1_SaveSlotBackupsManager_BackupParseQueue__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEE710, int32_t, BinarySearch, (app::SaveSlotBackupsManager_BackupParseQueue__Array * array, int32_t index, int32_t length, app::SaveSlotBackupsManager_BackupParseQueue value, app::IComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04786D18, ArraySortHelper_1_SaveSlotBackupsManager_BackupParseQueue__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FEE8C0, void, Sort_2, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t index, int32_t length, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473EDA8, ArraySortHelper_1_SaveSlotBackupsManager_BackupParseQueue__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::SaveSlotBackupsManager_BackupParseQueue__Array * array, int32_t index, int32_t length, app::SaveSlotBackupsManager_BackupParseQueue value, app::IComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::SaveSlotBackupsManager_BackupParseQueue__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t left, int32_t length, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::SaveSlotBackupsManager_BackupParseQueue__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_ * comparer))
}
