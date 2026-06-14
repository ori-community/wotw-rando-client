#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QuestIconMode__Enum.h>
#include <Modloader/app/structs/QuestIconUI.h>
#include <Modloader/app/structs/RuntimeQuest.h>

namespace app::classes::QuestIconUI {
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_WorldMapDepth, app::QuestIconUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_WorldMapDepth, app::QuestIconUI* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00E87DB0, bool, IsQuestLive, app::QuestIconUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetQuest, app::QuestIconUI* this_ptr, app::RuntimeQuest* runtime_quest)
    IL2CPP_REGISTER_METHOD(0x00E87E80, void, UpdateIcon, app::QuestIconUI* this_ptr, app::QuestIconMode__Enum icon_mode)
    IL2CPP_REGISTER_METHOD(0x00E880E0, void, ShowIcon, app::QuestIconUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443C10, void, HideIcon, app::QuestIconUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::QuestIconUI* this_ptr)
} // namespace app::classes::QuestIconUI
