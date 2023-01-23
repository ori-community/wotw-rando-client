#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_System_ComponentModel_PropertyDescriptor_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0470A7C0, Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04712A68, Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr, app::String* key, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHODINFO(0x047824B8, Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767F90, Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_ComponentModel_PropertyDescriptor_*, get_Values, (app::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723520, Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor__get_Values__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_ComponentModel_PropertyDescriptor_
