#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/UriComponents__Enum.h>
#include <Modloader/app/structs/UriFormatException.h>
#include <Modloader/app/structs/UriFormat__Enum.h>
#include <Modloader/app/structs/UriParser.h>
#include <Modloader/app/structs/UriSyntaxFlags__Enum.h>

namespace app::classes::System::UriParser {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_SchemeName, app::UriParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_DefaultPort, app::UriParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::UriParser*, OnNewUri, app::UriParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0319DE30, void, InitializeAndValidate, app::UriParser* this_ptr, app::Uri* uri, app::UriFormatException** parsing_error)
    IL2CPP_REGISTER_METHOD(
        0x0319DF20,
        app::String*,
        Resolve,
        app::UriParser* this_ptr,
        app::Uri* base_uri,
        app::Uri* relative_uri,
        app::UriFormatException** parsing_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0319E150,
        app::String*,
        GetComponents,
        app::UriParser* this_ptr,
        app::Uri* uri,
        app::UriComponents__Enum components,
        app::UriFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x0319E3A0, bool, IsWellFormedOriginalString, app::UriParser* this_ptr, app::Uri* uri)
    IL2CPP_REGISTER_METHOD(0x0319E3C0, bool, get_ShouldUseLegacyV2Quirks, )
    IL2CPP_REGISTER_METHOD(0x0319E470, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::UriSyntaxFlags__Enum, get_Flags, app::UriParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0319FCB0, bool, NotAny, app::UriParser* this_ptr, app::UriSyntaxFlags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x0319FCF0, bool, InFact, app::UriParser* this_ptr, app::UriSyntaxFlags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x0319FD30, bool, IsAllSet, app::UriParser* this_ptr, app::UriSyntaxFlags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x0319FD70, bool, IsFullMatch, app::UriParser* this_ptr, app::UriSyntaxFlags__Enum flags, app::UriSyntaxFlags__Enum expected)
    IL2CPP_REGISTER_METHOD(0x0319FDB0, void, ctor, app::UriParser* this_ptr, app::UriSyntaxFlags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x0319FE50, app::UriParser*, FindOrFetchAsUnknownV1Syntax, app::String* lwr_case_scheme)
    IL2CPP_REGISTER_METHOD(0x031A03F0, app::UriParser*, GetSyntax, app::String* lwr_case_scheme)
    IL2CPP_REGISTER_METHOD(0x031A05C0, bool, get_IsSimple, app::UriParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A05D0, app::UriParser*, InternalOnNewUri, app::UriParser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A0620, void, InternalValidate, app::UriParser* this_ptr, app::Uri* this_uri, app::UriFormatException** parsing_error)
    IL2CPP_REGISTER_METHOD(
        0x029449B0,
        app::String*,
        InternalResolve,
        app::UriParser* this_ptr,
        app::Uri* this_base_uri,
        app::Uri* uri_link,
        app::UriFormatException** parsing_error
    )
    IL2CPP_REGISTER_METHOD(
        0x031A0640,
        app::String*,
        InternalGetComponents,
        app::UriParser* this_ptr,
        app::Uri* this_uri,
        app::UriComponents__Enum uri_components,
        app::UriFormat__Enum uri_format
    )
    IL2CPP_REGISTER_METHOD(0x00C53A30, bool, InternalIsWellFormedOriginalString, app::UriParser* this_ptr, app::Uri* this_uri)
} // namespace app::classes::System::UriParser
