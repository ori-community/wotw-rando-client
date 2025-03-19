#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/types/QuestIconsUI.h>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(GameMapUI, void, UpdateQuests, (app::GameMapUI * this_ptr)) {
        const auto quest_icons_ui = types::QuestIconsUI::get_class()->static_fields->Instance;
        const auto filter = this_ptr->fields.m_areaMap->fields._IconManager_k__BackingField->fields.Filter;
        if (filter == app::AreaMapIconFilter__Enum::Quests) {
            quest_icons_ui->fields.AreaMapIconMode = app::QuestIconMode__Enum::ShowAll;
            QuestIconsUI::Show(quest_icons_ui);
            QuestsUI::Show(this_ptr->fields.m_questsUI);
        } else {
            quest_icons_ui->fields.AreaMapIconMode = app::QuestIconMode__Enum::Hidden;
            QuestsUI::Hide(this_ptr->fields.m_questsUI, false);
        }
    }
} // namespace
