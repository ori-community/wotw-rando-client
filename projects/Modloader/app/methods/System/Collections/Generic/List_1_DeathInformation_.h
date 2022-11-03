#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_DeathInformation_ {
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_DeathInformation_ * this_ptr, app::DeathInformation* item))
    IL2CPP_REGISTER_METHODINFO(0x0475DD88, List_1_DeathInformation__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_DeathInformation_, GetEnumerator, (app::List_1_DeathInformation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A8F8, List_1_DeathInformation__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_DeathInformation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757E48, List_1_DeathInformation__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DeathInformation_ * this_ptr, app::DeathInformation* item))
    IL2CPP_REGISTER_METHODINFO(0x04709840, List_1_DeathInformation__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DeathInformation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047574F8, List_1_DeathInformation__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DeathInformation*, get_Item, (app::List_1_DeathInformation_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473C438, List_1_DeathInformation__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DeathInformation_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726D58, List_1_DeathInformation___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_DeathInformation_
