#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_SkillItem_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SkillItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775DC0, List_1_SkillItem__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SkillItem_, GetEnumerator, (app::List_1_SkillItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751B78, List_1_SkillItem__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SkillItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701218, List_1_SkillItem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SkillItem *, get_Item, (app::List_1_SkillItem_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04796E48, List_1_SkillItem__get_Item__MethodInfo)
}
