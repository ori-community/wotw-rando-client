#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WarningHeaderValue.h>
#include <Modloader/app/structs/Lexer.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_WarningHeaderValue_.h>
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Token.h>

namespace app::classes::System::Net::Http::Headers::WarningHeaderValue {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Agent, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Agent, (app::WarningHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Code, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Code, (app::WarningHeaderValue * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02AF4D20, app::Nullable_1_DateTimeOffset_, get_Date, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4D40, void, set_Date, (app::WarningHeaderValue * this_ptr, app::Nullable_1_DateTimeOffset_ value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Text, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Text, (app::WarningHeaderValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02D1A530, bool, IsCodeValid, (int32_t code))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1A550, bool, Equals, (app::WarningHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D1A820, int32_t, GetHashCode, (app::WarningHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1A960, bool, TryParse, (app::String * input, int32_t minimal_count, app::List_1_System_Net_Http_Headers_WarningHeaderValue_** result))
    IL2CPP_REGISTER_METHOD(0x02D1AAE0, bool, TryParseElement, (app::Lexer * lexer, app::WarningHeaderValue** parsed_value, app::Token* t))
    IL2CPP_REGISTER_METHOD(0x02D1B010, app::String*, ToString, (app::WarningHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::WarningHeaderValue
