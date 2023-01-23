#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_DataPointType_List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/DataPointType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DataPointType_List_1_System_String__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DataPointType_List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769F10, Dictionary_2_DataPointType_List_1_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::List_1_System_String_*, get_Item, (app::Dictionary_2_DataPointType_List_1_System_String_ * this_ptr, app::DataPointType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04773D60, Dictionary_2_DataPointType_List_1_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_DataPointType_List_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C0F0, Dictionary_2_DataPointType_List_1_System_String__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_DataPointType_List_1_System_String_ * this_ptr, app::DataPointType__Enum key, app::List_1_System_String_* value))
    IL2CPP_REGISTER_METHODINFO(0x047995F0, Dictionary_2_DataPointType_List_1_System_String__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DataPointType_List_1_System_String__
