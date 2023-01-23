#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Tuple_2_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2_.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__1.h>
#include <Modloader/app/structs/Tuple_2_String_Single_.h>
#include <Modloader/app/structs/Predicate_1_Tuple_2_String_Single_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__2.h>
#include <Modloader/app/structs/Tuple_2_String_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__3.h>
#include <Modloader/app/structs/Tuple_2_MoonGuid_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__4.h>
#include <Modloader/app/structs/Tuple_2_SceneManagerScene_SceneState_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__5.h>
#include <Modloader/app/structs/Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Tuple_2_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Tuple_2_, GetEnumerator, (app::List_1_System_Tuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709F80, List_1_System_Tuple_2__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_1, (app::List_1_System_Tuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BBE0, List_1_System_Tuple_2__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_Tuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D470, List_1_System_Tuple_2___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_1, (app::List_1_System_Tuple_2_ * this_ptr, app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_* item))
    IL2CPP_REGISTER_METHODINFO(0x04756DE0, List_1_System_Tuple_2__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_2, (app::List_1_System_Tuple_2__1 * this_ptr, app::Tuple_2_String_Single_* item))
    IL2CPP_REGISTER_METHODINFO(0x04783398, List_1_System_Tuple_2__1_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_System_Tuple_2__1 * this_ptr, app::Predicate_1_Tuple_2_String_Single_* match))
    IL2CPP_REGISTER_METHODINFO(0x04778878, List_1_System_Tuple_2__1_RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_System_Tuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734F40, List_1_System_Tuple_2__1__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_2, (app::List_1_System_Tuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759050, List_1_System_Tuple_2__1_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_String_Single_*, get_Item_1, (app::List_1_System_Tuple_2__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470A0B0, List_1_System_Tuple_2__1_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_3, (app::List_1_System_Tuple_2__2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D240, List_1_System_Tuple_2__2_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_String_UnityEngine_Vector3_*, get_Item_2, (app::List_1_System_Tuple_2__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04745830, List_1_System_Tuple_2__2_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_1, (app::List_1_System_Tuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E5C0, List_1_System_Tuple_2__1_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_2, (app::List_1_System_Tuple_2__2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047607C8, List_1_System_Tuple_2__2_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_3, (app::List_1_System_Tuple_2__2 * this_ptr, app::Tuple_2_String_UnityEngine_Vector3_* item))
    IL2CPP_REGISTER_METHODINFO(0x04738FD8, List_1_System_Tuple_2__2_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_3, (app::List_1_System_Tuple_2__2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777FD8, List_1_System_Tuple_2__2__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_4, (app::List_1_System_Tuple_2__1 * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047214A0, List_1_System_Tuple_2__1__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_4, (app::List_1_System_Tuple_2__3 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724698, List_1_System_Tuple_2__3_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_MoonGuid_Boolean_*, get_Item_3, (app::List_1_System_Tuple_2__3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475D6A0, List_1_System_Tuple_2__3_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_System_Tuple_2__3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04716180, List_1_System_Tuple_2__3_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_4, (app::List_1_System_Tuple_2__3 * this_ptr, app::Tuple_2_MoonGuid_Boolean_* item))
    IL2CPP_REGISTER_METHODINFO(0x047761A8, List_1_System_Tuple_2__3_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_3, (app::List_1_System_Tuple_2__4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768220, List_1_System_Tuple_2__4_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_5, (app::List_1_System_Tuple_2__4 * this_ptr, app::Tuple_2_SceneManagerScene_SceneState_* item))
    IL2CPP_REGISTER_METHODINFO(0x04789FE0, List_1_System_Tuple_2__4_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_SceneManagerScene_SceneState_*, get_Item_4, (app::List_1_System_Tuple_2__4 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04740B48, List_1_System_Tuple_2__4_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_5, (app::List_1_System_Tuple_2__4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B590, List_1_System_Tuple_2__4_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_5, (app::List_1_System_Tuple_2__3 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742F00, List_1_System_Tuple_2__3__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_6, (app::List_1_System_Tuple_2__4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472BE48, List_1_System_Tuple_2__4__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_7, (app::List_1_System_Tuple_2__5 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716C68, List_1_System_Tuple_2__5__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_6, (app::List_1_System_Tuple_2__5 * this_ptr, app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_* item))
    IL2CPP_REGISTER_METHODINFO(0x0476DAD0, List_1_System_Tuple_2__5_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_6, (app::List_1_System_Tuple_2__5 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DEE0, List_1_System_Tuple_2__5_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_*, get_Item_5, (app::List_1_System_Tuple_2__5 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477ED78, List_1_System_Tuple_2__5_get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Tuple_2_
