#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F83F60, void, Sort_1, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04798018, ArraySortHelper_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F84280, int32_t, BinarySearch, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * array, int32_t index, int32_t length, app::XmlSchemaObjectTable_XmlSchemaObjectEntry value, app::IComparer_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04759128, ArraySortHelper_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F84430, void, Sort_2, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475D648, ArraySortHelper_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * array, int32_t index, int32_t length, app::XmlSchemaObjectTable_XmlSchemaObjectEntry value, app::IComparer_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_
