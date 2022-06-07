#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_KuState_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_KuState_ * this_ptr, app::KuState * item))
    IL2CPP_REGISTER_METHODINFO(0x04757D80, List_1_KuState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_KuState_ * this_ptr, app::KuState * item))
    IL2CPP_REGISTER_METHODINFO(0x047563E0, List_1_KuState__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_KuState_, GetEnumerator, (app::List_1_KuState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478BB60, List_1_KuState__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::KuState *, get_Item, (app::List_1_KuState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476CE68, List_1_KuState__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_KuState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C328, List_1_KuState__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_KuState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C2C0, List_1_KuState___ctor__MethodInfo)
}
