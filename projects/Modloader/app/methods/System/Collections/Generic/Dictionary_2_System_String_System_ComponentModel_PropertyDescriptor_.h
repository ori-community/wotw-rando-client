#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollectio_Syste_Strin_Syste_ComponentMode_PropertyDescripto_.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr, app::String* key, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_ComponentModel_PropertyDescriptor_*, get_Values, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_
