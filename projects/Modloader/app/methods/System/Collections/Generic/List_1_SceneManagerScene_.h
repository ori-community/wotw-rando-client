#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_SceneManagerScene_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SceneManagerScene_, GetEnumerator, (app::List_1_SceneManagerScene_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704698, List_1_SceneManagerScene__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SceneManagerScene*, get_Item, (app::List_1_SceneManagerScene_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470BCD8, List_1_SceneManagerScene__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SceneManagerScene_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793A78, List_1_SceneManagerScene__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SceneManagerScene_ * this_ptr, app::SceneManagerScene* item))
    IL2CPP_REGISTER_METHODINFO(0x0477CBD0, List_1_SceneManagerScene__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SceneManagerScene_ * this_ptr, app::SceneManagerScene* item))
    IL2CPP_REGISTER_METHODINFO(0x0475A1D8, List_1_SceneManagerScene__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::SceneManagerScene__Array*, ToArray, (app::List_1_SceneManagerScene_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715BB0, List_1_SceneManagerScene__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_SceneManagerScene_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701380, List_1_SceneManagerScene___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_SceneManagerScene_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047407E8, List_1_SceneManagerScene___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SceneManagerScene_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D8C8, List_1_SceneManagerScene__Clear__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SceneManagerScene_
