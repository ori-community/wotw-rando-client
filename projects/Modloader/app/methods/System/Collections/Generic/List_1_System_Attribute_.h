#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_System_Attribute_.h>
#include <Modloader/app/structs/Attribute.h>
#include <Modloader/app/structs/Attribute__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Attribute_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Attribute_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047396D8, List_1_System_Attribute___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Attribute_ * this_ptr, app::Attribute* item))
    IL2CPP_REGISTER_METHODINFO(0x04732738, List_1_System_Attribute__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Attribute_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718840, List_1_System_Attribute__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo, (app::List_1_System_Attribute_ * this_ptr, app::Attribute__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x047020E8, List_1_System_Attribute__CopyTo__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Attribute_
