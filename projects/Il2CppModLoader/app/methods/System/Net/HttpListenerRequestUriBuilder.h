#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::HttpListenerRequestUriBuilder {
    IL2CPP_REGISTER_METHOD(0x01D4A6A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01D4A9D0, void, ctor, (app::HttpListenerRequestUriBuilder * this_ptr, app::String * raw_uri, app::String * cooked_uri_scheme, app::String * cooked_uri_host, app::String * cooked_uri_path, app::String * cooked_uri_query))
    IL2CPP_REGISTER_METHOD(0x01D4AAC0, app::Uri *, GetRequestUri, (app::String * raw_uri, app::String * cooked_uri_scheme, app::String * cooked_uri_host, app::String * cooked_uri_path, app::String * cooked_uri_query))
    IL2CPP_REGISTER_METHOD(0x01D4ADD0, app::Uri *, Build, (app::HttpListenerRequestUriBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D4AF10, void, BuildRequestUriUsingCookedPath, (app::HttpListenerRequestUriBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D4B330, void, BuildRequestUriUsingRawPath_1, (app::HttpListenerRequestUriBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D4B890, app::Encoding *, GetEncoding, (app::HttpListenerRequestUriBuilder_EncodingType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01D4B970, app::HttpListenerRequestUriBuilder_ParsingResult__Enum, BuildRequestUriUsingRawPath_2, (app::HttpListenerRequestUriBuilder * this_ptr, app::Encoding * encoding))
    IL2CPP_REGISTER_METHOD(0x01D4BE80, app::HttpListenerRequestUriBuilder_ParsingResult__Enum, ParseRawPath, (app::HttpListenerRequestUriBuilder * this_ptr, app::Encoding * encoding))
    IL2CPP_REGISTER_METHOD(0x01D4C030, bool, AppendUnicodeCodePointValuePercentEncoded, (app::HttpListenerRequestUriBuilder * this_ptr, app::String * code_point))
    IL2CPP_REGISTER_METHOD(0x01D4C370, bool, AddPercentEncodedOctetToRawOctetsList, (app::HttpListenerRequestUriBuilder * this_ptr, app::Encoding * encoding, app::String * escaped_character))
    IL2CPP_REGISTER_METHOD(0x01D4C570, bool, EmptyDecodeAndAppendRawOctetsList, (app::HttpListenerRequestUriBuilder * this_ptr, app::Encoding * encoding))
    IL2CPP_REGISTER_METHOD(0x01D4C9F0, void, AppendOctetsPercentEncoded, (app::StringBuilder * target, app::IEnumerable_1_System_Byte_ * octets))
    IL2CPP_REGISTER_METHOD(0x01D4CBE0, app::String *, GetOctetsAsString, (app::IEnumerable_1_System_Byte_ * octets))
    IL2CPP_REGISTER_METHOD(0x01D4CEF0, app::String *, GetPath, (app::String * uri_string))
    IL2CPP_REGISTER_METHOD(0x01D4D220, app::String *, AddSlashToAsteriskOnlyPath, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01D4D2D0, void, LogWarning, (app::HttpListenerRequestUriBuilder * this_ptr, app::String * method_name, app::String * message, app::Object__Array * args))
}
