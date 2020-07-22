#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>
#include <dev/dev_commands.h>
#include <uber_states/uber_state_manager.h>

#include <csharp_bridge.h>

#include <unordered_map>
#include <random>

namespace
{
    enum class NewFilters : int32_t {
        All = 0,
        Quests = 1,
        Teleports = 2,
        Collectibles = 3,
        InLogic = 4,
        Spoilers = 5,
        COUNT = 6,
    };

    std::mt19937 generator(40500);
    const std::unordered_map<std::string, std::pair<int, int>> TREE_OVERRIDES = {
        { "64590ed6, 476b6885, 8993bbb3, 7d01ee6d", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_DoubleJump) },
        { "2093882f, 41284e46, 284565b7, 3b59fe87", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_MeditateSpell) },
        { "409f9b9c, 4875095f, 605e3d99, 8793aba7", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_DamageUpgradeB) },
        { "b14a658b, 47ae6c64, c545e4a0, 5ec56dc1", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_DashNew) },
        { "9a3ba1c4, 44f761c3, 3e220da0, 5df0873f", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Bash) },
        { "0301d83a, 4bf5928c, f5dd648f, ced61561", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_WaterDash) },
        { "7e686e64, 4fdc6a7a, 8c545381, c27e91d0", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_GlowSpell) },
        { "c4631bfe, 4805c6ee, cdefd19f, 9acfe6d8", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_ChargeJump) },
        { "9372586a, 48214636, 9c57548d, 182b410d", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_SpiritLeash) },
        { "e0eda584, 48cbb5c7, cb914bab, fa693844", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_DamageUpgradeA) },
        { "1c2f12f9, 4b5ac685, ff9bd6a4, cbe66a48", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Digging) },
        { "1f79d15a, 4192137e, a40d0c9e, 3e289606", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Grenade) },
    };

    std::string stingify_guid(app::MoonGuid *guid)
    {
        return format(
            "%08x, %08x, %08x, %08x",
            guid->fields.A,
            guid->fields.B,
            guid->fields.C,
            guid->fields.D
        );
    }

    NAMED_IL2CPP_BINDING(, MoonGuid, void, .ctor, ctor, (app::MoonGuid* icon, int a, int b, int c, int d));

    app::MoonGuid* create_guid()
    {
        auto guid = il2cpp::create_object<app::MoonGuid>("", "MoonGuid");
        MoonGuid::ctor(
            guid,
            generator(),
            generator(),
            generator(),
            generator()
        );

        return guid;
    }

    struct SpoilerState
    {
        int group_id;
        int state_id;
        bool has_spoiler_icon;
    };

    std::unordered_map<std::string, SpoilerState> spoiler_states;
    NAMED_IL2CPP_BINDING(, RuntimeWorldMapIcon, void, .ctor, ctor, (app::RuntimeWorldMapIcon* this_ptr, app::GameWorldArea_WorldMapIcon* icon, app::RuntimeGameWorldArea* area));
    IL2CPP_BINDING(, AreaMapIcon, void, SetMessageProvider, (app::AreaMapIcon* this_ptr, app::MessageProvider* provider));

    app::MessageProvider* create_message_provider(Il2CppString* message)
    {
        auto provider = il2cpp::create_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        // TODO: Add input provider and message provider with different color.

        auto item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
        item->fields.English = reinterpret_cast<app::String*>(message);
        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }

    app::WorldMapIconType__Enum get_base_icon(app::RuntimeWorldMapIcon* icon)
    {
        auto base_icons = icon->fields.Area->fields.Area->fields.Icons;
        for (auto i = 0; i < base_icons->fields._size; ++i)
        {
            auto base_icon = base_icons->fields._items->vector[i];
            if (base_icon->fields.Guid->fields.A == icon->fields.Guid->fields.A &&
                base_icon->fields.Guid->fields.B == icon->fields.Guid->fields.B &&
                base_icon->fields.Guid->fields.C == icon->fields.Guid->fields.C &&
                base_icon->fields.Guid->fields.D == icon->fields.Guid->fields.D)
                return base_icon->fields.Icon;
        }

        return app::WorldMapIconType__Enum_Keystone;
    }

    app::WorldMapIconType__Enum get_base_icon(app::RuntimeWorldMapIcon* icon, int group_id, int state_id)
    {
        auto base_icons = icon->fields.Area->fields.Area->fields.Icons;
        for (auto i = 0; i < base_icons->fields._size; ++i)
        {
            auto base_icon = base_icons->fields._items->vector[i];
            if (base_icon->fields.State != nullptr &&
                base_icon->fields.State->fields._.m_id->fields.m_id == state_id &&
                base_icon->fields.State->fields.Group->fields._.m_id->fields.m_id == group_id)
                return base_icon->fields.Icon;
        }

        return app::WorldMapIconType__Enum_Keystone;
    }

    // For some stupid reason they set icons to WorldMapIconType__Enum_Invisible when a pickup is picked up...
    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, void, Show, (app::RuntimeWorldMapIcon* this_ptr)) {
        if (this_ptr->fields.Icon == app::WorldMapIconType__Enum_Invisible)
            this_ptr->fields.Icon = get_base_icon(this_ptr);

        RuntimeWorldMapIcon::Show(this_ptr);

        if (this_ptr->fields.m_areaMapIcon != nullptr)
        {
            auto it = spoiler_states.find(stingify_guid(this_ptr->fields.Guid));
            if (it != spoiler_states.end())
            {
                if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
                {
                    wchar_t buffer[128] = { 0 };
                    csharp_bridge::filter_icon_text(reinterpret_cast<void*>(buffer), 127 * sizeof(wchar_t), it->second.group_id, it->second.state_id);
                    AreaMapIcon::SetMessageProvider(this_ptr->fields.m_areaMapIcon, create_message_provider(il2cpp::string_new(buffer)));
                    if (!it->second.has_spoiler_icon)
                    {
                        auto icon_enum = csharp_bridge::filter_icon_type(it->second.group_id, it->second.state_id);
                        il2cpp::invoke(this_ptr, "SetIcon", &icon_enum);
                        it->second.has_spoiler_icon = true;
                    }
                }
                else if (it->second.has_spoiler_icon)
                {
                    auto icon_enum = get_base_icon(this_ptr, it->second.group_id, it->second.state_id);
                    il2cpp::invoke(this_ptr, "SetIcon", &icon_enum);
                    it->second.has_spoiler_icon = false;
                }
            }
        }
    }

    uint32_t create_icon(app::WorldMapIconType__Enum type, float x, float y, app::SerializedBooleanUberState* collected = nullptr, app::ConditionUberState* condition = nullptr)
    {
        auto icon_guid = create_guid();
        auto icon = il2cpp::create_object<app::GameWorldArea_WorldMapIcon>("", "GameWorldArea", "WorldMapIcon");
        icon->fields.SpecialState = nullptr;
        icon->fields.Condition = condition;
        icon->fields.State = collected;
        icon->fields.Position = app::Vector2{ x, y };
        icon->fields.IsSecret = false;
        icon->fields.Icon = type;
        icon->fields.Guid = icon_guid;
        return il2cpp::gchandle_new(icon, false);
    }

    std::unordered_map<app::GameWorldAreaID__Enum, std::vector<uint32_t>> extra_icons;
    bool initialized = false;
    void initialize()
    {
        extra_icons[app::GameWorldAreaID__Enum_KwoloksHollow] = {
            create_icon(app::WorldMapIconType__Enum_Keystone, -461.027069f, -4195.8754808f, uber_states::get_uber_state<app::SerializedBooleanUberState>(21786, 27433)),
            create_icon(app::WorldMapIconType__Enum_Keystone, -393.719452f, -4188.882813f, uber_states::get_uber_state<app::SerializedBooleanUberState>(21786, 37225)),
            create_icon(app::WorldMapIconType__Enum_EnergyFragment, -421.697601f, -4273.036133f, uber_states::get_uber_state<app::SerializedBooleanUberState>(21786, 10295)),
            create_icon(app::WorldMapIconType__Enum_AbilityPedestal, -457.110748f, -4260.f,
                uber_states::get_uber_state<app::SerializedBooleanUberState>(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Bow)),
        };

        extra_icons[app::GameWorldAreaID__Enum_InkwaterMarsh] = {
            create_icon(app::WorldMapIconType__Enum_AbilityPedestal, -296.395905f, -4480.f,
                uber_states::get_uber_state<app::SerializedBooleanUberState>(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Sword)),
        };

        extra_icons[app::GameWorldAreaID__Enum_BaursReach] = {
            create_icon(app::WorldMapIconType__Enum_Experience, 68.761978f, -3730.634521f,
                uber_states::get_uber_state<app::SerializedBooleanUberState>(28895, 25522)),
        };

        extra_icons[app::GameWorldAreaID__Enum_SilentWoodland] = {
            create_icon(app::WorldMapIconType__Enum_Keystone, 907.865112f, -4121.716309f,
                uber_states::get_uber_state<app::SerializedBooleanUberState>(58674, 19769)),
        };

        initialized = true;
    }
    
    void resolve_icons(app::RuntimeGameWorldArea* area)
    {
        for (auto i = 0; i < area->fields.Icons->fields._size; ++i)
        {
            auto item = area->fields.Icons->fields._items->vector[i];
            if (item->fields.Icon == app::WorldMapIconType__Enum_AbilityPedestal)
            {
                std::string key = format(
                    "%08x, %08x, %08x, %08x",
                    item->fields.Guid->fields.A,
                    item->fields.Guid->fields.B,
                    item->fields.Guid->fields.C,
                    item->fields.Guid->fields.D
                );

                auto it = TREE_OVERRIDES.find(key);
                if (it != TREE_OVERRIDES.end())
                {
                    item->fields.Condition = nullptr;
                    item->fields.IsCollectedState = uber_states::get_uber_state<app::SerializedBooleanUberState>(it->second.first, it->second.second);
                }
                else
                {
                    // This should no longer be called as we have overridden every single tree icon.
                    dev::console_send(format(
                        "tree icon { guid: [%0x, %0x, %0x, %0x], pos: [%d, %d] }",
                        item->fields.Guid->fields.A,
                        item->fields.Guid->fields.B,
                        item->fields.Guid->fields.C,
                        item->fields.Guid->fields.D,
                        item->fields.Position.x,
                        item->fields.Position.y
                    ));
                }
            }
        }

        auto extras = extra_icons.find(area->fields.Area->fields.WorldMapAreaUniqueID);
        if (extras != extra_icons.end())
        {
            for (auto icon_base_handle : extras->second)
            {
                auto icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");
                auto icon_base = reinterpret_cast<app::GameWorldArea_WorldMapIcon*>(il2cpp::gchandle_target(icon_base_handle));
                RuntimeWorldMapIcon::ctor(icon, icon_base, area);
                il2cpp::invoke(area->fields.Icons, "Add", icon);
                RuntimeWorldMapIcon::Show_intercept(icon);
            }
        }

        auto spoiler_state = uber_states::get_uber_state<app::SerializedBooleanUberState>(uber_states::constants::MAP_FILTER_GROUP_ID, 70);
        auto old_size = area->fields.Icons->fields._size;
        for (auto i = 0; i < old_size; ++i)
        {
            auto item = area->fields.Icons->fields._items->vector[i];
            if (item->fields.IsCollectedState == nullptr)
                continue;

            auto icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");

            auto group_id = item->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id;
            auto state_id = item->fields.IsCollectedState->fields._.m_id->fields.m_id;

            // TODO: get icon.
            if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
                icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(group_id, state_id));
            else
                icon->fields.Icon = item->fields.Icon;

            icon->fields.Guid = create_guid();
            icon->fields.Position.x = item->fields.Position.x;
            icon->fields.Position.y = item->fields.Position.y;
            icon->fields.Area = area;
            icon->fields.IsSecret = false;
            icon->fields.IsCollectedState = spoiler_state;
            icon->fields.Condition = nullptr;
            icon->fields.SpecialState = nullptr;

            auto& state = spoiler_states[stingify_guid(icon->fields.Guid)];
            state.group_id = group_id;
            state.state_id = state_id;
            state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));

            il2cpp::invoke(area->fields.Icons, "Add", icon);
            RuntimeWorldMapIcon::Show_intercept(icon);
        }
    }

    NAMED_IL2CPP_INTERCEPT(, RuntimeGameWorldArea, void, .ctor, ctor, (app::RuntimeGameWorldArea* this_ptr, app::GameWorldArea* area)) {
        RuntimeGameWorldArea::ctor(this_ptr, area);
        if (!initialized)
            initialize();

        resolve_icons(this_ptr);
    }

    IL2CPP_INTERCEPT(, GameWorld, void, OnGameReset, (app::GameWorld* this_ptr)) {
        if (!initialized)
            initialize();

        GameWorld::OnGameReset(this_ptr);
        for (auto i = 0; i < this_ptr->fields.RuntimeAreas->fields._size; ++i)
        {
            auto area = this_ptr->fields.RuntimeAreas->fields._items->vector[i];
            resolve_icons(area);
        }
    }

    STATIC_IL2CPP_BINDING(, AreaMapIconManager, bool, IsIconShownByFilter, (app::WorldMapIconType__Enum icon, app::AreaMapIconFilter__Enum filter));
    IL2CPP_BINDING(, RuntimeWorldMapIcon, void, Hide, (app::RuntimeWorldMapIcon* this_ptr));
    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Inequality, (app::Object* o1, app::Object* o2));
    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Implicit, (app::Object* this_ptr));

    bool shown_by_filter(app::AreaMapIconManager* manager, app::RuntimeWorldMapIcon* icon)
    {
        auto filter = static_cast<NewFilters>(manager->fields.Filter);
        // If we are in original filters then use the original function.
        if (filter <= NewFilters::Collectibles)
            return AreaMapIconManager::IsIconShownByFilter(icon->fields.Icon, manager->fields.Filter);
        else if (filter == NewFilters::Spoilers)
        {
            if (icon->fields.IsCollectedState == nullptr)
                return false;

            return icon->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id == uber_states::constants::MAP_FILTER_GROUP_ID &&
                icon->fields.IsCollectedState->fields._.m_id->fields.m_id == 70;
        }
        else if (filter == NewFilters::InLogic)
        {
            if (icon->fields.IsCollectedState == nullptr)
                return false;
            
            auto is_spoiler = icon->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id == uber_states::constants::MAP_FILTER_GROUP_ID &&
                icon->fields.IsCollectedState->fields._.m_id->fields.m_id == 70;

            if (is_spoiler)
            {
                auto it = spoiler_states.find(stingify_guid(icon->fields.Guid));
                if (it != spoiler_states.end())
                {
                    auto value = uber_states::get_uber_state_value(it->second.group_id, it->second.state_id);
                    // Hide pickups that have been collected.
                    if (value < 1 && csharp_bridge::filter_icon_show(it->second.group_id, it->second.state_id))
                        return true;
                }
            }
        }

        return false;
    }

    IL2CPP_INTERCEPT(, AreaMapIconManager, void, ShowAreaIcons, (app::AreaMapIconManager* this_ptr)) {
        switch (this_ptr->fields.Filter)
        {
        case NewFilters::Spoilers:
        case NewFilters::InLogic:
            uber_states::set_uber_state_value(uber_states::constants::MAP_FILTER_GROUP_ID, 70, 0);
            break;
        default:
            uber_states::set_uber_state_value(uber_states::constants::MAP_FILTER_GROUP_ID, 70, 1);
            break;
        }

        // Start ShowAreaIcons function.
        auto world = il2cpp::get_class<app::GameWorld__Class>("", "GameWorld")->static_fields->Instance;
        for (auto i = 0; i < world->fields.RuntimeAreas->fields._size; ++i)
        {
            auto runtime_area = world->fields.RuntimeAreas->fields._items->vector[i];
            for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j)
            {
                auto icon = runtime_area->fields.Icons->fields._items->vector[j];
                RuntimeWorldMapIcon::Hide(icon);
            }

            if (Object::op_Inequality(reinterpret_cast<app::Object*>(runtime_area->fields.Area), nullptr))
            {
                if (Object::op_Implicit(reinterpret_cast<app::Object*>(runtime_area->fields.Area->fields.VisitableCondition)) &&
                    !il2cpp::invoke<app::Boolean__Boxed>(runtime_area->fields.Area->fields.VisitableCondition, "Validate", nullptr)->fields)
                    continue;

                for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j)
                {
                    auto icon = runtime_area->fields.Icons->fields._items->vector[j];

                    // Difference in original function.
                    if (shown_by_filter(this_ptr, icon))
                        RuntimeWorldMapIcon::Show_intercept(icon);
                    else
                        RuntimeWorldMapIcon::Hide(icon);
                }
            }
        }
    }

    app::AreaMapIconFilterFooterLabel create_filter(NewFilters filter, std::string message)
    {
        app::AreaMapIconFilterFooterLabel label;
        label.Filter = static_cast<app::AreaMapIconFilter__Enum>(filter);
        label.Footer = reinterpret_cast<app::MessageProvider*>(create_message_provider(il2cpp::string_new("Filter: " + message)));
        return label;
    }

    bool filter_labels_initialized = false;
    void initialize_filter_labels(app::AreaMapIconManager* this_ptr)
    {
        if (il2cpp::is_assignable(this_ptr, "", "AreaMapIconManager") && this_ptr->fields.Labels->max_length < static_cast<int>(NewFilters::COUNT)) {
            auto arr = reinterpret_cast<app::AreaMapIconFilterFooterLabel__Array*>(il2cpp::untyped::array_new(
                il2cpp::get_class("", "AreaMapIconFilterFooterLabel"), static_cast<int>(NewFilters::COUNT)));

            for (auto i = 0; i < static_cast<int>(app::AreaMapIconFilter__Enum_COUNT); ++i)
                arr->vector[i] = this_ptr->fields.Labels->vector[i];

            // Add extra labels.
            arr->vector[static_cast<int>(NewFilters::InLogic)]  = create_filter(NewFilters::InLogic, "In Logic");
            arr->vector[static_cast<int>(NewFilters::Spoilers)] = create_filter(NewFilters::Spoilers, "Spoilers");

            this_ptr->fields.Labels = arr;
        }

        filter_labels_initialized = true;
    }

    bool ignore_filter_input = false;
    IL2CPP_INTERCEPT(, AreaMapUI, void, set_IconFilter, (app::AreaMapUI* this_ptr, app::AreaMapIconFilter__Enum value)) {
        if (!ignore_filter_input)
            AreaMapUI::set_IconFilter(this_ptr, value);
    }

    void cycle_filter(app::AreaMapUI* map)
    {
        auto icon_manager = map->fields._IconManager_k__BackingField;
        if (!filter_labels_initialized)
            initialize_filter_labels(icon_manager);
        auto count = static_cast<int32_t>(NewFilters::COUNT);
        auto prev = static_cast<int32_t>(icon_manager->fields.Filter);
        auto filter = (prev + 1) % count;
        while(!csharp_bridge::filter_enabled(filter) && filter != prev)
            filter = (filter + 1) % count;

        AreaMapUI::set_IconFilter(map, static_cast<app::AreaMapIconFilter__Enum>(filter));
    }

    IL2CPP_BINDING(, GameMapUI, void, UpdateFilterText, (app::GameMapUI* this_ptr));
    IL2CPP_BINDING(, GameMapUI, void, UpdateQuests, (app::GameMapUI* this_ptr));
    IL2CPP_INTERCEPT(, GameMapUI, void, NormalInput, (app::GameMapUI* this_ptr)) {
        ignore_filter_input = true;
        GameMapUI::NormalInput(this_ptr);
        ignore_filter_input = false;

        auto input_cmd = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd");
        if (input_cmd->static_fields->MapFilter->fields.IsPressed && !input_cmd->static_fields->MapFilter->fields.WasPressed)
        {
            cycle_filter(this_ptr->fields.m_areaMap);
            GameMapUI::UpdateFilterText(this_ptr);
            GameMapUI::UpdateQuests(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(, AreaMapUI, void, CycleFilter, (app::AreaMapUI* this_ptr)) {
        cycle_filter(this_ptr);
    }
}

INJECT_C_DLLEXPORT void refresh_inlogic_filter() {
    auto game_map_ui = il2cpp::get_class<app::GameMapUI__Class>("", "GameMapUI")->static_fields->Instance;
    auto icon_manager = game_map_ui->fields.m_areaMap->fields._IconManager_k__BackingField;
    if (static_cast<NewFilters>(icon_manager->fields.Filter) == NewFilters::InLogic)
        AreaMapUI::set_IconFilter(game_map_ui->fields.m_areaMap, icon_manager->fields.Filter);
}
