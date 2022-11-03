#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Data_DataColumn_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Data_DataColumn_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F9A8, Dictionary_2_System_String_System_Data_DataColumn___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Data_DataColumn_ * this_ptr, app::String* key, app::DataColumn** value))
    IL2CPP_REGISTER_METHODINFO(0x0471DEB0, Dictionary_2_System_String_System_Data_DataColumn__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_Data_DataColumn_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0476CE60, Dictionary_2_System_String_System_Data_DataColumn__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Data_DataColumn_ * this_ptr, app::String* key, app::DataColumn* value))
    IL2CPP_REGISTER_METHODINFO(0x04798158, Dictionary_2_System_String_System_Data_DataColumn__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::DataColumn*, get_Item, (app::Dictionary_2_System_String_System_Data_DataColumn_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0476E0D0, Dictionary_2_System_String_System_Data_DataColumn__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_System_Data_DataColumn_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0472F898, Dictionary_2_System_String_System_Data_DataColumn__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Data_DataColumn_
