#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__1.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__10.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__11.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__12.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__13.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__14.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__15.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__16.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__3.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__4.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__5.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__6.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__7.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__8.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__9.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonReference_1__1.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonReference_1__3.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonReference_1__4.h>
#include <Modloader/app/structs/MoonReference_1_ICleverMenuFadeObserver_.h>
#include <Modloader/app/structs/MoonReference_1_ICondition_.h>
#include <Modloader/app/structs/MoonReference_1_IDialogDecorator_.h>
#include <Modloader/app/structs/MoonReference_1_IDialogTransition_.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/MoonReference_1_IRaceSyncable_.h>
#include <Modloader/app/structs/MoonReference_1_ISkipCutsceneAction_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_BehaviourSystem_ITask_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionTransition_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_MoonReference_1_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_Moon_MoonReference_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_1, (app::List_1_Moon_MoonReference_1__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_UnityEngine_Transform_*, get_Item_1, (app::List_1_Moon_MoonReference_1__1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_MoonReference_1_, GetEnumerator_1, (app::List_1_Moon_MoonReference_1__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_1, (app::List_1_Moon_MoonReference_1__1 * this_ptr, app::MoonReference_1_UnityEngine_Transform_* item))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_1, (app::List_1_Moon_MoonReference_1__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_Moon_MoonReference_1__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_2, (app::List_1_Moon_MoonReference_1__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_Moon_Timeline_ITimelineEntity_*, get_Item_2, (app::List_1_Moon_MoonReference_1__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_2, (app::List_1_Moon_MoonReference_1__2 * this_ptr, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* item))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_MoonReference_1__2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_3, (app::List_1_Moon_MoonReference_1__2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_Moon_MoonReference_1__2 * this_ptr, int32_t index, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* value))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_4, (app::List_1_Moon_MoonReference_1__2 * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_2, (app::List_1_Moon_MoonReference_1__3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_3, (app::List_1_Moon_MoonReference_1__4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_Moon_InteractionGraph_IInteractionTransition_*, get_Item_3, (app::List_1_Moon_MoonReference_1__3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_3, (app::List_1_Moon_MoonReference_1__3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_Moon_InteractionGraph_IInteractionNodeDecorator_*, get_Item_4, (app::List_1_Moon_MoonReference_1__4 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_4, (app::List_1_Moon_MoonReference_1__4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_5, (app::List_1_Moon_MoonReference_1__3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_6, (app::List_1_Moon_MoonReference_1__4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_Moon_Timeline_MoonTimeline_*, get_Item_5, (app::List_1_Moon_MoonReference_1__5 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_5, (app::List_1_Moon_MoonReference_1__5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_7, (app::List_1_Moon_MoonReference_1__13 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_4, (app::List_1_Moon_MoonReference_1__5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add_3, (app::List_1_Moon_MoonReference_1__5 * this_ptr, app::MoonReference_1_Moon_Timeline_MoonTimeline_* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_ICleverMenuFadeObserver_*, get_Item_6, (app::List_1_Moon_MoonReference_1__6 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_6, (app::List_1_Moon_MoonReference_1__6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_IDialogTransition_*, get_Item_7, (app::List_1_Moon_MoonReference_1__15 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_7, (app::List_1_Moon_MoonReference_1__15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_IDialogDecorator_*, get_Item_8, (app::List_1_Moon_MoonReference_1__16 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_8, (app::List_1_Moon_MoonReference_1__16 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_8, (app::List_1_Moon_MoonReference_1__15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_9, (app::List_1_Moon_MoonReference_1__16 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_Moon_BehaviourSystem_ITask_*, get_Item_9, (app::List_1_Moon_MoonReference_1__7 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_9, (app::List_1_Moon_MoonReference_1__7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_10, (app::List_1_Moon_MoonReference_1__7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_MoonReference_1__1, GetEnumerator_2, (app::List_1_Moon_MoonReference_1__8 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_MoonReference_1__2, GetEnumerator_3, (app::List_1_Moon_MoonReference_1__10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_11, (app::List_1_Moon_MoonReference_1__10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_ICondition_*, get_Item_10, (app::List_1_Moon_MoonReference_1__11 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_10, (app::List_1_Moon_MoonReference_1__11 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_11, (app::List_1_Moon_MoonReference_1__9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_MoonReference_1__3, GetEnumerator_4, (app::List_1_Moon_MoonReference_1__9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_MoonReference_1__4, GetEnumerator_5, (app::List_1_Moon_MoonReference_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_12, (app::List_1_Moon_MoonReference_1__9 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_IRaceSyncable_*, get_Item_11, (app::List_1_Moon_MoonReference_1__13 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_12, (app::List_1_Moon_MoonReference_1__13 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_ISkipCutsceneAction_*, get_Item_12, (app::List_1_Moon_MoonReference_1__12 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_13, (app::List_1_Moon_MoonReference_1__12 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonReference_1_IGenericUberState_*, get_Item_13, (app::List_1_Moon_MoonReference_1__14 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_14, (app::List_1_Moon_MoonReference_1__14 * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_MoonReference_1_
