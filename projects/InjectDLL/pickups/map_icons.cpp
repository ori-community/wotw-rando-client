#include <csharp_bridge.h>
#include <dll_main.h>
#include <dev/object_visualizer.h>
#include <system/multiplayer.h>
#include <uber_states/uber_state_manager.h>
#include <utils/messaging.h>
#include <utils/misc.h>
#include <utils/shaders.h>

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
        { "718c895b, 431b8c79, fdc0efa5, a0709f87", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Bow) },
        // Sword Tree has no icon in the base game, we add that manually
    };

    enum class ExtraIconCreation
    {
        Normal = 1,
        Spoiler = 2,
        SpoilerAndNormal = 3
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
        ExtraIconCreation creation;
        
        ExtraState collected;
        ExtraState custom;

        app::RuntimeWorldMapIcon* runtime_icon = nullptr;
        app::RuntimeWorldMapIcon* spoiler_icon = nullptr;
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

    constexpr int DOT_COUNT = 64;
    constexpr float DOT_TIMEOUT = 0.25f;
    constexpr float DOT_MIN_DISTANCE = 2.0f;
    struct PlayerMapInfo
    {
        struct Dot
        {
            app::GameObject* dot;
            app::Renderer* renderer;
        };

        int next_index;
        float time = 0.0f;
        app::Vector2 pos;
        app::RuntimeWorldMapIcon* icon;
        std::vector<Dot> dots;
        std::wstring name;
        bool shown;
    };

    bool map_visible = false;
    bool start_in_logic_filter = true;
    std::unordered_map<app::GameWorldAreaID__Enum, std::unordered_map<int, ExtraIcon>> header_icons;
    std::unordered_map<app::RuntimeWorldMapIcon*, std::wstring> player_map;
    std::unordered_map<std::wstring, PlayerMapInfo> player_icon_map;

    std::unordered_map<std::string, SpoilerState> spoiler_states;
    std::unordered_map<app::GameWorldAreaID__Enum, std::vector<ExtraIcon>> extra_icons;
    std::unordered_map<app::GameWorldAreaID__Enum, std::vector<ExtraIcon>> extra_spoiler_icons;
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

    bool should_create(ExtraIconCreation value, ExtraIconCreation expected)
    {
        const auto expected_value = static_cast<int32_t>(expected);
        return (static_cast<int32_t>(value) & expected_value) == expected_value;
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

    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    NAMED_IL2CPP_BINDING(, RuntimeWorldMapIcon, void, .ctor, ctor, (app::RuntimeWorldMapIcon* this_ptr, app::GameWorldArea_WorldMapIcon* icon, app::RuntimeGameWorldArea* area));
    IL2CPP_BINDING(, AreaMapIcon, void, SetMessageProvider, (app::AreaMapIcon* this_ptr, app::MessageProvider* provider));

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

        auto it = player_map.find(this_ptr);
        if (it != player_map.end())
        {
            auto& info = player_icon_map[it->second];
            info.shown = true;
            auto& name = info.name;
            AreaMapIcon::SetMessageProvider(this_ptr->fields.m_areaMapIcon,
                utils::create_message_provider(il2cpp::string_new(name.c_str())));

            auto player_info = multiplayer::get_player(it->second);
            auto color = player_info != nullptr ? player_info->color : app::Color{ 1.0f, 1.0f, 1.0f, 1.0f };
            if (il2cpp::unity::is_valid(info.icon->fields.IconGameObject))
            {
                utils::set_color(info.icon->fields.IconGameObject, color, true);
                for (auto& dot : info.dots)
                    GameObject::SetActive(dot.dot, false);
            }
        }
        else if (this_ptr->fields.m_areaMapIcon != nullptr)
        {
            auto it = spoiler_states.find(stringify_guid(this_ptr->fields.Guid));
            if (it != spoiler_states.end())
            {
                wchar_t buffer[128] = { 0 };
                csharp_bridge::filter_icon_text(reinterpret_cast<void*>(buffer), 127 * sizeof(wchar_t), it->second.group_id, it->second.state_id, static_cast<int>(it->second.value), current_filter);
                AreaMapIcon::SetMessageProvider(this_ptr->fields.m_areaMapIcon, utils::create_message_provider(il2cpp::string_new(buffer)));
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
            { app::WorldMapIconType__Enum_AbilityPedestal, -296.395905f, -4480.f, false, ExtraIconCreation::SpoilerAndNormal,
                { true, uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Sword, -1.f }, {} },
            
            { app::WorldMapIconType__Enum_QuestItem, -695, -4417, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 48248, 51645, 3.f } }, // MarshSpawn.TheMissingKey
            { app::WorldMapIconType__Enum_QuestItem, -932, -4494, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 48248, 18458, 4.f } }, // MarshSpawn.IntoTheBurrows
            { app::WorldMapIconType__Enum_QuestItem, -391, -4414, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 15983, 3.f } }, // MarshSpawn.ALittleBraver

            { app::WorldMapIconType__Enum_Keystone, -461.027069f, -4195.8754808f, false, ExtraIconCreation::SpoilerAndNormal,
                { true, 21786, 27433, -1.f }, {} },
            { app::WorldMapIconType__Enum_Keystone, -393.719452f, -4188.882813f, false, ExtraIconCreation::SpoilerAndNormal,
                { true, 21786, 37225, -1.f }, {} },
            //{ app::WorldMapIconType__Enum_EnergyFragment, -421.697601f, -4273.036133f, false, true,
            //    { true, 21786, 10295, -1.f }, {} },
            { app::WorldMapIconType__Enum_Mapmaker, -589.f, -4348.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 18767, -1.f  }, {} },
            { app::WorldMapIconType__Enum_Weaponmaster, -597.f, -4293.f, false, ExtraIconCreation::Spoiler,
                { true, uber_states::constants::OPHER_WEAPON_GROUP_ID, 20000, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, -614.200012f, -4317.200195f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 45951, 2.f }, {} }, // MarshPastOpher.SpiritTrial
        };


        extra_icons[app::GameWorldAreaID__Enum_KwoloksHollow] = {
            { app::WorldMapIconType__Enum_QuestItem, -110, -4220, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 1.f } }, // EastHollow.HandToHandMap
            { app::WorldMapIconType__Enum_QuestItem, 240, -4207, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 50597, 4.f } }, // EastHollow.KwoloksWisdom,
            { app::WorldMapIconType__Enum_Mapmaker, -146.f, -4321.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 3638, -1.f  }, {} },
            { app::WorldMapIconType__Enum_Shardtrader, -281.f, -4239.f, false, ExtraIconCreation::Spoiler,
                { true, uber_states::constants::TWILLEN_SHARD_GROUP_ID, 20000, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, -115.000000f, -4257.200195f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 25545, 2.f }, {} }, // WestHollow.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_WellspringGlades] = {
            { app::WorldMapIconType__Enum_QuestItem, -282, -4155, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 2.f } }, // GladesTown.HandToHandPouch
            { app::WorldMapIconType__Enum_QuestItem, -426, -4155, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 6.f } }, // GladesTown.HandToHandLantern
            { app::WorldMapIconType__Enum_QuestItem, -410, -4142, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 9.f } }, // GladesTown.HandToHandCanteen
            { app::WorldMapIconType__Enum_QuestItem, -110, -4090, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 4.f } }, // GladesTown.HandToHandSoup
            { app::WorldMapIconType__Enum_QuestItem, -385, -4161, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 27804, 2.f } }, // GladesTown.FamilyReunionKey
            { app::WorldMapIconType__Enum_QuestItem, -366, -4185, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 2782, -1.f } }, // GladesTown.AcornQI
            { app::WorldMapIconType__Enum_QuestItem, -358, -4185, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 33776, 3.f } }, // GladesTown.IntoTheDarkness
            { app::WorldMapIconType__Enum_QuestItem, -320, -4152, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 44578, 2.f } }, // GladesTown.RebuildTheGlades
            { app::WorldMapIconType__Enum_QuestItem, -408, -4162, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 23987, 14832, -1.f } }, // GladesTown.ADiamondInTheRough
            { app::WorldMapIconType__Enum_QuestItem, -170, -4138, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26394, 2.f } }, // GladesTown.RegrowTheGlades
            { app::WorldMapIconType__Enum_Weaponmaster, -204.f, -4147.f, false, ExtraIconCreation::Spoiler,
                { true, uber_states::constants::OPHER_WEAPON_GROUP_ID, 20000, -1.f  }, {} },
            { app::WorldMapIconType__Enum_Mapmaker, -209.f, -4163.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 20000, -1.f  }, {} },
            { app::WorldMapIconType__Enum_Shardtrader, -410.f, -4162.f, false, ExtraIconCreation::Spoiler,
                { true, uber_states::constants::TWILLEN_SHARD_GROUP_ID, 20000, -1.f  }, {} },
        };

        extra_icons[app::GameWorldAreaID__Enum_WaterMill] = {
            { app::WorldMapIconType__Enum_QuestItem, -811, -3973, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 20667, 3.f } }, // OuterWellspring.TheLostCompass
            { app::WorldMapIconType__Enum_QuestItem, -1168, -3733, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 3.f } }, // InnerWellspring.HandToHandHerbs
            { app::WorldMapIconType__Enum_QuestItem, -1159, -3635, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 37858, 12379, -1.f } }, // InnerWellspring.WaterEscape
            { app::WorldMapIconType__Enum_Mapmaker, -1190.f, -3861.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 1590, -1.f  }, {} },
            { app::WorldMapIconType__Enum_Weaponmaster, -1260.f, -3677.f, false, ExtraIconCreation::Spoiler,
                { true, uber_states::constants::OPHER_WEAPON_GROUP_ID, 20000, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, -668.349976f, -3935.040283f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 11512, 2.f }, {} }, // OuterWellspring.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_LumaPools] = {
            { app::WorldMapIconType__Enum_QuestItem, -1173, -4154, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 53103, -1.f } }, // EastPools.KwoloksWisdomAmulet
            { app::WorldMapIconType__Enum_QuestItem, -1284, -4126, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 8.f } }, // EastPools.HandToHandSpyglass
            { app::WorldMapIconType__Enum_QuestEnd, -1928, -4066, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 945, 49747, -1.f } }, // WestPools.ForestsStrength
            { app::WorldMapIconType__Enum_Mapmaker, -1391.f, -4167.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 1557, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, -1416.753174f, -4124.448242f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 54686, 2.f }, {} }, // EastPools.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_SilentWoodland] = {
            { app::WorldMapIconType__Enum_Keystone, 907.865112f, -4121.716309f, false, ExtraIconCreation::SpoilerAndNormal,
                { true, 58674, 19769, -1.f }, {} },
            { app::WorldMapIconType__Enum_QuestItem, 513, -4158, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 59708, 1.f } }, // WoodsEntry.LastTreeBranch
            { app::WorldMapIconType__Enum_QuestItem, 469, -4180, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 57399, -1.f } }, // WoodsEntry.DollQI
            { app::WorldMapIconType__Enum_QuestItem, 513, -4159, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 7470, -1.f } }, // WoodsEntry.TreeSeed
            { app::WorldMapIconType__Enum_RaceStart, 819.549988f, -4045.100098f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 22703, 2.f }, {} }, // WoodsMain.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_BaursReach] = {
            { app::WorldMapIconType__Enum_Experience, 68.761978f, -3730.634521f, false, ExtraIconCreation::SpoilerAndNormal,
                { true, 28895, 46404, -1.f }, {} }, // UpperReach.RevisitEX

            { app::WorldMapIconType__Enum_QuestItem, -244, -3989, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 5.f } }, // LowerReach.HandToHandHat
            { app::WorldMapIconType__Enum_QuestEnd, -31, -3711, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 28895, 25522, -1.f } }, // UpperReach.ForestsMemory
            { app::WorldMapIconType__Enum_Mapmaker, -275.f, -3996.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 29604, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, 76.593750f, -4035.282715f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 23661, 2.f }, {} }, // LowerReach.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_MouldwoodDepths] = {
            { app::WorldMapIconType__Enum_QuestItem, 317, -4508, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 7.f } }, // LowerDepths.HandToHandSilk
            { app::WorldMapIconType__Enum_QuestEnd, 687, -4386, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 18793, 63291, -1.f } }, // UpperDepths.ForestsEyes
            { app::WorldMapIconType__Enum_Mapmaker, 682.f, -4576.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 48423, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, 478.299988f, -4515.700195f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 28552, 2.f }, {} }, // LowerDepths.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_WindsweptWastes] = {
            { app::WorldMapIconType__Enum_QuestItem, 1641, -4003, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 58342, -1.f } }, // LowerWastes.EerieGem
            { app::WorldMapIconType__Enum_QuestItem, 1685, -3923, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 10.f } }, // LowerWastes.HandToHandMapstone
            { app::WorldMapIconType__Enum_Mapmaker, 1647.f, -3899.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 61146, -1.f  }, {} },
            { app::WorldMapIconType__Enum_RaceStart, 1526.199951f, -4007.700195f, false, ExtraIconCreation::Spoiler,
                { true, 44964, 30767, 2.f }, {} }, // LowerWastes.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum_WindtornRuins] = {
            { app::WorldMapIconType__Enum_QuestItem, 1969, -4024, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 14019, 26318, 11.f } }, // WindtornRuins.HandToHandComplete
            { app::WorldMapIconType__Enum_QuestEnd, 2056, -3568, false, ExtraIconCreation::SpoilerAndNormal,
                {}, { true, 10289, 22102, -1.f } }, // UpperDepths.WindtornRuins.Seir
        };

        extra_icons[app::GameWorldAreaID__Enum_MidnightBurrow] = {
            { app::WorldMapIconType__Enum_Mapmaker, -870.f, -4555.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 45538, -1.f  }, {} }
        };

        extra_icons[app::GameWorldAreaID__Enum_WillowsEnd] = {
            { app::WorldMapIconType__Enum_Mapmaker, 474.f, -3859.f, false, ExtraIconCreation::Spoiler,
                { true, 48248, 4045, -1.f  }, {} }
        };

        initialized = true;
    }

    IL2CPP_BINDING(, RuntimeWorldMapIcon, void, SetIconActiveMode, (app::RuntimeWorldMapIcon* this_ptr, bool active));
    void icon_resolver(app::RuntimeGameWorldArea* area, ExtraIcon& icon)
    {
        auto* runtime_icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");
        runtime_icon->fields.Guid = create_guid();
        auto guid = stringify_guid(runtime_icon->fields.Guid);

        extra_icons_map[guid] = &icon;

        // Custom spoiler state.
        runtime_icon->fields.Icon = icon.icon;
        if (icon.collected.valid && icon.collected.group == uber_states::constants::MAP_FILTER_GROUP_ID && icon.collected.state == 70)
        {
            if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
                runtime_icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(icon.custom.group, icon.custom.state, static_cast<int>(icon.custom.value)));

            auto& state = spoiler_states[guid];
            state.group_id = icon.custom.group;
            state.state_id = icon.custom.state;
            state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));
        }
        else if (icon.custom.valid)
            extra_states[stringify_guid(runtime_icon->fields.Guid)] = &icon;

        runtime_icon->fields.Position.x = icon.x;
        runtime_icon->fields.Position.y = icon.y;
        runtime_icon->fields.Area = area;
        runtime_icon->fields.IsSecret = false;
        runtime_icon->fields.IsCollectedState = icon.collected.valid ? uber_states::get_uber_state<app::SerializedBooleanUberState>(icon.collected.group, icon.collected.state) : nullptr;
        runtime_icon->fields.Condition = nullptr;
        runtime_icon->fields.SpecialState = nullptr;

        il2cpp::invoke(area->fields.Icons, "Add", runtime_icon);
        RuntimeWorldMapIcon::Show_intercept(runtime_icon);
        icon.runtime_icon = runtime_icon;
    }

    void spoiler_resolver(app::RuntimeGameWorldArea* area, app::RuntimeWorldMapIcon* runtime_icon)
    {
        auto group_id = 0;
        auto state_id = 0;
        auto value = -1.f;

        auto it = extra_icons_map.find(stringify_guid(runtime_icon->fields.Guid));
        if (it != extra_icons_map.end())
        {
            if (!should_create(it->second->creation, ExtraIconCreation::Spoiler))
                return;

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
        else if (runtime_icon->fields.IsCollectedState != nullptr)
        {
            group_id = runtime_icon->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id;
            state_id = runtime_icon->fields.IsCollectedState->fields._.m_id->fields.m_id;
        }
        else
            return;

        auto* icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");

        // TODO: get icon.
        if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
            icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(group_id, state_id, static_cast<int>(value)));
        else
            icon->fields.Icon = runtime_icon->fields.Icon;

        icon->fields.Guid = create_guid();
        icon->fields.Position.x = runtime_icon->fields.Position.x;
        icon->fields.Position.y = runtime_icon->fields.Position.y;
        icon->fields.Area = area;
        icon->fields.IsSecret = false;
        icon->fields.IsCollectedState = uber_states::get_uber_state<app::SerializedBooleanUberState>(uber_states::constants::MAP_FILTER_GROUP_ID, 70);
        icon->fields.Condition = nullptr;
        icon->fields.SpecialState = nullptr;

        auto& state = spoiler_states[stringify_guid(icon->fields.Guid)];
        state.icon = runtime_icon->fields.Icon;
        state.group_id = group_id;
        state.state_id = state_id;
        state.value = value;
        state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));

        il2cpp::invoke(area->fields.Icons, "Add", icon);
        RuntimeWorldMapIcon::Show_intercept(icon);
    }

    void spoiler_resolver(app::RuntimeGameWorldArea* area, ExtraIcon& extra_icon)
    {
        if (!should_create(extra_icon.creation, ExtraIconCreation::Spoiler))
            return;

        ExtraState actual_state = extra_icon.custom.valid ? extra_icon.custom : extra_icon.collected;
        auto* icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");

        if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
            icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(actual_state.group, actual_state.state, static_cast<int>(actual_state.value)));
        else
            icon->fields.Icon = extra_icon.icon;

        icon->fields.Guid = create_guid();
        icon->fields.Position.x = extra_icon.x;
        icon->fields.Position.y = extra_icon.y;
        icon->fields.Area = area;
        icon->fields.IsSecret = false;
        icon->fields.IsCollectedState = uber_states::get_uber_state<app::SerializedBooleanUberState>(uber_states::constants::MAP_FILTER_GROUP_ID, 70);
        icon->fields.Condition = nullptr;
        icon->fields.SpecialState = nullptr;

        auto& state = spoiler_states[stringify_guid(icon->fields.Guid)];
        state.icon = extra_icon.icon;
        state.group_id = actual_state.group;
        state.state_id = actual_state.state;
        state.value = actual_state.value;
        state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));

        il2cpp::invoke(area->fields.Icons, "Add", icon);
        RuntimeWorldMapIcon::Show_intercept(icon);
    }

    PlayerMapInfo& resolve_player_icon(app::RuntimeGameWorldArea* area, multiplayer::PlayerInfo const& player) {
        auto* runtime_icon = il2cpp::create_object<app::RuntimeWorldMapIcon>("", "RuntimeWorldMapIcon");
        runtime_icon->fields.Guid = create_guid();
        auto guid = stringify_guid(runtime_icon->fields.Guid);

        // Custom spoiler state.
        runtime_icon->fields.Icon = app::WorldMapIconType__Enum_Moki;
        runtime_icon->fields.Position.x = player.position.x;
        runtime_icon->fields.Position.y = player.position.y;
        runtime_icon->fields.Area = area;
        runtime_icon->fields.IsSecret = false;
        runtime_icon->fields.IsCollectedState = nullptr;
        runtime_icon->fields.Condition = nullptr;
        runtime_icon->fields.SpecialState = nullptr;

        il2cpp::invoke(area->fields.Icons, "Add", runtime_icon);
        RuntimeWorldMapIcon::Show_intercept(runtime_icon);

        player_map[runtime_icon] = player.id;
        player_icon_map[player.id] = { 0, 0.0f, { 0.0f, 0.0f }, runtime_icon, {}, player.name, true };
        return player_icon_map[player.id];
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
                        "tree icon { guid: [%0x, %0x, %0x, %0x], pos: [%f, %f] }",
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

        // Handle all the default spoiler icons first.
        const auto old_size = area->fields.Icons->fields._size;
        for (auto i = 0; i < old_size; ++i)
        {
            auto* item = area->fields.Icons->fields._items->vector[i];
            spoiler_resolver(area, item);
        }

        // Add extra icons
        for (auto& icon : extra_icons[area->fields.Area->fields.WorldMapAreaUniqueID])
        {
            if (should_create(icon.creation, ExtraIconCreation::Normal))
                icon_resolver(area, icon);
            if (should_create(icon.creation, ExtraIconCreation::Spoiler))
                spoiler_resolver(area, icon);
        }

        // Add header icons
        for (auto& pair : header_icons[area->fields.Area->fields.WorldMapAreaUniqueID])
        {
            auto& icon = pair.second;
            if (should_create(icon.creation, ExtraIconCreation::Normal))
                icon_resolver(area, icon);
            if (should_create(icon.creation, ExtraIconCreation::Spoiler))
                spoiler_resolver(area, icon);
        }

        // Add multiplayer icons
        if (area->fields.Area->fields.WorldMapAreaUniqueID == app::GameWorldAreaID__Enum_InkwaterMarsh)
        {
            // Destroy the dots.
            for (auto& p : player_icon_map)
                for (auto& dot : p.second.dots)
                    il2cpp::unity::destroy_object(dot.dot);

            player_map.clear();
            player_icon_map.clear();
            auto const& players = multiplayer::get_players();
            for (auto const& player : players)
                resolve_player_icon(area, player);
        }
    }

    std::unordered_map<app::GameWorldAreaID__Enum, app::RuntimeGameWorldArea*> areas;
    NAMED_IL2CPP_INTERCEPT(, RuntimeGameWorldArea, void, .ctor, ctor, (app::RuntimeGameWorldArea* this_ptr, app::GameWorldArea* area)) {
        RuntimeGameWorldArea::ctor(this_ptr, area);
        areas[area->fields.WorldMapAreaUniqueID] = this_ptr;
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
            areas[area->fields.Area->fields.WorldMapAreaUniqueID] = area;
            resolve_icons(area);
        }
    }

    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, void, Hide, (app::RuntimeWorldMapIcon* this_ptr)) {
        RuntimeWorldMapIcon::Hide(this_ptr);
        auto it = player_map.find(this_ptr);
        if (it != player_map.end())
        {
            auto& info = player_icon_map[it->second];
            info.shown = false;
            for (auto& dot : info.dots)
                GameObject::SetActive(dot.dot, false);
        }
    }

    STATIC_IL2CPP_BINDING(, AreaMapIconManager, bool, IsIconShownByFilter, (app::WorldMapIconType__Enum icon, app::AreaMapIconFilter__Enum filter));
    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, bool, CanBeTeleportedTo, (app::RuntimeWorldMapIcon* this_ptr)) {
        if (csharp_bridge::tp_to_any_pickup())
            return true;

        auto it = extra_icons_map.find(stringify_guid(this_ptr->fields.Guid));
        if (it != extra_icons_map.end() && it->second->can_teleport)
        {
            RuntimeWorldMapIcon::SetIconActiveMode(this_ptr, true);
            return true;
        }

        return CanBeTeleportedTo(this_ptr);
    }

    bool should_always_show_teleporters(app::AreaMapIconManager* manager)
    {
        return csharp_bridge::check_ini("AlwaysShowWarps") || (static_cast<NewFilters>(manager->fields.Filter) > NewFilters::Collectibles);
    }

    bool shown_by_filter(app::AreaMapIconManager* manager, app::RuntimeWorldMapIcon* icon)
    {
        // Always show warps check
        if(icon->fields.IsCollectedState == nullptr && // the icons of actual warps can't be collected and have no IsCollectedState; the same cannot be said for spoiler icons
            icon->fields.Icon == app::WorldMapIconType__Enum_SavePedestal &&
            should_always_show_teleporters(manager))
            return true;

        if (player_map.find(icon) != player_map.end())
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
        // Start ShowAreaIcons function.
        auto world = il2cpp::get_class<app::GameWorld__Class>("", "GameWorld")->static_fields->Instance;
        for (auto i = 0; i < world->fields.RuntimeAreas->fields._size; ++i)
        {
            auto runtime_area = world->fields.RuntimeAreas->fields._items->vector[i];
            for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j)
            {
                auto icon = runtime_area->fields.Icons->fields._items->vector[j];
                RuntimeWorldMapIcon::Hide_intercept(icon);
            }

            if (il2cpp::unity::is_valid(runtime_area->fields.Area))
            {
                if (il2cpp::unity::is_valid(runtime_area->fields.Area->fields.VisitableCondition) &&
                    !il2cpp::invoke<app::Boolean__Boxed>(runtime_area->fields.Area->fields.VisitableCondition, "Validate", nullptr)->fields)
                    continue;

                for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j)
                {
                    auto icon = runtime_area->fields.Icons->fields._items->vector[j];

                    // Difference in original function.
                    if (shown_by_filter(this_ptr, icon))
                        RuntimeWorldMapIcon::Show_intercept(icon);
                    else
                        RuntimeWorldMapIcon::Hide_intercept(icon);
                }
            }
        }
    }

    app::AreaMapIconFilterFooterLabel create_filter(NewFilters filter, std::string message)
    {
        app::AreaMapIconFilterFooterLabel label;
        label.Filter = static_cast<app::AreaMapIconFilter__Enum>(filter);
        label.Footer = utils::create_message_provider(il2cpp::string_new("Filter: " + message));
        return label;
    }

    bool ignore_filter_input = false;
    IL2CPP_INTERCEPT(, AreaMapUI, void, set_IconFilter, (app::AreaMapUI* this_ptr, app::AreaMapIconFilter__Enum value)) {
        if (!ignore_filter_input)
            AreaMapUI::set_IconFilter(this_ptr, value);
    }

    void check_and_initialize_filter_labels(app::AreaMapIconManager* icon_manager)
    {
        if (il2cpp::is_assignable(icon_manager, "", "AreaMapIconManager") && icon_manager->fields.Labels->max_length < static_cast<int>(NewFilters::COUNT)) {
            auto arr = reinterpret_cast<app::AreaMapIconFilterFooterLabel__Array*>(il2cpp::untyped::array_new(
                il2cpp::get_class("", "AreaMapIconFilterFooterLabel"), static_cast<int>(NewFilters::COUNT)));

            for (auto i = 0; i < static_cast<int>(app::AreaMapIconFilter__Enum_COUNT); ++i)
                arr->vector[i] = icon_manager->fields.Labels->vector[i];

            // Add extra labels.
            arr->vector[static_cast<int>(NewFilters::InLogic)]  = create_filter(NewFilters::InLogic, "In Logic");
            arr->vector[static_cast<int>(NewFilters::Spoilers)] = create_filter(NewFilters::Spoilers, "Spoilers");

            icon_manager->fields.Labels = arr;
        }
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

    bool dirty_filter = false;
    std::atomic<bool> refresh = false;

    IL2CPP_INTERCEPT(, AreaMapUI, void, Init, (app::AreaMapUI* this_ptr)) {
        AreaMapUI::Init(this_ptr);
        auto icon_manager = this_ptr->fields._IconManager_k__BackingField;
        check_and_initialize_filter_labels(icon_manager);
        if (start_in_logic_filter && csharp_bridge::filter_enabled(static_cast<int>(NewFilters::InLogic)))
        {
            AreaMapUI::set_IconFilter(this_ptr, static_cast<app::AreaMapIconFilter__Enum>(NewFilters::InLogic));
            dirty_filter = true;
        }
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
            dirty_filter = true;
        }

        if (dirty_filter)
        {
            GameMapUI::UpdateFilterText(this_ptr);
            GameMapUI::UpdateQuests(this_ptr);
            dirty_filter = false;
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

    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, void, UpdateLabelState, (app::RuntimeWorldMapIcon* this_ptr)) {
        RuntimeWorldMapIcon::UpdateLabelState(this_ptr);
        auto it = player_map.find(this_ptr);
        if (it != player_map.end())
        {
            auto const* player = multiplayer::get_player(it->second);
            if (player != nullptr && player->online)
                GameObject::SetActive(this_ptr->fields.m_areaMapIcon->fields.Label, true);
            else
                GameObject::SetActive(this_ptr->fields.m_areaMapIcon->fields.Label, false);
        }
    }

    IL2CPP_BINDING(, IconPlacementScaler, void, PlaceIcon, (app::IconPlacementScaler* this_ptr, app::GameObject* icon, app::Vector3* location, bool is_teleportable));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* value));
    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (app::Object* object), (UnityEngine:Object));
    void initialize_dots(multiplayer::PlayerInfo const& player, PlayerMapInfo& info)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        while (info.dots.size() <= DOT_COUNT)
        {
            auto& dot = info.dots.emplace_back();
            dot.dot = reinterpret_cast<app::GameObject*>(Object::Instantiate(
                reinterpret_cast<app::Object*>(area_map->fields.TrailPrefab)));
            dot.renderer = il2cpp::unity::get_components<app::Renderer>(
                il2cpp::unity::get_children(dot.dot)[0], "UnityEngine", "Renderer")[0];
            GameObject::SetActive(dot.dot, false);
            app::Vector3 pos{ player.position.x, player.position.y, 0.0f };
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, &pos, false);
            info.pos = player.position;
        }
    }

    void add_dot(multiplayer::PlayerInfo const& player, PlayerMapInfo& info)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;

        {
            auto& dot = info.dots[info.next_index];
            GameObject::SetActive(dot.dot, true);
            app::Vector3 pos{ player.position.x, player.position.y, 0.0f };
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, &pos, false);
        }

        // TODO: Add stuff like normal.
        if (map_visible)
        {
            app::Color color = player.color;
            color.r = (color.r + 1.0f) / 2.0f;
            color.g = (color.g + 1.0f) / 2.0f;
            color.b = (color.b + 1.0f) / 2.0f;

            const int HALF_DOTS = DOT_COUNT / 2;
            for (int i = 0; i < HALF_DOTS; ++i)
            {
                color.a = static_cast<float>(i) / HALF_DOTS;
                auto& dot = info.dots[(info.next_index + HALF_DOTS + i) % DOT_COUNT];
                shaders::UberShaderAPI::SetColor(dot.renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);
            }
        }

        info.next_index = (info.next_index + 1) % DOT_COUNT;
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_fixedDeltaTime, ());
    void update_dots(multiplayer::PlayerInfo const& player, PlayerMapInfo& info)
    {
        std::vector<PlayerMapInfo::Dot>& dots = info.dots;
        if (player.online)
        {
            initialize_dots(player, info);
            info.time -= TimeUtility::get_fixedDeltaTime();
            auto dx = info.pos.x - player.position.x;
            auto dy = info.pos.y - player.position.y;
            auto squared_distance = dx * dx + dy * dy;
            if (squared_distance >= DOT_MIN_DISTANCE * DOT_MIN_DISTANCE && info.time < 0.0f)
            {
                add_dot(player, info);
                info.time = DOT_TIMEOUT;
                info.pos = player.position;
            }
        }
    }

    IL2CPP_BINDING(, AreaMapUI, void, PlaceDot, (app::AreaMapUI* this_ptr, int dot_index, int time_since_creation, const app::Vector2* point));
    IL2CPP_BINDING(, AreaMapUI, void, AddIcon, (app::AreaMapUI* this_ptr, app::GameObject* icon, app::Vector3* location, bool convert, bool isTeleportable));
    IL2CPP_INTERCEPT(, GameMapUI, void, FixedUpdate, (app::GameMapUI* this_ptr)) {
        GameMapUI::FixedUpdate(this_ptr);

        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        auto const& players = multiplayer::get_players();
        for (auto const& player : players)
        {
            auto it = player_icon_map.find(player.id);
            if (it != player_icon_map.end())
            {
                if (!it->second.shown && player.online)
                    RuntimeWorldMapIcon::Show_intercept(it->second.icon);
                else if (it->second.shown && !player.online)
                    RuntimeWorldMapIcon::Hide_intercept(it->second.icon);

                auto icon = it->second.icon;
                icon->fields.Position.x = player.position.x;
                icon->fields.Position.y = player.position.y;
                if (icon->fields.IconGameObject != nullptr && il2cpp::unity::is_valid(icon->fields.IconGameObject))
                {
                    app::Vector3 position{ player.position.x, player.position.y, 0.0f };
                    AreaMapUI::AddIcon(area_map, icon->fields.IconGameObject, &position, false, false);
                }
            }
            else
            {
                auto area = areas.find(app::GameWorldAreaID__Enum_InkwaterMarsh);
                if (area != areas.end())
                {
                    auto& info = resolve_player_icon(area->second, player);
                    if (!info.shown && player.online)
                        RuntimeWorldMapIcon::Show_intercept(info.icon);
                    else if (info.shown && !player.online)
                        RuntimeWorldMapIcon::Hide_intercept(info.icon);
                }
            }

            it = player_icon_map.find(player.id);
            if (it != player_icon_map.end())
                update_dots(player, it->second);
        }

        // We have players that have left the game.
        if (players.size() < player_icon_map.size())
        {
            // Hide removed players.
            for (auto& player_pair : player_icon_map)
            {
                if (player_pair.second.shown)
                {
                    auto player = multiplayer::get_player(player_pair.first);
                    if (player == nullptr)
                        RuntimeWorldMapIcon::Hide_intercept(player_pair.second.icon);
                }
            }
        }
    }
}

void refresh_icon_alphas(bool is_map_visible)
{
    auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
    if (il2cpp::unity::is_valid(area_map->fields._PlayerPositionMarker_k__BackingField))
    {
        auto color = multiplayer::get_local_player_color();
        if (color.r < 0.99f || color.g < 0.99f || color.b < 0.99f || color.a < 0.99f)
            utils::set_color(area_map->fields._PlayerPositionMarker_k__BackingField, color, false);
    }

    map_visible = is_map_visible;
    for (auto& p : player_icon_map)
    {
        if (is_map_visible)
        {
            if (p.second.dots.empty())
                return;

            auto player = multiplayer::get_player(p.second.name);
            const int HALF_DOTS = DOT_COUNT / 2;
            for (int i = 0; i < HALF_DOTS; ++i)
            {
                auto& dot = p.second.dots[(p.second.next_index + HALF_DOTS + i) % DOT_COUNT];
                app::Color color;
                if (player != nullptr)
                    color = player->color;
                else
                    color = shaders::UberShaderAPI::GetColor(dot.renderer, app::UberShaderProperty_Color__Enum_MainColor);

                color.a = static_cast<float>(i) / HALF_DOTS;
                shaders::UberShaderAPI::SetColor(dot.renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);
            }
        }
        else
        {
            for (auto dot : p.second.dots)
            {
                auto color = shaders::UberShaderAPI::GetColor(dot.renderer, app::UberShaderProperty_Color__Enum_MainColor);
                color.a = 0.0f;
                shaders::UberShaderAPI::SetColor(dot.renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);
            }
        }
    }
}

INJECT_C_DLLEXPORT void remove_icon(app::GameWorldAreaID__Enum area, int id)
{
    auto& area_header_icons = header_icons[area];
    auto it = area_header_icons.find(id);
    if (it == area_header_icons.end())
        return;

    if (initialized)
    {
        if (it->second.runtime_icon != nullptr)
        {
            RuntimeWorldMapIcon::Hide_intercept(it->second.runtime_icon);
            il2cpp::invoke(it->second.runtime_icon->fields.Area->fields.Icons, "Remove", it->second.runtime_icon);
        }
        if (it->second.spoiler_icon != nullptr)
        {
            RuntimeWorldMapIcon::Hide_intercept(it->second.spoiler_icon);
            il2cpp::invoke(it->second.spoiler_icon->fields.Area->fields.Icons, "Remove", it->second.spoiler_icon);
        }
    }

    header_icons[area].erase(id);
}

INJECT_C_DLLEXPORT void add_icon(app::GameWorldAreaID__Enum area, int id, app::WorldMapIconType__Enum icon, float x, float y, int group_id, int state_id, bool allow_teleport)
{
    auto& area_header_icons = header_icons[area];
    if (area_header_icons.find(id) != area_header_icons.end())
        remove_icon(area, id);

    ExtraState state = { true, group_id, state_id, 1.f };
    if (group_id < 0 || state_id < 0)
        state.valid = false;

    area_header_icons[id] = {
        icon,
        x,
        y,
        allow_teleport,
        ExtraIconCreation::Normal,
        state,
        {}
    };

    if (initialized)
    {
        auto* game_world = il2cpp::get_class<app::GameWorld__Class>("", "GameWorld")->static_fields->Instance;
        for (auto i = 0; i < game_world->fields.RuntimeAreas->fields._size; ++i)
        {
            auto* runtime_area = game_world->fields.RuntimeAreas->fields._items->vector[i];
            if (runtime_area->fields.Area->fields.WorldMapAreaUniqueID == area)
            {
                auto& icon = area_header_icons[id];
                if (should_create(icon.creation, ExtraIconCreation::Normal))
                    icon_resolver(runtime_area, icon);
                if (should_create(icon.creation, ExtraIconCreation::Spoiler))
                    spoiler_resolver(runtime_area, icon);

                auto* icon_manager = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")
                    ->static_fields->Instance->fields._IconManager_k__BackingField;

                if (icon.runtime_icon != nullptr && !shown_by_filter(icon_manager, icon.runtime_icon))
                    RuntimeWorldMapIcon::Hide_intercept(icon.runtime_icon);

                if (icon.spoiler_icon != nullptr && !shown_by_filter(icon_manager, icon.spoiler_icon))
                    RuntimeWorldMapIcon::Hide_intercept(icon.spoiler_icon);

                break;
            }
        }
    }
}

void update_player_icons()
{
    for (auto& player : player_icon_map)
    {
        if (player.second.icon == nullptr)
            continue;

        auto info = multiplayer::get_player(player.first);
        if (info == nullptr || !info->online)
            RuntimeWorldMapIcon::Hide_intercept(player.second.icon);
        else
            RuntimeWorldMapIcon::Show_intercept(player.second.icon);
    }
}

INJECT_C_DLLEXPORT void refresh_inlogic_filter() {
    refresh = true;
}

INJECT_C_DLLEXPORT void set_start_in_logic_filter(bool value) {
    start_in_logic_filter = value;
}
