#include <enums/static_text_entries.h>
#include <game/game.h>
#include <interop/csharp_bridge.h>
#include <randomizer/text_database.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/app/methods/AK/Wwise/State.h>
#include <Il2CppModLoader/app/methods/AreaMapUI.h>
#include <Il2CppModLoader/app/methods/CartographerEntity.h>
#include <Il2CppModLoader/app/methods/Game/UI.h>
#include <Il2CppModLoader/app/methods/GameMapUI.h>
#include <Il2CppModLoader/app/methods/GameWorld.h>
#include <Il2CppModLoader/app/methods/MenuScreenManager.h>
#include <Il2CppModLoader/app/methods/Moon/Timeline/DiscoverAreasEntity.h>
#include <Il2CppModLoader/app/methods/QuestsUI.h>
#include <Il2CppModLoader/app/methods/RuntimeGameWorldArea.h>
#include <Il2CppModLoader/app/methods/RuntimeWorldMapIcon.h>
#include <Il2CppModLoader/app/methods/AreaMapNavigation.h>
#include <Il2CppModLoader/app/methods/MessageBox.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Vector3.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <game/pickups/quests.h>
#include <unordered_map>

using namespace modloader;
using namespace app::methods;

namespace {
    enum class LupoSelection {
        Intro = 0,
        SalesPitch = 1,
        NoSale = 2,
        Broke = 3,
        Thanks = 4
    };

    std::unordered_map<app::GameWorldAreaID__Enum, static_text_entries> text_overrides{
        { app::GameWorldAreaID__Enum::InkwaterMarsh, static_text_entries::LupoMarshIntroduction },
        { app::GameWorldAreaID__Enum::KwoloksHollow, static_text_entries::LupoHollowIntroduction },
        { app::GameWorldAreaID__Enum::WaterMill, static_text_entries::LupoWellspringIntroduction },
        { app::GameWorldAreaID__Enum::MidnightBurrow, static_text_entries::LupoBurrowIntroduction },
        { app::GameWorldAreaID__Enum::BaursReach, static_text_entries::LupoReachIntroduction },
        { app::GameWorldAreaID__Enum::LumaPools, static_text_entries::LupoPoolsIntroduction },
        { app::GameWorldAreaID__Enum::MouldwoodDepths, static_text_entries::LupoDepthsIntroduction },
        { app::GameWorldAreaID__Enum::WindsweptWastes, static_text_entries::LupoWastesIntroduction },
        { app::GameWorldAreaID__Enum::WillowsEnd, static_text_entries::LupoWillowIntroduction },
    };

    app::GameWorld* get_game_world() {
        return il2cpp::get_class<app::GameWorld__Class>("", "GameWorld")->static_fields->Instance;
    }

    IL2CPP_INTERCEPT(CartographerEntity, int, get_MapCost, (app::CartographerEntity * this_ptr)) {
        this_ptr->fields.MapQuestCompletedMapCostModifier = 1.f;
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        return uber_states::UberState(UberStateGroup::LupoGroup, id).get<int>();
    }

    using normal_function = app::MessageProvider* (*)(app::CartographerEntity*);
    app::MessageProvider* handle_lupo_message(app::CartographerEntity* this_ptr, LupoSelection selection, normal_function normal) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto text_override = *text_overrides[area->fields.WorldMapAreaUniqueID] + static_cast<int>(selection);
        if (text_database::has_text(text_override))
            return text_database::get_provider(text_override);

        return normal(this_ptr);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_IntroMessageProvider, (app::CartographerEntity * this_ptr)) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        auto cost = uber_states::UberState(UberStateGroup::LupoGroup, id).get<int>();
        area->fields.LupoData.AreaMapSpiritLevelCost = cost;
        area->fields.LupoDataOnCondition.AreaMapSpiritLevelCost = cost;
        return handle_lupo_message(this_ptr, LupoSelection::Intro, next::CartographerEntity::get_IntroMessageProvider);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_NoSaleMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::NoSale, next::CartographerEntity::get_NoSaleMessage);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_SalesPitchMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::SalesPitch, next::CartographerEntity::get_SalesPitchMessage);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_InsufficientFundsMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::Broke, next::CartographerEntity::get_InsufficientFundsMessage);
    }

    IL2CPP_INTERCEPT(CartographerEntity, app::MessageProvider*, get_ThanksMessage, (app::CartographerEntity * this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::Thanks, next::CartographerEntity::get_ThanksMessage);
    }

    IL2CPP_INTERCEPT(RuntimeWorldMapIcon, bool, IsVisible, (app::RuntimeWorldMapIcon * this_ptr, app::AreaMapUI* areaMap)) {
        return true;
    }

    app::GameWorldAreaID__Enum area_id = app::GameWorldAreaID__Enum::None;

    IL2CPP_INTERCEPT(GameMapUI, void, FixedUpdate, (app::GameMapUI * this_ptr)) {
        next::GameMapUI::FixedUpdate(this_ptr);
        auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
        if (area == nullptr || area->fields.Area == nullptr)
            return;

        auto aid = area->fields.Area->fields.WorldMapAreaUniqueID;
        if (aid != area_id) {
            area_id = aid;
            csharp_bridge::on_map_pan(area_id);
        }
    }

    // region Quest List UI

    IL2CPP_INTERCEPT(QuestsUI, void, OptionChangeCallback, (app::QuestsUI * this_ptr)) {
        // Noop
    }

    IL2CPP_INTERCEPT(QuestsUI, void, OptionPressedCallback, (app::QuestsUI * this_ptr)) {
        game::pickups::quests::set_allow_changing_active_quest(true);
        next::QuestsUI::OptionPressedCallback(this_ptr);
        game::pickups::quests::set_allow_changing_active_quest(false);
    }

    IL2CPP_INTERCEPT(QuestsUI, app::Vector3, AddItems, (app::QuestsUI * this_ptr, app::Vector3 base_position, app::Quest_QuestType__Enum type)) {
        auto position = base_position;

        if (type == app::Quest_QuestType__Enum::Main) {
            position.y += 0.6f;
        }

        return next::QuestsUI::AddItems(this_ptr, position, type);
    }

    bool handling_interact_button_on_map = false;
    IL2CPP_INTERCEPT(GameMapUI, void, HandleInteractButton, (app::GameMapUI * this_ptr)) {
        ScopedSetter setter(handling_interact_button_on_map, true);
        next::GameMapUI::HandleInteractButton(this_ptr);
    }

    IL2CPP_INTERCEPT(QuestsUI, void, SelectQuest, (app::QuestsUI * this_ptr, app::Quest* quest)) {
        if (!handling_interact_button_on_map) {
            next::QuestsUI::SelectQuest(this_ptr, quest);
            QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(GameMapUI, bool, CanSelectQuest, (app::GameMapUI * this_ptr)) {
        return false;
    }

    IL2CPP_INTERCEPT(AreaMapNavigation, void, UpdateMapTarget, (app::AreaMapNavigation * this_ptr)) {
        next::AreaMapNavigation::UpdateMapTarget(this_ptr);
        this_ptr->fields.m_focusTime = 0.35f;
    }

    IL2CPP_INTERCEPT(AreaMapNavigation, void, SetTargetPosition, (app::AreaMapNavigation * this_ptr, app::Vector3 target_position)) {
        next::AreaMapNavigation::SetTargetPosition(this_ptr, target_position);
        this_ptr->fields.m_focusTime = 0.35f;
        this_ptr->fields.m_focusOnPlayer = true;
    }

    // endregion

    /**
     * Always show "Focus Objective" on the map since "Focus Ori" is broken on KBM (they
     * calculate distance from the cursor instead of screen center).
     */
    IL2CPP_INTERCEPT(GameMapUI, void, NormalInput, (app::GameMapUI* this_ptr)) {
        auto focus_objective_button = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd")->static_fields->MapFocusObjective;

        auto focus_objective_button_pressed = focus_objective_button->fields.IsPressed && !focus_objective_button->fields.WasPressed && !focus_objective_button->fields.Used;
        if (focus_objective_button_pressed) {
            focus_objective_button->fields.Used = true;
        }

        next::GameMapUI::NormalInput(this_ptr);

        this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = this_ptr->fields.FocusOnObjectiveMessageProvider;
        MessageBox::RefreshText_1(this_ptr->fields.LeftStickMessageBox);

        if (focus_objective_button_pressed) {
            QuestsUI::ScrollToQuest(this_ptr->fields.m_questsUI);
        }
    }

    IL2CPP_INTERCEPT(Moon::Timeline::DiscoverAreasEntity, void, ChangeState, (app::DiscoverAreasEntity * this_ptr, app::DiscoverAreasEntity_State__Enum value)) {
        // Since we don't want the map to show up, lets speedrun the timeline entity.
        if (value == app::DiscoverAreasEntity_State__Enum::Start) {
            auto menu = Game::UI::get_Menu();
            MenuScreenManager::HideMenuScreen(menu, true, false);
            AK::Wwise::State::SetValue(menu->fields.Sounds->fields.NoUIDisplayedState);

            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Reveal);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Fade);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::WaitForInput);
        } else
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, value);
    }

    float scaling_factor = 2.0f;
    float original_zoom = -1.0f;
    float original_scale = -1.0f;
    IL2CPP_INTERCEPT(AreaMapUI, void, Awake, (app::AreaMapUI * this_ptr)) {
        next::AreaMapUI::Awake(this_ptr);
        auto transition = il2cpp::get_class<app::GameMapTransitionManager__Class>("", "GameMapTransitionManager");
        transition->static_fields->WorldMapEnabled = csharp_bridge::check_ini("WorldMapEnabled");
        if (original_zoom < 0.0f)
            original_zoom = this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel;
        if (original_scale < 0.0f)
            original_scale = this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor;

        this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._Navigation_k__BackingField->fields.WorldMapZoomLevel = original_zoom / scaling_factor;
        this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor = original_scale / scaling_factor;
    }

    void on_area_map(GameEvent game_event, EventTiming timing) {
        area_id = app::GameWorldAreaID__Enum::None;
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::Start, &on_area_map);
    }

    CALL_ON_INIT(initialize);
} // namespace

INJECT_C_DLLEXPORT bool discover_everything() {
    auto game_world = get_game_world();
    if (game_world) {
        // 15 is the max value of app::GameWorldAreaID__Enum when this was written.
        for (int32_t i = 0; i <= 15; i++) {
            auto area = GameWorld::GetArea(game_world, static_cast<app::GameWorldAreaID__Enum>(i));
            if (!area) {
                // Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
                continue;
            }

            auto runtimeArea = GameWorld::FindRuntimeArea(game_world, area);
            if (!runtimeArea)
                continue;

            RuntimeGameWorldArea::DiscoverAllAreas(runtimeArea);
        }

        trace(MessageType::Debug, 5, "game", "Map revealed");
        return true;
    } else {
        trace(MessageType::Warning, 3, "game", "Tried to discover all, but haven't found the GameWorld Instance yet :(");
        return false;
    }
}
