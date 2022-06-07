#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_SetupStateModifier_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SetupStateModifier *, get_Item, (app::List_1_SetupStateModifier_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478F730, List_1_SetupStateModifier__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SetupStateModifier_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790B38, List_1_SetupStateModifier__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SetupStateModifier_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752600, List_1_SetupStateModifier___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SetupStateModifier_ * this_ptr, app::SetupStateModifier * item))
    IL2CPP_REGISTER_METHODINFO(0x0475AAA0, List_1_SetupStateModifier__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SetupStateModifier_ * this_ptr, app::SetupStateModifier * item))
    IL2CPP_REGISTER_METHODINFO(0x04784270, List_1_SetupStateModifier__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_SetupStateModifier_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470AC48, List_1_SetupStateModifier__RemoveAt__MethodInfo)
}
