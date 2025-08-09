#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/static_text_entries.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/AK/Wwise/State.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/CartographerEntity.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/GameWorld.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Moon/Timeline/DiscoverAreasEntity.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/app/methods/UnityEngine/Vector3.h>
#include <Modloader/app/types/GameMapTransitionManager.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/game/map/filter.h>
#include <Randomizer/game/map/map.h>
#include <Randomizer/game/pickups/quests.h>
#include <unordered_map>

using namespace modloader;
using namespace app::classes;

namespace {
    enum class LupoSelection { Intro = 0, SalesPitch = 1, NoSale = 2, Broke = 3, Thanks = 4 };

    std::unordered_map<app::GameWorldAreaID__Enum, static_text_entry> text_overrides{
        {app::GameWorldAreaID__Enum::InkwaterMarsh,   static_text_entry::LupoMarshIntroduction     },
        {app::GameWorldAreaID__Enum::KwoloksHollow,   static_text_entry::LupoHollowIntroduction    },
        {app::GameWorldAreaID__Enum::WaterMill,       static_text_entry::LupoWellspringIntroduction},
        {app::GameWorldAreaID__Enum::MidnightBurrow,  static_text_entry::LupoBurrowIntroduction    },
        {app::GameWorldAreaID__Enum::BaursReach,      static_text_entry::LupoReachIntroduction     },
        {app::GameWorldAreaID__Enum::LumaPools,       static_text_entry::LupoPoolsIntroduction     },
        {app::GameWorldAreaID__Enum::MouldwoodDepths, static_text_entry::LupoDepthsIntroduction    },
        {app::GameWorldAreaID__Enum::WindsweptWastes, static_text_entry::LupoWastesIntroduction    },
        {app::GameWorldAreaID__Enum::WillowsEnd,      static_text_entry::LupoWillowIntroduction    },
    };

    app::GameWorld* get_game_world() { return types::GameWorld::get_class()->static_fields->Instance; }

    IL2CPP_INTERCEPT(int, CartographerEntity, get_MapCost, app::CartographerEntity* this_ptr) {
        this_ptr->fields.MapQuestCompletedMapCostModifier = 1.f;
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        return core::api::uber_states::UberState(UberStateGroup::LupoMapCosts, id).get<int>();
    }

    using normal_function = app::MessageProvider* (*)(app::CartographerEntity*);

    app::MessageProvider* handle_lupo_message(app::CartographerEntity* this_ptr, LupoSelection selection, normal_function normal) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto text_override = *text_overrides[area->fields.WorldMapAreaUniqueID] + static_cast<int>(selection);
        return core::text::has_text(text_override) ? core::text::get_provider(text_override) : normal(this_ptr);
    }

    IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_IntroMessageProvider, app::CartographerEntity* this_ptr) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        auto cost = core::api::uber_states::UberState(UberStateGroup::LupoMapCosts, id).get<int>();
        area->fields.LupoData.AreaMapSpiritLevelCost = cost;
        area->fields.LupoDataOnCondition.AreaMapSpiritLevelCost = cost;
        return handle_lupo_message(this_ptr, LupoSelection::Intro, next::CartographerEntity::get_IntroMessageProvider);
    }

    IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_NoSaleMessage, app::CartographerEntity* this_ptr) {
        return handle_lupo_message(this_ptr, LupoSelection::NoSale, next::CartographerEntity::get_NoSaleMessage);
    }

    IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_SalesPitchMessage, app::CartographerEntity* this_ptr) {
        return handle_lupo_message(this_ptr, LupoSelection::SalesPitch, next::CartographerEntity::get_SalesPitchMessage);
    }

    IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_InsufficientFundsMessage, app::CartographerEntity* this_ptr) {
        return handle_lupo_message(this_ptr, LupoSelection::Broke, next::CartographerEntity::get_InsufficientFundsMessage);
    }

    IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_ThanksMessage, app::CartographerEntity* this_ptr) {
        return handle_lupo_message(this_ptr, LupoSelection::Thanks, next::CartographerEntity::get_ThanksMessage);
    }

    IL2CPP_INTERCEPT(bool, RuntimeWorldMapIcon, IsVisible, app::RuntimeWorldMapIcon* this_ptr, app::AreaMapUI* areaMap) { return true; }

    // region Quest List UI

    IL2CPP_INTERCEPT(void, QuestsUI, OptionChangeCallback, app::QuestsUI* this_ptr) {
        // Noop
    }

    bool allow_showing_description_ui = false;
    IL2CPP_INTERCEPT(void, QuestsUI, OptionPressedCallback, app::QuestsUI* this_ptr) {
        ScopedSetter setter(allow_showing_description_ui, true);
        randomizer::game::pickups::quests::set_allow_changing_active_quest(true);
        next::QuestsUI::OptionPressedCallback(this_ptr);
        randomizer::game::pickups::quests::set_allow_changing_active_quest(false);

        auto quests_controller = randomizer::game::pickups::quests::controller();
        auto quest = QuestsController::GetActiveQuest(quests_controller);

        QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);

        this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox->fields.MessageProvider = core::text::get_random_provider(
            *static_text_entry::QuestReward
        );
        MessageBox::RefreshText_1(this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox);

        // Moon pls center the thing dammit
        il2cpp::unity::set_local_position(this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox, app::Vector3{1.13f, -3.7f, 0.f});

        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.QuestRewardHeader, true);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.Keystone, false);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.SpiritLight, false);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.Ore, false);
    }

    IL2CPP_INTERCEPT(void, AreaMapNavigation, HandleMapScrolling, app::AreaMapNavigation* this_ptr) {
        auto previous_x = this_ptr->fields.m_scrollPosition.x;
        auto previous_y = this_ptr->fields.m_scrollPosition.y;

        next::AreaMapNavigation::HandleMapScrolling(this_ptr);

        if (this_ptr->fields.m_scrollPosition.x != previous_x || this_ptr->fields.m_scrollPosition.y != previous_y) {
            ScopedSetter setter(allow_showing_description_ui, true);

            auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
            QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
        }
    }

    IL2CPP_INTERCEPT(void, QuestsUI, UpdateDescriptionUI_1, app::QuestsUI* this_ptr, app::RuntimeQuest* quest) {
        if (allow_showing_description_ui) {
            next::QuestsUI::UpdateDescriptionUI_1(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(void, QuestsUI, UpdateDescriptionUI_2, app::QuestsUI* this_ptr, app::Quest* quest) {
        if (allow_showing_description_ui || quest == nullptr) {
            next::QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(app::Vector3, QuestsUI, AddItems, app::QuestsUI* this_ptr, app::Vector3 base_position, app::Quest_QuestType__Enum type) {
        auto position = base_position;

        if (type == app::Quest_QuestType__Enum::Main) {
            position.y += 0.6f;
        }

        return next::QuestsUI::AddItems(this_ptr, position, type);
    }

    bool handling_interact_button_on_map = false;
    IL2CPP_INTERCEPT(void, GameMapUI, HandleInteractButton, app::GameMapUI* this_ptr) {
        ScopedSetter setter(handling_interact_button_on_map, true);
        next::GameMapUI::HandleInteractButton(this_ptr);
    }

    IL2CPP_INTERCEPT(void, QuestsUI, SelectQuest, app::QuestsUI* this_ptr, app::Quest* quest) {
        if (!handling_interact_button_on_map) {
            next::QuestsUI::SelectQuest(this_ptr, quest);
            QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(bool, GameMapUI, CanSelectQuest, app::GameMapUI* this_ptr) { return false; }

    IL2CPP_INTERCEPT(void, AreaMapNavigation, UpdateMapTarget, app::AreaMapNavigation* this_ptr) {
        next::AreaMapNavigation::UpdateMapTarget(this_ptr);
        this_ptr->fields.m_focusTime = 0.35f;
    }

    IL2CPP_INTERCEPT(void, AreaMapNavigation, SetTargetPosition, app::AreaMapNavigation* this_ptr, app::Vector3 target_position) {
        next::AreaMapNavigation::SetTargetPosition(this_ptr, target_position);
        this_ptr->fields.m_focusTime = 0.35f;
        this_ptr->fields.m_focusOnPlayer = true;
    }

    // endregion

    /**
     * Always show "Focus Objective" on the map since "Focus Ori" is broken on KBM (they
     * calculate distance from the cursor instead of screen center).
     */
    IL2CPP_INTERCEPT(void, GameMapUI, NormalInput, app::GameMapUI* this_ptr) {
        const auto focus_ori_button = types::Input_Cmd::get_class()->static_fields->MapFocusOri;
        const auto focus_ori_button_pressed = focus_ori_button->fields.IsPressed && !focus_ori_button->fields.WasPressed && !focus_ori_button->fields.Used;

        const auto focus_objective_button = types::Input_Cmd::get_class()->static_fields->MapFocusObjective;
        const auto focus_objective_button_pressed = focus_objective_button->fields.IsPressed && !focus_objective_button->fields.WasPressed &&
            !focus_objective_button->fields.Used;

        focus_ori_button->fields.Used = focus_ori_button_pressed;
        focus_objective_button->fields.Used = focus_objective_button_pressed;
        next::GameMapUI::NormalInput(this_ptr);

        const auto filter = randomizer::game::map::active_filter();
        const auto should_toggle_interactibles = filter == randomizer::game::map::Filters::InLogic || filter == randomizer::game::map::Filters::Spoilers;
        if (should_toggle_interactibles) {
            this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = core::api::system::create_message_provider(
                randomizer::game::map::show_interactible_icons().get() ? "[MapFocusObjective] Hide Interactibles" : "[MapFocusObjective] Show Interactibles"
            );
        } else {
            this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = this_ptr->fields.FocusOnObjectiveMessageProvider;
        }

        MessageBox::RefreshText_1(this_ptr->fields.LeftStickMessageBox);
        if (focus_objective_button_pressed) {
            if (should_toggle_interactibles) {
                randomizer::game::map::show_interactible_icons().toggle();
                randomizer::game::map::refresh();
            } else {
                QuestsUI::ScrollToQuest(this_ptr->fields.m_questsUI);
            }
        }
    }

    IL2CPP_INTERCEPT(void, Moon::Timeline::DiscoverAreasEntity, ChangeState, app::DiscoverAreasEntity* this_ptr, app::DiscoverAreasEntity_State__Enum value) {
        // Since we don't want the map to show up, lets speedrun the timeline entity.
        if (value == app::DiscoverAreasEntity_State__Enum::Start) {
            auto menu = Game::UI::get_Menu();
            MenuScreenManager::HideMenuScreen(menu, true, false);
            AK::Wwise::State::SetValue(menu->fields.Sounds->fields.NoUIDisplayedState);

            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Reveal);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Fade);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::WaitForInput);
        } else {
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, value);
        }
    }

    float scaling_factor = 2.0f;
    float original_zoom = -1.0f;
    float original_scale = -1.0f;
    IL2CPP_INTERCEPT(void, AreaMapUI, Awake, app::AreaMapUI* this_ptr) {
        next::AreaMapUI::Awake(this_ptr);
        auto transition = types::GameMapTransitionManager::get_class();
        transition->static_fields->WorldMapEnabled = core::settings::world_map_enabled();
        if (original_zoom < 0.0f) {
            original_zoom = this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel;
        }

        if (original_scale < 0.0f) {
            original_scale = this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor;
        }

        this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._Navigation_k__BackingField->fields.WorldMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor = original_scale / scaling_factor;
    }

    bool discover_everything() {
        auto game_world = get_game_world();
        if (game_world) {
            // 15 is the max value of app::GameWorldAreaID__Enum when this was written.
            for (int32_t i = 0; i <= 15; i++) {
                const auto area = GameWorld::GetArea(game_world, static_cast<app::GameWorldAreaID__Enum>(i));
                if (!area) {
                    // Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
                    continue;
                }

                const auto runtime_area = GameWorld::FindRuntimeArea(game_world, area);
                if (!runtime_area) {
                    continue;
                }

                RuntimeGameWorldArea::DiscoverAllAreas(runtime_area);
            }

            debug("game", "Map revealed");
            return true;
        } else {
            warn("game", "Tried to discover all, but haven't found the GameWorld Instance yet :(");
            return false;
        }
    }

    auto on_after_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
        discover_everything();
    });
} // namespace
