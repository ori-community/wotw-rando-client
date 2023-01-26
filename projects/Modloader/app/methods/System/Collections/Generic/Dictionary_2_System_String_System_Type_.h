#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Type_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Type_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_Type_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Type_ * this_ptr, app::String* key, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type_*, get_Values, (app::Dictionary_2_System_String_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Type_ * this_ptr, app::String* key, app::Type** value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_Type_ * this_ptr, app::String* key, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Type*, get_Item, (app::Dictionary_2_System_String_System_Type_ * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Type_
