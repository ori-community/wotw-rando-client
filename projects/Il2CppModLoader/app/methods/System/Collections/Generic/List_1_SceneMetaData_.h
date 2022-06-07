#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_SceneMetaData_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SceneMetaData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047266E8, List_1_SceneMetaData__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SceneMetaData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A868, List_1_SceneMetaData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SceneMetaData *, get_Item, (app::List_1_SceneMetaData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047030B0, List_1_SceneMetaData__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SceneMetaData_, GetEnumerator, (app::List_1_SceneMetaData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A910, List_1_SceneMetaData__GetEnumerator__MethodInfo)
}
