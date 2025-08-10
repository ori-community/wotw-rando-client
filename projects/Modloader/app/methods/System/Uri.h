#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParsingError__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/UriComponents__Enum.h>
#include <Modloader/app/structs/UriFormatException.h>
#include <Modloader/app/structs/UriFormat__Enum.h>
#include <Modloader/app/structs/UriHostNameType__Enum.h>
#include <Modloader/app/structs/UriKind__Enum.h>
#include <Modloader/app/structs/UriParser.h>
#include <Modloader/app/structs/UriPartial__Enum.h>
#include <Modloader/app/structs/Uri_Check__Enum.h>
#include <Modloader/app/structs/Uri_Flags__Enum.h>
#include <Modloader/app/structs/Uri_UriInfo.h>

namespace app::classes::System::Uri {
    IL2CPP_REGISTER_METHOD(0x02A7C400, bool, get_IsImplicitFile, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C410, bool, get_IsUncOrDosPath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C420, bool, get_IsDosPath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C430, bool, get_IsUncPath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C440, app::Uri_Flags__Enum, get_HostType, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::UriParser*, get_Syntax, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051C040, bool, get_IsNotAbsoluteUri, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C450, bool, IriParsingStatic, app::UriParser* syntax)
    IL2CPP_REGISTER_METHOD(0x02A7C530, bool, get_AllowIdn, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C650, bool, AllowIdnStatic, app::Uri* this_ptr, app::UriParser* syntax, app::Uri_Flags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsIntranet, app::Uri* this_ptr, app::String* scheme_host)
    IL2CPP_REGISTER_METHOD(0x02A7C7A0, bool, get_UserDrivenParsing, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C7B0, void, SetUserDrivenParsing, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C7D0, uint16_t, get_SecuredPathIndex, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C830, bool, NotAny, app::Uri* this_ptr, app::Uri_Flags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x02A7C840, bool, InFact, app::Uri* this_ptr, app::Uri_Flags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x02A7C850, bool, StaticNotAny, app::Uri_Flags__Enum all_flags, app::Uri_Flags__Enum check_flags)
    IL2CPP_REGISTER_METHOD(0x02A7C860, bool, StaticInFact, app::Uri_Flags__Enum all_flags, app::Uri_Flags__Enum check_flags)
    IL2CPP_REGISTER_METHOD(0x02A7C870, app::Uri_UriInfo*, EnsureUriInfo, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C8A0, void, EnsureParseRemaining, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7C8C0, void, EnsureHostString, app::Uri* this_ptr, bool allow_dns_optimization)
    IL2CPP_REGISTER_METHOD(0x02A7C920, void, ctor_1, app::Uri* this_ptr, app::String* uri_string)
    IL2CPP_REGISTER_METHOD(0x02A7CA00, void, ctor_2, app::Uri* this_ptr, app::String* uri_string, app::UriKind__Enum uri_kind)
    IL2CPP_REGISTER_METHOD(0x02A7CAE0, void, ctor_3, app::Uri* this_ptr, app::Uri* base_uri, app::String* relative_uri)
    IL2CPP_REGISTER_METHOD(0x02A7CC00, void, CreateUri, app::Uri* this_ptr, app::Uri* base_uri, app::String* relative_uri, bool dont_escape)
    IL2CPP_REGISTER_METHOD(0x02A7CE20, void, ctor_4, app::Uri* this_ptr, app::Uri* base_uri, app::Uri* relative_uri)
    IL2CPP_REGISTER_METHOD(
        0x02A7D090,
        app::ParsingError__Enum,
        GetCombinedString,
        app::Uri* base_uri,
        app::String* relative_str,
        bool dont_escape,
        app::String** result
    )
    IL2CPP_REGISTER_METHOD(0x02A7D2F0, app::UriFormatException*, GetException, app::ParsingError__Enum err)
    IL2CPP_REGISTER_METHOD(0x02A7D930, void, ctor_5, app::Uri* this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context)
    IL2CPP_REGISTER_METHOD(
        0x02A7DA50,
        void,
        ISerializable_GetObjectData,
        app::Uri* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(
        0x02A7DA50,
        void,
        GetObjectData,
        app::Uri* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(0x02A7DB70, app::String*, get_AbsolutePath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7DC80, app::String*, get_PrivateAbsolutePath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7DE30, app::String*, get_AbsoluteUri, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E030, app::String*, get_LocalPath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E100, app::String*, get_Authority, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E1E0, app::UriHostNameType__Enum, get_HostNameType, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E380, bool, get_IsDefaultPort, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E4A0, bool, get_IsFile, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E5A0, bool, get_IsLoopback, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E6B0, app::String*, get_PathAndQuery, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7E7D0, app::String__Array*, get_Segments, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7EAB0, bool, get_IsUnc, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7EB80, app::String*, get_Host, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7EC60, bool, StaticIsFile, app::UriParser* syntax)
    IL2CPP_REGISTER_METHOD(0x02A7EC80, app::Object*, get_InitializeLock, )
    IL2CPP_REGISTER_METHOD(0x02A7EE60, void, InitializeUriConfig, )
    IL2CPP_REGISTER_METHOD(0x02A7F0C0, app::String*, GetLocalPath, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7F930, int32_t, get_Port, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7FA90, app::String*, get_Query, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7FC90, app::String*, get_Fragment, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7FE90, app::String*, get_Scheme, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7FF60, bool, get_OriginalStringSwitched, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A7FFD0, app::String*, get_OriginalString, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A80030, app::String*, get_DnsSafeHost, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519280, bool, get_IsAbsoluteUri, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A80350, bool, get_UserEscaped, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A80360, app::String*, get_UserInfo, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A80440, app::UriHostNameType__Enum, CheckHostName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02A80750, app::String*, GetLeftPart, app::Uri* this_ptr, app::UriPartial__Enum part)
    IL2CPP_REGISTER_METHOD(0x02A808E0, bool, IsGenDelim, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x02A80910, bool, CheckSchemeName, app::String* scheme_name)
    IL2CPP_REGISTER_METHOD(0x02A80A90, bool, IsHexDigit, char16_t character)
    IL2CPP_REGISTER_METHOD(0x02A80AC0, int32_t, FromHex, char16_t digit)
    IL2CPP_REGISTER_METHOD(0x02A80BB0, int32_t, GetHashCode, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A80DF0, app::String*, ToString, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A80EE0, bool, op_Equality, app::Uri* uri1, app::Uri* uri2)
    IL2CPP_REGISTER_METHOD(0x02A80F10, bool, op_Inequality, app::Uri* uri1, app::Uri* uri2)
    IL2CPP_REGISTER_METHOD(0x02A80F60, bool, Equals, app::Uri* this_ptr, app::Object* comparand)
    IL2CPP_REGISTER_METHOD(0x02A81890, bool, CheckForColonInFirstPathSegment, app::String* uri_string)
    IL2CPP_REGISTER_METHOD(0x02A81990, app::String*, InternalEscapeString, app::String* raw_string)
    IL2CPP_REGISTER_METHOD(0x02A81AE0, app::ParsingError__Enum, ParseScheme, app::String* uri_string, app::Uri_Flags__Enum* flags, app::UriParser** syntax)
    IL2CPP_REGISTER_METHOD(0x02A81C00, app::UriFormatException*, ParseMinimal, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A81CD0, app::ParsingError__Enum, PrivateParseMinimal, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A82550, void, PrivateParseMinimalIri, app::Uri* this_ptr, app::String* new_host, uint16_t idx)
    IL2CPP_REGISTER_METHOD(0x02A82660, void, CreateUriInfo, app::Uri* this_ptr, app::Uri_Flags__Enum c_f)
    IL2CPP_REGISTER_METHOD(0x02A82DE0, void, CreateHostString, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A83350,
        app::String*,
        CreateHostStringHelper,
        app::String* str,
        uint16_t idx,
        uint16_t end,
        app::Uri_Flags__Enum* flags,
        app::String** scope_id
    )
    IL2CPP_REGISTER_METHOD(0x02A83590, void, GetHostViaCustomSyntax, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A83AC0, app::String*, GetParts, app::Uri* this_ptr, app::UriComponents__Enum uri_parts, app::UriFormat__Enum format_as)
    IL2CPP_REGISTER_METHOD(0x02A83AD0, app::String*, GetEscapedParts, app::Uri* this_ptr, app::UriComponents__Enum uri_parts)
    IL2CPP_REGISTER_METHOD(0x02A83C00, app::String*, GetUnescapedParts, app::Uri* this_ptr, app::UriComponents__Enum uri_parts, app::UriFormat__Enum format_as)
    IL2CPP_REGISTER_METHOD(
        0x02A83D00,
        app::String*,
        ReCreateParts,
        app::Uri* this_ptr,
        app::UriComponents__Enum parts,
        uint16_t non_canonical,
        app::UriFormat__Enum format_as
    )
    IL2CPP_REGISTER_METHOD(0x02A85070, app::String*, GetUriPartsFromUserString, app::Uri* this_ptr, app::UriComponents__Enum uri_parts)
    IL2CPP_REGISTER_METHOD(0x02A858A0, void, ParseRemaining, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A866D0,
        uint16_t,
        ParseSchemeCheckImplicitFile,
        char16_t* uri_string,
        uint16_t length,
        app::ParsingError__Enum* err,
        app::Uri_Flags__Enum* flags,
        app::UriParser** syntax
    )
    IL2CPP_REGISTER_METHOD(0x02A86BB0, bool, CheckKnownSchemes, int64_t* lptr, uint16_t n_chars, app::UriParser** syntax)
    IL2CPP_REGISTER_METHOD(0x02A871A0, app::ParsingError__Enum, CheckSchemeSyntax, char16_t* ptr, uint16_t length, app::UriParser** syntax)
    IL2CPP_REGISTER_METHOD(
        0x02A87300,
        uint16_t,
        CheckAuthorityHelper,
        app::Uri* this_ptr,
        char16_t* p_string,
        uint16_t idx,
        uint16_t length,
        app::ParsingError__Enum* err,
        app::Uri_Flags__Enum* flags,
        app::UriParser* syntax,
        app::String** new_host
    )
    IL2CPP_REGISTER_METHOD(
        0x02A881D0,
        void,
        CheckAuthorityHelperHandleDnsIri,
        app::Uri* this_ptr,
        char16_t* p_string,
        uint16_t start,
        int32_t end,
        int32_t start_input,
        bool iri_parsing,
        bool has_unicode,
        app::UriParser* syntax,
        app::String* user_info_string,
        app::Uri_Flags__Enum* flags,
        bool* just_normalized,
        app::String** new_host,
        app::ParsingError__Enum* err
    )
    IL2CPP_REGISTER_METHOD(
        0x02A88610,
        void,
        CheckAuthorityHelperHandleAnyHostIri,
        app::Uri* this_ptr,
        char16_t* p_string,
        int32_t start_input,
        int32_t end,
        bool iri_parsing,
        bool has_unicode,
        app::UriParser* syntax,
        app::Uri_Flags__Enum* flags,
        app::String** new_host,
        app::ParsingError__Enum* err
    )
    IL2CPP_REGISTER_METHOD(0x02A88910, void, FindEndOfComponent_1, app::Uri* this_ptr, app::String* input, uint16_t* idx, uint16_t end, char16_t delim)
    IL2CPP_REGISTER_METHOD(0x02A88990, void, FindEndOfComponent_2, app::Uri* this_ptr, char16_t* str, uint16_t* idx, uint16_t end, char16_t delim)
    IL2CPP_REGISTER_METHOD(0x02A88A00, app::Uri_Check__Enum, CheckCanonical, app::Uri* this_ptr, char16_t* str, uint16_t* idx, uint16_t end, char16_t delim)
    IL2CPP_REGISTER_METHOD(
        0x02A88E90,
        app::Char__Array*,
        GetCanonicalPath,
        app::Uri* this_ptr,
        app::Char__Array* dest,
        int32_t* pos,
        app::UriFormat__Enum format_as
    )
    IL2CPP_REGISTER_METHOD(0x02A897D0, void, UnescapeOnly, char16_t* pch, int32_t start, int32_t* end, char16_t ch1, char16_t ch2, char16_t ch3)
    IL2CPP_REGISTER_METHOD(0x02A89A00, app::Char__Array*, Compress, app::Char__Array* dest, uint16_t start, int32_t* dest_length, app::UriParser* syntax)
    IL2CPP_REGISTER_METHOD(0x02A89F30, int32_t, CalculateCaseInsensitiveHashCode, app::String* text)
    IL2CPP_REGISTER_METHOD(0x02A89FF0, app::String*, CombineUri, app::Uri* base_part, app::String* relative_part, app::UriFormat__Enum uri_format)
    IL2CPP_REGISTER_METHOD(0x02A8ABD0, bool, get_HasAuthority, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A8ABE0, bool, IsLWS, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x02A8AC10, bool, IsAsciiLetter, char16_t character)
    IL2CPP_REGISTER_METHOD(0x02A8AC30, bool, IsAsciiLetterOrDigit, char16_t character)
    IL2CPP_REGISTER_METHOD(0x02A8AD00, bool, IsBidiControlCharacter, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x02A8AD40, app::String*, StripBidiControlCharacter, char16_t* str_to_clean, int32_t start, int32_t length)
    IL2CPP_REGISTER_METHOD(0x02A8AEE0, void, CreateThis, app::Uri* this_ptr, app::String* uri, bool dont_escape, app::UriKind__Enum uri_kind)
    IL2CPP_REGISTER_METHOD(
        0x02A8B0D0,
        void,
        InitializeUri,
        app::Uri* this_ptr,
        app::ParsingError__Enum err,
        app::UriKind__Enum uri_kind,
        app::UriFormatException** e
    )
    IL2CPP_REGISTER_METHOD(0x02A8B840, bool, CheckForConfigLoad, app::Uri* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x02A8B8E0, bool, CheckForUnicode, app::Uri* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x02A8BA50, bool, CheckForEscapedUnreserved, app::Uri* this_ptr, app::String* data)
    IL2CPP_REGISTER_METHOD(0x02A8BC80, bool, TryCreate_1, app::String* uri_string, app::UriKind__Enum uri_kind, app::Uri** result)
    IL2CPP_REGISTER_METHOD(0x02A8BD90, bool, TryCreate_2, app::Uri* base_uri, app::String* relative_uri, app::Uri** result)
    IL2CPP_REGISTER_METHOD(0x02A8BEB0, bool, TryCreate_3, app::Uri* base_uri, app::Uri* relative_uri, app::Uri** result)
    IL2CPP_REGISTER_METHOD(0x02A8C0B0, app::String*, GetComponents, app::Uri* this_ptr, app::UriComponents__Enum components, app::UriFormat__Enum format)
    IL2CPP_REGISTER_METHOD(0x02A8C290, bool, IsWellFormedOriginalString, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A8C2D0, bool, IsWellFormedUriString, app::String* uri_string, app::UriKind__Enum uri_kind)
    IL2CPP_REGISTER_METHOD(0x02A8C400, bool, InternalIsWellFormedOriginalString, app::Uri* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A8CA10, app::String*, UnescapeDataString, app::String* string_to_unescape)
    IL2CPP_REGISTER_METHOD(
        0x02A8CBC0,
        app::String*,
        EscapeUnescapeIri,
        app::Uri* this_ptr,
        app::String* input,
        int32_t start,
        int32_t end,
        app::UriComponents__Enum component
    )
    IL2CPP_REGISTER_METHOD(0x02A8CBF0, void, ctor_6, app::Uri* this_ptr, app::Uri_Flags__Enum flags, app::UriParser* uri_parser, app::String* uri)
    IL2CPP_REGISTER_METHOD(
        0x02A8CC00,
        app::Uri*,
        CreateHelper,
        app::String* uri_string,
        bool dont_escape,
        app::UriKind__Enum uri_kind,
        app::UriFormatException** e
    )
    IL2CPP_REGISTER_METHOD(
        0x02A8CF90,
        app::Uri*,
        ResolveHelper,
        app::Uri* base_uri,
        app::Uri* relative_uri,
        app::String** new_uri_string,
        bool* user_escaped,
        app::UriFormatException** e
    )
    IL2CPP_REGISTER_METHOD(0x02A8D520, app::String*, GetRelativeSerializationString, app::Uri* this_ptr, app::UriFormat__Enum format)
    IL2CPP_REGISTER_METHOD(
        0x02A8D7D0,
        app::String*,
        GetComponentsHelper,
        app::Uri* this_ptr,
        app::UriComponents__Enum uri_components,
        app::UriFormat__Enum uri_format
    )
    IL2CPP_REGISTER_METHOD(0x02A8DA80, void, CreateThisFromUri, app::Uri* this_ptr, app::Uri* other_uri)
    IL2CPP_REGISTER_METHOD(0x02A8DC30, void, cctor, )
    inline bool operator==(app::Uri& uri1, app::Uri& uri2) { return op_Equality(&uri1, &uri2); }
    inline bool operator!=(app::Uri& uri1, app::Uri& uri2) { return op_Inequality(&uri1, &uri2); }
} // namespace app::classes::System::Uri
