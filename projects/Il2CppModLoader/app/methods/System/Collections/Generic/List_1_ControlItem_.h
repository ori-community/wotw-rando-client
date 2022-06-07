#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_ControlItem_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ControlItem *, get_Item, (app::List_1_ControlItem_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04787A50, List_1_ControlItem__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ControlItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755190, List_1_ControlItem__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ControlItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471C578, List_1_ControlItem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_ControlItem_, GetEnumerator, (app::List_1_ControlItem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783008, List_1_ControlItem__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ControlItem_ * this_ptr, app::ControlItem * item))
    IL2CPP_REGISTER_METHODINFO(0x0472B070, List_1_ControlItem__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::ControlItem *, Find, (app::List_1_ControlItem_ * this_ptr, app::Predicate_1_ControlItem_ * match))
    IL2CPP_REGISTER_METHODINFO(0x0471BF70, List_1_ControlItem__Find__MethodInfo)
}
