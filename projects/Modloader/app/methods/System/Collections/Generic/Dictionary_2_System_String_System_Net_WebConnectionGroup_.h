#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Net_WebConnectionGroup_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebConnectionGroup.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Net_WebConnectionGroup_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr, app::String* key, app::WebConnectionGroup** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr, app::String* key, app::WebConnectionGroup* value))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Net_WebConnectionGroup_*, get_Values, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_Net_WebConnectionGroup_ * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Net_WebConnectionGroup_
