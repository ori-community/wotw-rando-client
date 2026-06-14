#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Tuple_2_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__1.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__2.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__3.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__4.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__5.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Tuple_2_.h>
#include <Modloader/app/structs/Predicate_1_Tuple_2_String_Single_.h>
#include <Modloader/app/structs/Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_.h>
#include <Modloader/app/structs/Tuple_2_MoonGuid_Boolean_.h>
#include <Modloader/app/structs/Tuple_2_SceneManagerScene_SceneState_.h>
#include <Modloader/app/structs/Tuple_2_String_Single_.h>
#include <Modloader/app/structs/Tuple_2_String_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Tuple_2_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Tuple_2_, GetEnumerator, app::List_1_System_Tuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_1, app::List_1_System_Tuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_System_Tuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add_1,
        app::List_1_System_Tuple_2_* this_ptr,
        app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_* item
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_2, app::List_1_System_Tuple_2__1* this_ptr, app::Tuple_2_String_Single_* item)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, app::List_1_System_Tuple_2__1* this_ptr, app::Predicate_1_Tuple_2_String_Single_* match)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_System_Tuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_2, app::List_1_System_Tuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_String_Single_*, get_Item_1, app::List_1_System_Tuple_2__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_3, app::List_1_System_Tuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_String_UnityEngine_Vector3_*, get_Item_2, app::List_1_System_Tuple_2__2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_1, app::List_1_System_Tuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_2, app::List_1_System_Tuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_3, app::List_1_System_Tuple_2__2* this_ptr, app::Tuple_2_String_UnityEngine_Vector3_* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_3, app::List_1_System_Tuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_4, app::List_1_System_Tuple_2__1* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_4, app::List_1_System_Tuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_MoonGuid_Boolean_*, get_Item_3, app::List_1_System_Tuple_2__3* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_System_Tuple_2__3* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_4, app::List_1_System_Tuple_2__3* this_ptr, app::Tuple_2_MoonGuid_Boolean_* item)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_3, app::List_1_System_Tuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_5, app::List_1_System_Tuple_2__4* this_ptr, app::Tuple_2_SceneManagerScene_SceneState_* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Tuple_2_SceneManagerScene_SceneState_*, get_Item_4, app::List_1_System_Tuple_2__4* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_5, app::List_1_System_Tuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_5, app::List_1_System_Tuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_6, app::List_1_System_Tuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_7, app::List_1_System_Tuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add_6,
        app::List_1_System_Tuple_2__5* this_ptr,
        app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_6, app::List_1_System_Tuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::Tuple_2_GameController_ProfilingConfiguration_FrameCaptureTester_*,
        get_Item_5,
        app::List_1_System_Tuple_2__5* this_ptr,
        int32_t index
    )
} // namespace app::classes::System::Collections::Generic::List_1_System_Tuple_2_
