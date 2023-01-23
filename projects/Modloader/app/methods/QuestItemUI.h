#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/QuestItemUI.h>
#include <Modloader/app/structs/RuntimeQuest.h>

namespace app::classes::QuestItemUI {
    IL2CPP_REGISTER_METHOD(0x00E8AC70, void, SetQuest, (app::QuestItemUI * this_ptr, app::RuntimeQuest* runtime_quest))
    IL2CPP_REGISTER_METHOD(0x00E8ADC0, void, FixedUpdate, (app::QuestItemUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E8AEB0, void, Refresh, (app::QuestItemUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E8B020, void, ctor, (app::QuestItemUI * this_ptr))
} // namespace app::classes::QuestItemUI
