#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_RangeItemHeaderValue_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Net::Http::Headers::CollectionExtensions {
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_1, (app::List_1_System_Object_ * first, app::List_1_System_Object_* second))
    IL2CPP_REGISTER_METHOD(0x01541BA0, app::String*, ToString_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x01AF1540, void, ToStringBuilder_1, (app::List_1_System_Object_ * list, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_2, (app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * first, app::List_1_System_Net_Http_Headers_NameValueHeaderValue_* second))
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_3, (app::List_1_System_String_ * first, app::List_1_System_String_* second))
    IL2CPP_REGISTER_METHOD(0x01AF1540, void, ToStringBuilder_2, (app::List_1_System_String_ * list, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x01AF1540, void, ToStringBuilder_3, (app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * list, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x01541BA0, app::String*, ToString_2, (app::List_1_System_Net_Http_Headers_NameValueHeaderValue_ * list))
    IL2CPP_REGISTER_METHOD(0x01567DA0, bool, SequenceEqual_4, (app::List_1_System_Net_Http_Headers_RangeItemHeaderValue_ * first, app::List_1_System_Net_Http_Headers_RangeItemHeaderValue_* second))
} // namespace app::classes::System::Net::Http::Headers::CollectionExtensions
