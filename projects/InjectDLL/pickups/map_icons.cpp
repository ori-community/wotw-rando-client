#include <uber_states/uber_state_manager.h>

#include <csharp_bridge.h>

#include <Common/ext.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <atomic>
#include <unordered_map>
#include <unordered_set>
#include <random>

using namespace modloader;

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

    struct ExtraState
    {
        bool valid;
        int group;
        int state;
        float value;
    };

    struct ExtraIcon
    {
        app::WorldMapIconType__Enum icon;
        float x;
        float y;
        bool can_teleport;
        bool create_spoiler;
        
        ExtraState collected;
        ExtraState custom;
    };

    struct SpoilerState
    {
        app::WorldMapIconType__Enum icon;
        int group_id;
        int state_id;
        float value;
        bool has_spoiler_icon;
    };

    struct ExtraIconData
    {
        ExtraIcon* parent;
    };

    std::unordered_map<std::string, SpoilerState> spoiler_states;
    std::unordered_map<app::GameWorldAreaID__Enum, std::vector<ExtraIcon>> extra_icons;
    std::unordered_map<std::string, ExtraIcon*> extra_icons_map;
    std::unordered_map<std::string, ExtraIcon*> extra_states;
    bool initialized = false;
    int current_filter = 0;
    std::string stringify_guid(app::MoonGuid *guid)
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

    NAMED_IL2CPP_BINDING(, RuntimeWorldMapIcon, void, .ctor, ctor, (app::RuntimeWorldMapIcon* this_ptr, app::GameWorldArea_WorldMapIcon* icon, app::RuntimeGameWorldArea* area));
    IL2CPP_BINDING(, AreaMapIcon, void, SetMessageProvider, (app::AreaMapIcon* this_ptr, app::MessageProvider* provider));

    app::MessageProvider* create_message_provider(Il2CppString* message)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
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
        auto guid = stringify_guid(icon->fields.Guid);

        // Extra icons and trees.
        {
            auto it = spoiler_states.find(guid);
            if (it != spoiler_states.end())
                return it->second.icon;
        }

        {
            auto it = extra_icons_map.find(guid);
            if (it != extra_icons_map.end())
                return it->second->icon;
        }

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
            auto it = spoiler_states.find(stringify_guid(this_ptr->fields.Guid));
            if (it != spoiler_states.end())
            {
                wchar_t buffer[128] = { 0 };
                csharp_bridge::filter_icon_text(reinterpret_cast<void*>(buffer), 127 * sizeof(wchar_t), it->second.group_id, it->second.state_id, static_cast<int>(it->second.value), current_filter);
                AreaMapIcon::SetMessageProvider(this_ptr->fields.m_areaMapIcon, create_message_provider(il2cpp::string_new(buffer)));
                const auto spoiler_active = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));
                if (spoiler_active ^ it->second.has_spoiler_icon)
                {
                    auto icon_enum = spoiler_active
                        ? csharp_bridge::filter_icon_type(it->second.group_id, it->second.state_id, static_cast<int>(it->second.value))
                        : get_base_icon(this_ptr, it->second.group_id, it->second.state_id);
                    il2cpp::invoke(this_ptr, "SetIcon", &icon_enum);
                    it->second.has_spoiler_icon = spoiler_active;
                }
            }
        }
    }

    

    void initialize()
    {
        extra_icons[app::GameWorldAreaID__Enum_InkwaterMarsh] = {
            { app::WorldMapIconType__Enum_AbilityPedestal, -296.395905f, -4480.f, false, true,
                { true, uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Sword, -1.f }, {} },
            
            { app::WorldMapIconType__Enum_QuestItem, -695, -4417, false, true,
                {},  { true, 48248, 51645, 3.f } }, // MarshSpawn.TheMissingKey
            { app::WorldMapIconType__Enum_QuestItem, -932, -4494, false, true,
                {},  { true, 48248, 18458, 4.f } }, // MarshSpawn.IntoTheBurrows
            { app::WorldMapIconType__Enum_QuestItem, -391, -4414, false, true,
                {},  { true, 14019, 15983, 3.f } }, // MarshSpawn.ALittleBraver

            { app::WorldMapIconType__Enum_Keystone, -461.027069f, -4195.8754808f, false, true,
                { true, 21786, 27433, -1.f }, {} },
            { app::WorldMapIconType__Enum_Keystone, -393.719452f, -4188.882813f, false, true,
                { true, 21786, 37225, -1.f }, {} },
            { app::WorldMapIconType__Enum_EnergyFragment, -421.697601f, -4273.036133f, false, true,
                { true, 21786, 10295, -1.f }, {} },
            { app::WorldMapIconType__Enum_AbilityPedestal, -457.110748f, -4260.f, false, true,
                { true, uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Bow, -1.f  }, {} },
        };


        extra_icons[app::GameWorldAreaID__Enum_KwoloksHollow] = {
            { app::WorldMapIconType__Enum_QuestItem, -110, -4220, false, true,
                {},  { true, 14019, 26318, 1.f } }, // EastHollow.HandToHandMap
            { app::WorldMapIconType__Enum_QuestItem, 240, -4207, false, true,
                {},  { true, 14019, 50597, 4.f } }, // EastHollow.KwoloksWisdom
        };

        extra_icons[app::GameWorldAreaID__Enum_WellspringGlades] = {
            { app::WorldMapIconType__Enum_QuestItem, -282, -4155, false, true,
                {},  { true, 14019, 26318, 2.f } }, // GladesTown.HandToHandPouch
            { app::WorldMapIconType__Enum_QuestItem, -426, -4155, false, true,
                {},  { true, 14019, 26318, 6.f } }, // GladesTown.HandToHandLantern
            { app::WorldMapIconType__Enum_QuestItem, -410, -4142, false, true,
                {},  { true, 14019, 26318, 9.f } }, // GladesTown.HandToHandCanteen
            { app::WorldMapIconType__Enum_QuestItem, -110, -4090, false, true,
                {},  { true, 14019, 26318, 4.f } }, // GladesTown.HandToHandSoup
            { app::WorldMapIconType__Enum_QuestItem, -385, -4161, false, true,
                {},  { true, 14019, 27804, 2.f } }, // GladesTown.FamilyReunionKey
            { app::WorldMapIconType__Enum_QuestItem, -366, -4185, false, true,
                {},  { true, 14019, 2782, -1.f } }, // GladesTown.AcornQI
            { app::WorldMapIconType__Enum_QuestItem, -358, -4185, false, true,
                {},  { true, 14019, 33776, 3.f } }, // GladesTown.IntoTheDarkness
            { app::WorldMapIconType__Enum_QuestItem, 240, -4207, false, true,
                {},  { true, 14019, 44578, 2.f } }, // GladesTown.RebuildTheGlades
            { app::WorldMapIconType__Enum_QuestItem, -408, -4162, false, true,
                {},  { true, 23987, 14832, -1.f } }, // GladesTown.ADiamondInTheRough
            { app::WorldMapIconType__Enum_QuestItem, 240, -4207, false, true,
                {},  { true, 14019, 26394, 2.f } }, // GladesTown.RegrowTheGlades
        };

        extra_icons[app::GameWorldAreaID__Enum_WaterMill] = {
            { app::WorldMapIconType__Enum_QuestItem, -811, -3973, false, true,
                {},  { true, 14019, 20667, 3.f } }, // OuterWellspring.TheLostCompass
            { app::WorldMapIconType__Enum_QuestItem, -1168, -3733, false, true,
                {},  { true, 14019, 26318, 3.f } }, // InnerWellspring.HandToHandHerbs
            { app::WorldMapIconType__Enum_QuestItem, -1159, -3635, false, true,
                {},  { true, 37858, 12379, -1.f } }, // InnerWellspring.WaterEscape
        };

        extra_icons[app::GameWorldAreaID__Enum_LumaPools] = {
            { app::WorldMapIconType__Enum_QuestItem, -1173, -4154, false, true,
                {},  { true, 14019, 53103, -1.f } }, // EastPools.KwoloksWisdomAmulet
            { app::WorldMapIconType__Enum_QuestItem, -1284, -4126, false, true,
                {},  { true, 14019, 26318, 8.f } }, // EastPools.HandToHandSpyglass
            { app::WorldMapIconType__Enum_QuestEnd, -1928, -4066, false, true,
                {},  { true, 945, 49747, -1.f } }, // WestPools.ForestsStrength
        };

        extra_icons[app::GameWorldAreaID__Enum_SilentWoodland] = {
            { app::WorldMapIconType__Enum_Keystone, 907.865112f, -4121.716309f, false, true,
                { true, 58674, 19769, -1.f }, {} },
            { app::WorldMapIconType__Enum_QuestItem, 513, -4158, false, true,
                {},  { true, 14019, 59708, 1.f } }, // WoodsEntry.LastTreeBranch
            { app::WorldMapIconType__Enum_QuestItem, 469, -4180, false, true,
                {},  { true, 14019, 57399, -1.f } }, // WoodsEntry.DollQI
            { app::WorldMapIconType__Enum_QuestItem, 513, -4159, false, true,
                {},  { true, 14019, 7470, -1.f } }, // WoodsEntry.TreeSeed
        };

        extra_icons[app::GameWorldAreaID__Enum_BaursReach] = {
            { app::WorldMapIconType__Enum_Experience, 68.761978f, -3730.634521f, false, true,
                { true, 28895, 46404, -1.f }, {} }, // UpperReach.RevisitEX

            { app::WorldMapIconType__Enum_QuestItem, -244, -3989, false, true,
                {},  { true, 14019, 26318, 5.f } }, // LowerReach.HandToHandHat
            { app::WorldMapIconType__Enum_QuestEnd, -31, -3711, false, true,
                {},  { true, 28895, 25522, -1.f } }, // UpperReach.ForestsMemory
        };

        extra_icons[app::GameWorldAreaID__Enum_MouldwoodDepths] = {
            { app::WorldMapIconType__Enum_QuestItem, 317, -4508, false, true,
                {},  { true, 14019, 26318, 7.f } }, // LowerDepths.HandToHandSilk
            { app::WorldMapIconType__Enum_QuestEnd, 687, -4386, false, true,
                {},  { true, 18793, 63291, -1.f } }, // UpperDepths.ForestsEyes
        };

        extra_icons[app::GameWorldAreaID__Enum_WindsweptWastes] = {
            { app::WorldMapIconType__Enum_QuestItem, 1641, -4003, false, true,
                {},  { true, 14019, 58342, -1.f } }, // LowerWastes.EerieGem
            { app::WorldMapIconType__Enum_QuestItem, 1685, -3923, false, true,
                {},  { true, 14019, 26318, 10.f } }, // LowerWastes.HandToHandMapstone
        };

        extra_icons[app::GameWorldAreaID__Enum_WindtornRuins] = {
            { app::WorldMapIconType__Enum_QuestItem, 1969, -4024, false, true,
                {},  { true, 14019, 26318, 11.f } }, // WindtornRuins.HandToHandComplete
            { app::WorldMapIconType__Enum_QuestEnd, 2056, -3568, false, true,
                {},  { true, 10289, 22102, -1.f } }, // UpperDepths.WindtornRuins.Seir
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
                    console::console_send(format(
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

        for (auto& item : extra_icons[area->fields.Area->fields.WorldMapAreaUniqueID])
        {
            auto icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");
            icon->fields.Guid = create_guid();
            auto guid = stringify_guid(icon->fields.Guid);

            extra_icons_map[guid] = &item;

            // Custom spoiler state.
            icon->fields.Icon = item.icon;
            if (item.collected.valid && item.collected.group == uber_states::constants::MAP_FILTER_GROUP_ID && item.collected.state == 70)
            {
                if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
                    icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(item.custom.group, item.custom.state, static_cast<int>(item.custom.value)));

                auto& state = spoiler_states[guid];
                state.group_id = item.custom.group;
                state.state_id = item.custom.state;
                state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));
            }
            else if (item.custom.valid)
                extra_states[stringify_guid(icon->fields.Guid)] = &item;

            icon->fields.Position.x = item.x;
            icon->fields.Position.y = item.y;
            icon->fields.Area = area;
            icon->fields.IsSecret = false;
            icon->fields.IsCollectedState = item.collected.valid ? uber_states::get_uber_state<app::SerializedBooleanUberState>(item.collected.group, item.collected.state) : nullptr;
            icon->fields.Condition = nullptr;
            icon->fields.SpecialState = nullptr;

            il2cpp::invoke(area->fields.Icons, "Add", icon);
            RuntimeWorldMapIcon::Show_intercept(icon);
        }

        auto spoiler_state = uber_states::get_uber_state<app::SerializedBooleanUberState>(uber_states::constants::MAP_FILTER_GROUP_ID, 70);
        auto old_size = area->fields.Icons->fields._size;
        for (auto i = 0; i < old_size; ++i)
        {
            int group_id = 0;
            int state_id = 0;
            float value = -1.f;

            auto item = area->fields.Icons->fields._items->vector[i];
            auto it = extra_icons_map.find(stringify_guid(item->fields.Guid));
            if (it != extra_icons_map.end())
            {
                if (!it->second->create_spoiler)
                    continue;

                if (it->second->custom.valid)
                {
                    group_id = it->second->custom.group;
                    state_id = it->second->custom.state;
                    value = it->second->custom.value;
                }
                else
                {
                    group_id = it->second->collected.group;
                    state_id = it->second->collected.state;
                    value = it->second->collected.value;
                }
            }
            else if (item->fields.IsCollectedState != nullptr)
            {
                group_id = item->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id;
                state_id = item->fields.IsCollectedState->fields._.m_id->fields.m_id;
            }
            else
                continue;

            auto icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");

            // TODO: get icon.
            if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
                icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(group_id, state_id, static_cast<int>(value)));
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

            auto& state = spoiler_states[stringify_guid(icon->fields.Guid)];
            state.icon = item->fields.Icon;
            state.group_id = group_id;
            state.state_id = state_id;
            state.value = value;
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
    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, bool, CanBeTeleportedTo, (app::RuntimeWorldMapIcon* this_ptr)) {
        if (csharp_bridge::tp_to_any_pickup())
            return true;

        auto it = extra_icons_map.find(stringify_guid(this_ptr->fields.Guid));
        if (it != extra_icons_map.end() && it->second->can_teleport)
            return true;

        return CanBeTeleportedTo(this_ptr);
    }
    bool shown_by_filter(app::AreaMapIconManager* manager, app::RuntimeWorldMapIcon* icon)
    {
        // Always show warps check
        if (icon->fields.Icon == app::WorldMapIconType__Enum_SavePedestal && RuntimeWorldMapIcon::CanBeTeleportedTo(icon) && csharp_bridge::check_ini("AlwaysShowWarps"))
            // the icon filter here might be limiting but without it, the tpcheat spams every filter so meh
            return true;

        const auto filter = static_cast<NewFilters>(manager->fields.Filter);
        // If we are in original filters then use the original function.
        if (filter <= NewFilters::Collectibles)
        {
            const auto is_spoiler = icon->fields.IsCollectedState != nullptr &&
                icon->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id == uber_states::constants::MAP_FILTER_GROUP_ID &&
                icon->fields.IsCollectedState->fields._.m_id->fields.m_id == 70;

            if (is_spoiler)
                return false;

            // if our custom state is bigger or equal to expected value dont show.
            const auto it = extra_states.find(stringify_guid(icon->fields.Guid));
            if (it != extra_states.end())
            {
                const auto value = it->second->custom.value < 0 ? 1.f : it->second->custom.value;
                if (uber_states::get_uber_state_value(it->second->custom.group, it->second->custom.state) >= value)
                    return false;
            }

            return AreaMapIconManager::IsIconShownByFilter(icon->fields.Icon, manager->fields.Filter);
        }
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
            
            const auto is_spoiler = icon->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id == uber_states::constants::MAP_FILTER_GROUP_ID &&
                icon->fields.IsCollectedState->fields._.m_id->fields.m_id == 70;

            if (is_spoiler)
            {
                auto it = spoiler_states.find(stringify_guid(icon->fields.Guid));
                if (it != spoiler_states.end())
                {
                    const auto value = uber_states::get_uber_state_value(it->second.group_id, it->second.state_id);
                    // Hide pickups that have been collected.
                    const auto compare = it->second.value < 0 ? 1.f : it->second.value;
                    if (value < compare && csharp_bridge::filter_icon_show(it->second.group_id, it->second.state_id, static_cast<int>(it->second.value)))
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

    void check_and_initialize_filter_labels(app::AreaMapIconManager* this_ptr)
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
    }

    bool ignore_filter_input = false;
    IL2CPP_INTERCEPT(, AreaMapUI, void, set_IconFilter, (app::AreaMapUI* this_ptr, app::AreaMapIconFilter__Enum value)) {
        if (!ignore_filter_input)
            AreaMapUI::set_IconFilter(this_ptr, value);
    }

    void cycle_filter(app::AreaMapUI* map)
    {
        auto icon_manager = map->fields._IconManager_k__BackingField;
        check_and_initialize_filter_labels(icon_manager);
        auto count = static_cast<int32_t>(NewFilters::COUNT);
        auto prev = static_cast<int32_t>(icon_manager->fields.Filter);
        current_filter = (prev + 1) % count;
        while(!csharp_bridge::filter_enabled(current_filter) && current_filter != prev)
            current_filter = (current_filter + 1) % count;

        AreaMapUI::set_IconFilter(map, static_cast<app::AreaMapIconFilter__Enum>(current_filter));
    }

    std::atomic<bool> refresh = false;
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

        if (refresh)
        {
            auto icon_manager = this_ptr->fields.m_areaMap->fields._IconManager_k__BackingField;
            if (static_cast<NewFilters>(icon_manager->fields.Filter) == NewFilters::InLogic)
                AreaMapUI::set_IconFilter(this_ptr->fields.m_areaMap, icon_manager->fields.Filter);

            refresh = false;
        }
    }

    IL2CPP_INTERCEPT(, AreaMapUI, void, CycleFilter, (app::AreaMapUI* this_ptr)) {
        cycle_filter(this_ptr);
    }

}

INJECT_C_DLLEXPORT void add_icon(app::GameWorldAreaID__Enum area, app::WorldMapIconType__Enum icon, float x, float y, int group_id, int state_id, bool allow_teleport)
{
    extra_icons[area].push_back({
        icon,
        x,
        y,
        allow_teleport,
        false,
        { true, group_id, state_id, 1.f },
        {}
    });
}

INJECT_C_DLLEXPORT void refresh_inlogic_filter() {
    refresh = true;
}
