#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_EntityPlaceholder_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EntityPlaceholder *, get_Item, (app::List_1_EntityPlaceholder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04761C78, List_1_EntityPlaceholder__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_EntityPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F8E0, List_1_EntityPlaceholder__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_EntityPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047485F0, List_1_EntityPlaceholder___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_EntityPlaceholder_, GetEnumerator, (app::List_1_EntityPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047083F8, List_1_EntityPlaceholder__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_EntityPlaceholder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04744540, List_1_EntityPlaceholder__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_EntityPlaceholder_ * this_ptr, app::EntityPlaceholder * item))
    IL2CPP_REGISTER_METHODINFO(0x0472A240, List_1_EntityPlaceholder__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_EntityPlaceholder_ * this_ptr, app::EntityPlaceholder * item))
    IL2CPP_REGISTER_METHODINFO(0x04764898, List_1_EntityPlaceholder__Remove__MethodInfo)
}
