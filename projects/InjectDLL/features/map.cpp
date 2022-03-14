#include <dll_main.h>
#include <Common/ext.h>
#include <csharp_bridge.h>
#include <unordered_map>
#include <features/messages.h>
#include <uber_states/uber_state_manager.h>
#include <system/text_database.h>
#include <utils/messaging.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

using namespace modloader;

extern void refresh_icon_alphas(bool is_map_visible);

namespace
{
    enum class LupoSelection
    {
        Intro = 0,
        SalesPitch = 1,
        NoSale = 2,
        Broke = 3,
        Thanks = 4
    };

    std::unordered_map<app::GameWorldAreaID__Enum, static_text_entries> text_overrides {
        { app::GameWorldAreaID__Enum_InkwaterMarsh, static_text_entries::LupoMarshIntroduction},
        { app::GameWorldAreaID__Enum_KwoloksHollow, static_text_entries::LupoHollowIntroduction },
        { app::GameWorldAreaID__Enum_WaterMill, static_text_entries::LupoWellspringIntroduction },
        { app::GameWorldAreaID__Enum_MidnightBurrow, static_text_entries::LupoBurrowIntroduction },
        { app::GameWorldAreaID__Enum_BaursReach, static_text_entries::LupoReachIntroduction },
        { app::GameWorldAreaID__Enum_LumaPools, static_text_entries::LupoPoolsIntroduction },
        { app::GameWorldAreaID__Enum_MouldwoodDepths, static_text_entries::LupoDepthsIntroduction },
        { app::GameWorldAreaID__Enum_WindsweptWastes, static_text_entries::LupoWastesIntroduction },
        { app::GameWorldAreaID__Enum_WillowsEnd, static_text_entries::LupoWillowIntroduction },
    };

    app::GameWorld* get_game_world()
    {
        return il2cpp::get_class<app::GameWorld__Class>("", "GameWorld")->static_fields->Instance;
    }

    IL2CPP_BINDING(, GameWorld, app::GameWorldArea*, GetArea, (app::GameWorld* thisPtr, app::GameWorldAreaID__Enum areaID))
    IL2CPP_BINDING(, GameWorld, app::RuntimeGameWorldArea*, FindRuntimeArea, (app::GameWorld* thisPtr, app::GameWorldArea* area));
    IL2CPP_BINDING(, RuntimeGameWorldArea, void, DiscoverAllAreas, (app::RuntimeGameWorldArea* thisPtr));
    IL2CPP_BINDING(, CartographerEntity, app::GameWorldArea*, get_CurrentArea, (app::CartographerEntity* this_ptr));

    IL2CPP_INTERCEPT(, CartographerEntity, int, get_MapCost, (app::CartographerEntity* this_ptr)) {
        this_ptr->fields.MapQuestCompletedMapCostModifier = 1.f;
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        return uber_states::get_uber_state_value(uber_states::constants::LUPO_GROUP_ID, id);
    }

    using normal_function = app::MessageProvider*(*)(app::CartographerEntity*);
    app::MessageProvider* handle_lupo_message(app::CartographerEntity* this_ptr, LupoSelection selection, normal_function normal)
    {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto text_override = *text_overrides[area->fields.WorldMapAreaUniqueID] + static_cast<int>(selection);
        if (text_database::has_text(text_override))
            return text_database::get_provider(text_override);

        return normal(this_ptr);
    }
    
    IL2CPP_INTERCEPT(, CartographerEntity, app::MessageProvider*, get_IntroMessageProvider, (app::CartographerEntity* this_ptr)) {
        auto area = CartographerEntity::get_CurrentArea(this_ptr);
        auto id = static_cast<int>(area->fields.WorldMapAreaUniqueID);
        auto cost = uber_states::get_uber_state_value(uber_states::constants::LUPO_GROUP_ID, id);
        area->fields.LupoData.AreaMapSpiritLevelCost = cost;
        area->fields.LupoDataOnCondition.AreaMapSpiritLevelCost = cost;
        return handle_lupo_message(this_ptr, LupoSelection::Intro, get_IntroMessageProvider);
    }

    IL2CPP_INTERCEPT(, CartographerEntity, app::MessageProvider*, get_NoSaleMessage, (app::CartographerEntity* this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::NoSale, get_NoSaleMessage);
    }

    IL2CPP_INTERCEPT(, CartographerEntity, app::MessageProvider*, get_SalesPitchMessage, (app::CartographerEntity* this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::SalesPitch, get_SalesPitchMessage);
    }
    
    IL2CPP_INTERCEPT(, CartographerEntity, app::MessageProvider*, get_InsufficientFundsMessage, (app::CartographerEntity* this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::Broke, get_InsufficientFundsMessage);
    }

    IL2CPP_INTERCEPT(, CartographerEntity, app::MessageProvider*, get_ThanksMessage, (app::CartographerEntity* this_ptr)) {
        return handle_lupo_message(this_ptr, LupoSelection::Thanks, get_ThanksMessage);
    }
    
    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, bool, IsVisible, (app::RuntimeWorldMapIcon* thisPtr, app::AreaMapUI* areaMap)) {
        return true;
    }

    app::GameWorldAreaID__Enum area_id = app::GameWorldAreaID__Enum_None;

    IL2CPP_BINDING(, GameMapUI, app::RuntimeGameWorldArea*, get_CurrentHighlightedArea, (app::GameMapUI* this_ptr));
    IL2CPP_INTERCEPT(, GameMapUI, void, FixedUpdate, (app::GameMapUI* this_ptr)) {
      GameMapUI::FixedUpdate(this_ptr);
      auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
      if (area == nullptr || area->fields.Area == nullptr)
          return;
      auto aid = area->fields.Area->fields.WorldMapAreaUniqueID;
      if (aid != area_id) {
        area_id = aid;
        csharp_bridge::on_map_pan(area_id);
      }

    }

    IL2CPP_INTERCEPT(, AreaMapUI, void, Show, (app::AreaMapUI* this_ptr, bool set_menu_audio_state)) {
        AreaMapUI::Show(this_ptr, set_menu_audio_state);
        area_id = app::GameWorldAreaID__Enum_None;
        area_map_open = true;
        csharp_bridge::on_map_state(true);
        refresh_icon_alphas(true);
    }
        
    IL2CPP_INTERCEPT(, AreaMapUI, void, Hide, (app::AreaMapUI* this_ptr)) {
        AreaMapUI::Hide(this_ptr);
        area_map_open = false;
        csharp_bridge::on_map_state(false);
        refresh_icon_alphas(false);
    }

    bool disable_next_update_map_target = false;
    IL2CPP_INTERCEPT(, AreaMapNavigation, void, SetTarget, (app::AreaMapNavigation* this_ptr, app::Quest* quest)) {
        if (csharp_bridge::check_ini("DisableQuestFocus"))
            disable_next_update_map_target = true;
        else
            AreaMapNavigation::SetTarget(this_ptr, quest);
    }

    IL2CPP_INTERCEPT(, AreaMapNavigation, void, UpdateMapTarget, (app::AreaMapNavigation* this_ptr)) {
        if (!disable_next_update_map_target)
            AreaMapNavigation::UpdateMapTarget(this_ptr);

        disable_next_update_map_target = false;
    }

    IL2CPP_BINDING(AK.Wwise, State, void, SetValue, (app::State* state));
    STATIC_IL2CPP_BINDING(Game, UI, app::MenuScreenManager*, get_Menu, ());
    IL2CPP_BINDING(, MenuScreenManager, void, HideMenuScreen, (app::MenuScreenManager* this_ptr, bool immediate, bool fade));
    IL2CPP_INTERCEPT(Moon.Timeline, DiscoverAreasEntity, void, ChangeState, (app::DiscoverAreasEntity* this_ptr, app::DiscoverAreasEntity_State__Enum value)) {
        // Since we don't want the map to show up, lets speedrun the timeline entity.
        if (value == app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_Start) {
            auto menu = UI::get_Menu();
            MenuScreenManager::HideMenuScreen(menu, true, false);
            State::SetValue(menu->fields.Sounds->fields.NoUIDisplayedState);

            ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_Reveal);
            ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_Fade);
            ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::DiscoverAreasEntity_State__Enum_WaitForInput);
        }
        else
            DiscoverAreasEntity::ChangeState(this_ptr, value);
    }

    float scaling_factor = 2.0f;
    float original_zoom = -1.0f;
    float original_scale = -1.0f;
    IL2CPP_INTERCEPT(, AreaMapUI, void, Awake, (app::AreaMapUI* this_ptr)) {
        AreaMapUI::Awake(this_ptr);
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
}

INJECT_C_DLLEXPORT bool discover_everything() {
    auto game_world = get_game_world();
    if (game_world)
    {
        // 15 is the max value of app::GameWorldAreaID__Enum when this was written.
        for (int32_t i = 0; i <= 15; i++)
        {
            auto area = GameWorld::GetArea(game_world, static_cast<app::GameWorldAreaID__Enum>(i));
            if (!area) {
                //Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
                continue;
            }

            auto runtimeArea = GameWorld::FindRuntimeArea(game_world, area);
            if (!runtimeArea)
                continue;

            RuntimeGameWorldArea::DiscoverAllAreas(runtimeArea);
        }

        trace(MessageType::Debug, 5, "game", "Map revealed");
        return true;
    }
    else {
        trace(MessageType::Warning, 3, "game", "Tried to discover all, but haven't found the GameWorld Instance yet :(");
        return false;
    }
}
