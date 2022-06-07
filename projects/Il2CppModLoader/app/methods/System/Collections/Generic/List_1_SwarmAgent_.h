#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_SwarmAgent_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SwarmAgent_, GetEnumerator, (app::List_1_SwarmAgent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D6F8, List_1_SwarmAgent__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SwarmAgent *, get_Item, (app::List_1_SwarmAgent_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04714A98, List_1_SwarmAgent__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SwarmAgent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775248, List_1_SwarmAgent__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SwarmAgent_ * this_ptr, app::SwarmAgent * item))
    IL2CPP_REGISTER_METHODINFO(0x04748518, List_1_SwarmAgent__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SwarmAgent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791458, List_1_SwarmAgent___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_SwarmAgent_ * this_ptr, app::Comparison_1_SwarmAgent_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04704400, List_1_SwarmAgent__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_SwarmAgent_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04783B18, List_1_SwarmAgent__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SwarmAgent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715248, List_1_SwarmAgent__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_SwarmAgent_ * this_ptr, app::SwarmAgent * item))
    IL2CPP_REGISTER_METHODINFO(0x04731788, List_1_SwarmAgent__Contains__MethodInfo)
}
