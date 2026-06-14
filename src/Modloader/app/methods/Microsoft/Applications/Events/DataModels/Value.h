#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_List_1_List_1_System_Int64_.h>
#include <Modloader/app/structs/List_1_List_1_System_Byte_.h>
#include <Modloader/app/structs/List_1_List_1_System_Double_.h>
#include <Modloader/app/structs/List_1_List_1_System_Int64_.h>
#include <Modloader/app/structs/List_1_List_1_System_String_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Attributes_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Value.h>
#include <Modloader/app/structs/ValueKind__Enum.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Value {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::ValueKind__Enum, get_type, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_type, app::Value* this_ptr, app::ValueKind__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_Microsoft_Applications_Events_DataModels_Attributes_*, get_attributes, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_attributes, app::Value* this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_Attributes_* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_stringValue, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_stringValue, app::Value* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_longValue, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_longValue, app::Value* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x002FD520, double, get_doubleValue, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD530, void, set_doubleValue, app::Value* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_List_1_System_Byte_*, get_guidValue, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_guidValue, app::Value* this_ptr, app::List_1_List_1_System_Byte_* value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::List_1_List_1_System_String_*, get_stringArray, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_stringArray, app::Value* this_ptr, app::List_1_List_1_System_String_* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_List_1_System_Int64_*, get_longArray, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_longArray, app::Value* this_ptr, app::List_1_List_1_System_Int64_* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::List_1_List_1_System_Double_*, get_doubleArray, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_doubleArray, app::Value* this_ptr, app::List_1_List_1_System_Double_* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_List_1_List_1_System_Int64_*, get_guidArray, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_guidArray, app::Value* this_ptr, app::List_1_List_1_List_1_System_Int64_* value)
    IL2CPP_REGISTER_METHOD(0x002FD540, void, ctor_1, app::Value* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD5D0, void, ctor_2, app::Value* this_ptr, app::String* full_name, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FD5E0, void, Release, app::Value* this_ptr)
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Value
