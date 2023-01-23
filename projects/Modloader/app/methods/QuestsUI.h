#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/QuestsUI.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quest_QuestType__Enum.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/QuestItemUI.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::QuestsUI {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MenuTabBackground__Enum, get_BackgroundMode, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E93AC0, void, Awake, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E93DA0, void, OnDestroy, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E94070, void, FixedUpdate, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E94080, void, UpdateItemInfo, (app::QuestsUI * this_ptr, app::CleverMenuItem* clever_menu_item))
    IL2CPP_REGISTER_METHOD(0x00E941B0, void, HighlightItem, (app::QuestsUI * this_ptr, app::CleverMenuItem* clever_menu_item))
    IL2CPP_REGISTER_METHOD(0x00E944D0, void, SetMarkerOnQuest, (app::QuestsUI * this_ptr, app::Quest* quest))
    IL2CPP_REGISTER_METHOD(0x00E94570, void, UpdateItems, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E94780, void, OptionChangeCallback, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782CA0, QuestsUI_OptionChangeCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E949E0, void, UpdateVisuals, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E94AF0, void, ScrollToQuest, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E94C50, void, OptionPressedCallback, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771AF0, QuestsUI_OptionPressedCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E94D80, app::Quest*, GetCurrentSelectedQuest, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E94E30, app::CleverMenuItem*, GetQuestItem, (app::QuestsUI * this_ptr, app::Quest* quest))
    IL2CPP_REGISTER_METHOD(0x00E94FF0, app::CleverMenuItem*, GetActiveQuestItem, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E950F0, void, BuildUI, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E95380, app::Vector3, AddItems, (app::QuestsUI * this_ptr, app::Vector3 base_position, app::Quest_QuestType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00E95670, bool, ShouldAddItem, (app::QuestsUI * this_ptr, app::RuntimeQuest* quest))
    IL2CPP_REGISTER_METHOD(0x00E956A0, app::QuestItemUI*, CreateQuestItem, (app::QuestsUI * this_ptr, app::Quest_QuestType__Enum quest_type, app::RuntimeQuest* runtime_quest, app::Vector2 row_position))
    IL2CPP_REGISTER_METHOD(0x00E95B80, void, UpdateDescriptionUI_1, (app::QuestsUI * this_ptr, app::RuntimeQuest* quest))
    IL2CPP_REGISTER_METHOD(0x00E95D40, void, UpdateDescriptionUI_2, (app::QuestsUI * this_ptr, app::Quest* quest))
    IL2CPP_REGISTER_METHOD(0x00E95FD0, void, DestroyUI, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00601090, bool, IsVisible, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E96200, void, SelectQuest, (app::QuestsUI * this_ptr, app::Quest* quest))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E96340, void, Show, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E96650, app::Quest*, get_ActiveQuest, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E96870, void, Hide, (app::QuestsUI * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x00E96A40, void, ShowImmediate, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E96AA0, void, HideImmediate, (app::QuestsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E96AF0, void, ctor, (app::QuestsUI * this_ptr))
} // namespace app::classes::QuestsUI
