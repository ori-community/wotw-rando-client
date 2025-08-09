#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/ICollection_1_System_Net_Http_Headers_RangeItemHeaderValue_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>

namespace app::classes::System::Net::Http::Headers::HashCodeCalculator {
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_1, app::ICollection_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_2, app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_* list)
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_3, app::ICollection_1_System_String_* list)
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_4, app::ICollection_1_System_Net_Http_Headers_RangeItemHeaderValue_* list)
} // namespace app::classes::System::Net::Http::Headers::HashCodeCalculator
