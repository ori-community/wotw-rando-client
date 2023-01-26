#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Game_Targets_ConsumerList_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Game_Targets_ConsumerList_.h>
#include <Modloader/app/structs/Targets_ConsumerList.h>

namespace app::classes::System::Collections::Generic::List_1_Game_Targets_ConsumerList_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, app::Targets_ConsumerList* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Game_Targets_ConsumerList_, GetEnumerator, (app::List_1_Game_Targets_ConsumerList_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, app::Targets_ConsumerList* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Targets_ConsumerList*, get_Item, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Game_Targets_ConsumerList_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Game_Targets_ConsumerList_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_Game_Targets_ConsumerList_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::List_1_Game_Targets_ConsumerList_
