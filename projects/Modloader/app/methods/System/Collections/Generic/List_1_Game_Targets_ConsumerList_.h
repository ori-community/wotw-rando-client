#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Game_Targets_ConsumerList_.h>
#include <Modloader/app/structs/Targets_ConsumerList.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Game_Targets_ConsumerList_.h>

namespace app::classes::System::Collections::Generic::List_1_Game_Targets_ConsumerList_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, app::Targets_ConsumerList* item))
    IL2CPP_REGISTER_METHODINFO(0x0475D8C0, List_1_Game_Targets_ConsumerList__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Game_Targets_ConsumerList_, GetEnumerator, (app::List_1_Game_Targets_ConsumerList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047849D8, List_1_Game_Targets_ConsumerList__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, app::Targets_ConsumerList* item))
    IL2CPP_REGISTER_METHODINFO(0x04755978, List_1_Game_Targets_ConsumerList__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Targets_ConsumerList*, get_Item, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047904C0, List_1_Game_Targets_ConsumerList__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Game_Targets_ConsumerList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F1D0, List_1_Game_Targets_ConsumerList__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Game_Targets_ConsumerList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733AC8, List_1_Game_Targets_ConsumerList__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04736F68, List_1_Game_Targets_ConsumerList___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Game_Targets_ConsumerList_
