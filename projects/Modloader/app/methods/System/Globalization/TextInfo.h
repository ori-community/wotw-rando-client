#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextInfo.h>

namespace app::classes::System::Globalization::TextInfo {
    IL2CPP_REGISTER_METHOD(0x01DED530, app::TextInfo*, get_Invariant, )
    IL2CPP_REGISTER_METHOD(0x01DED6E0, void, ctor_1, app::TextInfo* this_ptr, app::CultureData* culture_data)
    IL2CPP_REGISTER_METHOD(0x01DED710, void, OnDeserializing, app::TextInfo* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x01DED720, void, OnDeserialized_1, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DED880, void, OnDeserialized_2, app::TextInfo* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x01DED890, void, OnSerializing, app::TextInfo* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x01DED970, int32_t, GetHashCodeOrdinalIgnoreCase_1, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01DED9B0, int32_t, GetHashCodeOrdinalIgnoreCase_2, app::String* s, bool force_randomized_hashing, int64_t additional_entropy)
    IL2CPP_REGISTER_METHOD(0x01DEDA10, int32_t, CompareOrdinalIgnoreCase, app::String* str1, app::String* str2)
    IL2CPP_REGISTER_METHOD(
        0x01DEDA60,
        int32_t,
        CompareOrdinalIgnoreCaseEx,
        app::String* str_a,
        int32_t index_a,
        app::String* str_b,
        int32_t index_b,
        int32_t length_a,
        int32_t length_b
    )
    IL2CPP_REGISTER_METHOD(0x01DEDA70, int32_t, IndexOfStringOrdinalIgnoreCase, app::String* source, app::String* value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01DEDB40, int32_t, LastIndexOfStringOrdinalIgnoreCase, app::String* source, app::String* value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_CultureName, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsReadOnly, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DEDC00, app::Object*, Clone, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DEDDA0, app::TextInfo*, ReadOnly, app::TextInfo* text_info)
    IL2CPP_REGISTER_METHOD(0x00533150, void, SetReadOnlyState, app::TextInfo* this_ptr, bool read_only)
    IL2CPP_REGISTER_METHOD(0x01DEDF20, char16_t, ToLower_1, app::TextInfo* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01DEDF80, app::String*, ToLower_2, app::TextInfo* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01DEE110, char16_t, ToLowerAsciiInvariant, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01DEE130, char16_t, ToUpper_1, app::TextInfo* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01DEE190, app::String*, ToUpper_2, app::TextInfo* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01DEE320, char16_t, ToUpperAsciiInvariant, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01DEE340, bool, IsAscii, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01DEE350, bool, get_IsAsciiCasingSameAsInvariant, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DEE510, bool, Equals, app::TextInfo* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01950620, int32_t, GetHashCode, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DEE600, app::String*, ToString, app::TextInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DED880, void, IDeserializationCallback_OnDeserialization, app::TextInfo* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(0x01DEE6A0, int32_t, GetCaseInsensitiveHashCode_1, app::TextInfo* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(
        0x01DEE6C0,
        int32_t,
        GetCaseInsensitiveHashCode_2,
        app::TextInfo* this_ptr,
        app::String* str,
        bool force_randomized_hashing,
        int64_t additional_entropy
    )
    IL2CPP_REGISTER_METHOD(0x01DEE8F0, int32_t, GetInvariantCaseInsensitiveHashCode, app::TextInfo* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01DEEA40, app::String*, ToUpperInternal_1, app::TextInfo* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01DEEB50, app::String*, ToLowerInternal_1, app::TextInfo* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01DEEC60, char16_t, ToUpperInternal_2, app::TextInfo* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01DEF400, char16_t, ToLowerInternal_2, app::TextInfo* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(
        0x01DEFAF0,
        int32_t,
        InternalCompareStringOrdinalIgnoreCase,
        app::String* str_a,
        int32_t index_a,
        app::String* str_b,
        int32_t index_b,
        int32_t len_a,
        int32_t len_b
    )
    IL2CPP_REGISTER_METHOD(0x01DEFCC0, void, ctor_2, app::TextInfo* this_ptr)
} // namespace app::classes::System::Globalization::TextInfo
