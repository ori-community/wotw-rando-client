#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/SortKey.h>
#include <Modloader/app/structs/SimpleCollator.h>

namespace app::classes::System::Globalization::CompareInfo {
    IL2CPP_REGISTER_METHOD(0x01A229B0, void, ctor_1, (app::CompareInfo * this_ptr, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x01A229E0, app::CompareInfo*, GetCompareInfo, (app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x047116F0, CompareInfo_GetCompareInfo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0063D180, void, OnDeserializing, (app::CompareInfo * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x01A22AD0, void, OnDeserialized_1, (app::CompareInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A22BD0, void, OnDeserialized_2, (app::CompareInfo * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x01A22BE0, void, OnSerializing, (app::CompareInfo * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x01A22BD0, void, IDeserializationCallback_OnDeserialization, (app::CompareInfo * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x01A22CC0, app::String*, get_Name, (app::CompareInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A22DA0, int32_t, Compare_1, (app::CompareInfo * this_ptr, app::String* string1, app::String* string2))
    IL2CPP_REGISTER_METHOD(0x01A22DD0, int32_t, Compare_2, (app::CompareInfo * this_ptr, app::String* string1, app::String* string2, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x0471B778, CompareInfo_Compare_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A230A0, int32_t, Compare_3, (app::CompareInfo * this_ptr, app::String* string1, int32_t offset1, int32_t length1, app::String* string2, int32_t offset2, int32_t length2, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x047192A0, CompareInfo_Compare_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A23440, int32_t, CompareOrdinal, (app::String * string1, int32_t offset1, int32_t length1, app::String* string2, int32_t offset2, int32_t length2))
    IL2CPP_REGISTER_METHOD(0x01A234A0, bool, IsPrefix, (app::CompareInfo * this_ptr, app::String* source, app::String* prefix, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x0474A428, CompareInfo_IsPrefix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A237C0, bool, IsSuffix, (app::CompareInfo * this_ptr, app::String* source, app::String* suffix, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x0476D498, CompareInfo_IsSuffix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A23B30, int32_t, IndexOf_1, (app::CompareInfo * this_ptr, app::String* source, app::String* value, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x0472A6C0, CompareInfo_IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A23C30, int32_t, IndexOf_2, (app::CompareInfo * this_ptr, app::String* source, app::String* value, int32_t start_index, int32_t count, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x0471D4A0, CompareInfo_IndexOf_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A23F00, int32_t, LastIndexOf, (app::CompareInfo * this_ptr, app::String* source, app::String* value, int32_t start_index, int32_t count, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x047578D0, CompareInfo_LastIndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A241D0, app::SortKey*, GetSortKey, (app::CompareInfo * this_ptr, app::String* source, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A241D0, app::SortKey*, CreateSortKey, (app::CompareInfo * this_ptr, app::String* source, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHODINFO(0x04736F08, CompareInfo_CreateSortKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A24300, bool, Equals, (app::CompareInfo * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A24440, int32_t, GetHashCode, (app::CompareInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A24480, int32_t, GetHashCodeOfString_1, (app::CompareInfo * this_ptr, app::String* source, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A245E0, int32_t, GetHashCodeOfString_2, (app::CompareInfo * this_ptr, app::String* source, app::CompareOptions__Enum options, bool force_randomized_hashing, int64_t additional_entropy))
    IL2CPP_REGISTER_METHODINFO(0x047539F8, CompareInfo_GetHashCodeOfString_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A24750, app::String*, ToString, (app::CompareInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A247F0, bool, get_UseManagedCollation, ())
    IL2CPP_REGISTER_METHOD(0x01A24920, app::SimpleCollator*, GetCollator, (app::CompareInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A24D60, app::SortKey*, CreateSortKeyCore, (app::CompareInfo * this_ptr, app::String* source, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A24FD0, int32_t, internal_index_switch, (app::CompareInfo * this_ptr, app::String* s1, int32_t sindex, int32_t count, app::String* s2, app::CompareOptions__Enum opt, bool first))
    IL2CPP_REGISTER_METHOD(0x01A251B0, int32_t, internal_compare_switch, (app::CompareInfo * this_ptr, app::String* str1, int32_t offset1, int32_t length1, app::String* str2, int32_t offset2, int32_t length2, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A25290, int32_t, internal_compare_managed, (app::CompareInfo * this_ptr, app::String* str1, int32_t offset1, int32_t length1, app::String* str2, int32_t offset2, int32_t length2, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A252F0, int32_t, internal_index_managed, (app::CompareInfo * this_ptr, app::String* s1, int32_t sindex, int32_t count, app::String* s2, app::CompareOptions__Enum opt, bool first))
    IL2CPP_REGISTER_METHOD(0x01A25390, void, assign_sortkey, (app::CompareInfo * this_ptr, app::Object* key, app::String* source, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A25480, int32_t, internal_compare, (app::CompareInfo * this_ptr, app::String* str1, int32_t offset1, int32_t length1, app::String* str2, int32_t offset2, int32_t length2, app::CompareOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01A25490, int32_t, internal_index, (app::CompareInfo * this_ptr, app::String* source, int32_t sindex, int32_t count, app::String* value, app::CompareOptions__Enum options, bool first))
    IL2CPP_REGISTER_METHOD(0x01A25580, void, ctor_2, (app::CompareInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471EA90, CompareInfo__ctor_1__MethodInfo)
} // namespace app::classes::System::Globalization::CompareInfo
