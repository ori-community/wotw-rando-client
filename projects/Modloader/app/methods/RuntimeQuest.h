#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/Quest_QuestState__Enum.h>

namespace app::classes::RuntimeQuest {
    IL2CPP_REGISTER_METHOD(0x0137AAD0, void, CatchUpState, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137AB70, app::Quest_QuestState__Enum, get_State, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137ACB0, void, set_State, (app::RuntimeQuest * this_ptr, app::Quest_QuestState__Enum value))
    IL2CPP_REGISTER_METHOD(0x0137AD80, bool, get_Unassigned, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137ADA0, bool, get_IsAssigned, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137ADC0, bool, get_IsCompleted, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137ADE0, bool, get_IsLastInChain, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_QuestChainLength, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137AE80, bool, ShouldAutoAssign, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137AF60, bool, ShouldAutoComplete, (app::RuntimeQuest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137B030, void, ctor, (app::RuntimeQuest * this_ptr, app::Quest* quest))
} // namespace app::classes::RuntimeQuest
