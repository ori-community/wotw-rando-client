#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/MediaTypeHeaderValue.h>
#include <Modloader/app/structs/Nullable_1_System_Net_Http_Headers_Token_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::MediaTypeHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D0ECF0, void, ctor_1, app::MediaTypeHeaderValue* this_ptr, app::MediaTypeHeaderValue* source)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, app::MediaTypeHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D0F120, app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_*, get_Parameters, app::MediaTypeHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D0F280, app::Object*, ICloneable_Clone, app::MediaTypeHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D0F3D0, bool, Equals, app::MediaTypeHeaderValue* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02D0F610, int32_t, GetHashCode, app::MediaTypeHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D0F6E0, app::String*, ToString, app::MediaTypeHeaderValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D0F790, bool, TryParse, app::String* input, app::MediaTypeHeaderValue** parsed_value)
    IL2CPP_REGISTER_METHOD(0x02D0FAE0, app::Nullable_1_System_Net_Http_Headers_Token_, TryParseMediaType, app::Lexer* lexer, app::String** media)
} // namespace app::classes::System::Net::Http::Headers::MediaTypeHeaderValue
