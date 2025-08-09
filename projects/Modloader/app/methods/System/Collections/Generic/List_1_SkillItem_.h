#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SkillItem_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SkillItem_.h>
#include <Modloader/app/structs/SkillItem.h>

namespace app::classes::System::Collections::Generic::List_1_SkillItem_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SkillItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SkillItem_, GetEnumerator, app::List_1_SkillItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_SkillItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SkillItem*, get_Item, app::List_1_SkillItem_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_SkillItem_
