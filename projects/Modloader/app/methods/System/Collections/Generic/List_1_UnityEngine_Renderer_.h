#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Renderer_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Renderer_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Renderer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A0E0, List_1_UnityEngine_Renderer__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_Renderer_ * this_ptr, app::Renderer* item))
    IL2CPP_REGISTER_METHODINFO(0x0478D088, List_1_UnityEngine_Renderer__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Renderer*, get_Item, (app::List_1_UnityEngine_Renderer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470A560, List_1_UnityEngine_Renderer__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_UnityEngine_Renderer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04788828, List_1_UnityEngine_Renderer__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Renderer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706CD8, List_1_UnityEngine_Renderer__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_UnityEngine_Renderer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FE38, List_1_UnityEngine_Renderer___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Renderer_ * this_ptr, app::IEnumerable_1_UnityEngine_Renderer_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0477A050, List_1_UnityEngine_Renderer__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_UnityEngine_Renderer_ * this_ptr, app::Renderer* item))
    IL2CPP_REGISTER_METHODINFO(0x04781F90, List_1_UnityEngine_Renderer__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Renderer_
