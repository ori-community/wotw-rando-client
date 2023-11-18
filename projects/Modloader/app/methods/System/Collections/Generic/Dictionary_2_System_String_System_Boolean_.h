#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key, bool value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_*, get_Keys, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key, bool value))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_Boolean_, GetEnumerator, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC0F90, bool, TryGetValue, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key, bool* value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBF070, bool, get_Item, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Boolean_
