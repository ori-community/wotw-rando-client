#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/QuestIconsUI.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/randomizer.h>

using namespace app::classes;

namespace {
    core::Property<std::string> map_message_side_text(text_id::SideMapMessage);
    std::shared_ptr<core::reactivity::ReactiveEffect> on_map_message_side_changed;
    std::shared_ptr<core::api::messages::MessageBox> box;

    void update_side_map_message() {
        auto processed_text = std::string(map_message_side_text.get());
        box->text().processor()->process(processed_text);
        box->text().set(std::format("<s_0.9>{}</>", processed_text));
    }

    void show_map_message_side() {
        if (box == nullptr) {
            box = std::make_shared<core::api::messages::MessageBox>();
            box->set_name("map_message_side");
            box->coordinate_system().set(core::api::messages::CoordinateSystem::Relative);
            box->position().set(0.05, 0.05, 0);

            box->text_line_spacing().set(0.8);
            box->text_alignment().set(app::AlignmentMode__Enum::Left);
            box->box_horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Left);
            box->box_vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
            box->box_width().set(10.0f);
            box->show_background().set(false);
            box->text_processor(randomizer::general_text_processor());

            on_map_message_side_changed = core::reactivity::watch_effect().effect(map_message_side_text).after(&update_side_map_message).finalize();
        }

        box->show(true, false);
    }

    void hide_map_message_side() {
        if (box == nullptr) {
            return;
        }

        box->hide(true);
    }

    IL2CPP_INTERCEPT(GameMapUI, void, UpdateQuests, (app::GameMapUI * this_ptr)) {
        const auto quest_icons_ui = types::QuestIconsUI::get_class()->static_fields->Instance;
        const auto filter = this_ptr->fields.m_areaMap->fields._IconManager_k__BackingField->fields.Filter;
        if (filter == app::AreaMapIconFilter__Enum::Quests) {
            quest_icons_ui->fields.AreaMapIconMode = app::QuestIconMode__Enum::ShowAll;
            QuestIconsUI::Show(quest_icons_ui);
            QuestsUI::Show(this_ptr->fields.m_questsUI);
            hide_map_message_side();
        } else {
            quest_icons_ui->fields.AreaMapIconMode = app::QuestIconMode__Enum::Hidden;
            QuestsUI::Hide(this_ptr->fields.m_questsUI, false);
            show_map_message_side();
        }
    }

    auto on_area_map_open = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
        const auto filter = types::AreaMapUI::get_class()->static_fields->Instance->fields._IconManager_k__BackingField->fields.Filter;
        if (filter != app::AreaMapIconFilter__Enum::Quests) {
            show_map_message_side();
        }
    });

    auto on_area_map_closed = core::api::game::event_bus().register_handler(GameEvent::CloseAreaMap, EventTiming::After, [](auto, auto) {
        hide_map_message_side();
    });
} // namespace
