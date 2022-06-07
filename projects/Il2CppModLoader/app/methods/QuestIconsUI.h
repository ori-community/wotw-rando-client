#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::QuestIconsUI {
    IL2CPP_REGISTER_METHOD(0x00E88290, app::GameObject *, get_ObjectiveMarker, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E885B0, void, Awake, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E88640, void, FixedUpdate, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E88650, void, HighlightItem, (app::QuestIconsUI * this_ptr, app::CleverMenuItem * clever_menu_item))
    IL2CPP_REGISTER_METHOD(0x00E88800, void, SetMarkerOnQuest, (app::QuestIconsUI * this_ptr, app::Quest * quest))
    IL2CPP_REGISTER_METHOD(0x00E88A80, void, UpdateIcons, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E88C50, void, BuildUI, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E88C70, void, AddIcons, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E890F0, app::QuestIconUI *, CreateIcon, (app::QuestIconsUI * this_ptr, app::RuntimeQuest * quest, bool add_to_list))
    IL2CPP_REGISTER_METHOD(0x00E897A0, void, ShowObjectiveMarker, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89960, void, HideObjectiveMarker, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89A60, void, DestroyAllIcons, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, IsVisible, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89C10, void, Reset, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89C70, void, Show, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89E60, app::Quest *, get_ActiveQuest, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89F10, void, Hide, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E89F50, void, UpdateQuestIcons, (app::QuestIconsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E8A320, void, ctor, (app::QuestIconsUI * this_ptr))
}
