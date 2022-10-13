#include <game/game.h>
#include <game/system/message_provider.h>
#include <game/ui.h>
#include <interop/csharp_bridge.h>
#include <randomizer/multiplayer.h>
#include <randomizer/settings.h>
#include <uber_states/uber_state_interface.h>
#include <utils/misc.h>
#include <enums/comparison.h>

#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/AreaMapIcon.h>
#include <Il2CppModLoader/app/methods/AreaMapIconManager.h>
#include <Il2CppModLoader/app/methods/AreaMapUI.h>
#include <Il2CppModLoader/app/methods/GameMapUI.h>
#include <Il2CppModLoader/app/methods/GameWorld.h>
#include <Il2CppModLoader/app/methods/MoonGuid.h>
#include <Il2CppModLoader/app/methods/RuntimeGameWorldArea.h>
#include <Il2CppModLoader/app/methods/RuntimeWorldMapIcon.h>
#include <Il2CppModLoader/app/methods/UberShaderAPI.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/types/Input_Cmd.h>
#include <Il2CppModLoader/app/types/AreaMapUI.h>
#include <Il2CppModLoader/app/types/AreaMapIconFilterFooterLabel.h>
#include <Il2CppModLoader/app/types/GameWorld.h>
#include <Il2CppModLoader/app/types/RuntimeWorldMapIcon.h>
#include <Il2CppModLoader/app/types/MoonGuid.h>
#include <Il2CppModLoader/app/types/AreaMapIconManager.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

#include <atomic>
#include <random>
#include <unordered_map>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace {
    enum class NewFilters : int32_t {
        All = 0,
        Quests = 1,
        Teleports = 2,
        Collectibles = 3,
        InLogic = 4,
        Spoilers = 5,
        Players = 6,
        COUNT = 7,
    };

    std::mt19937 generator(40500);
    const std::unordered_map<std::string, uber_states::UberState> TREE_OVERRIDES = {
        { "64590ed6, 476b6885, 8993bbb3, 7d01ee6d", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DoubleJump) },
        { "2093882f, 41284e46, 284565b7, 3b59fe87", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::MeditateSpell) },
        { "409f9b9c, 4875095f, 605e3d99, 8793aba7", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeB) },
        { "b14a658b, 47ae6c64, c545e4a0, 5ec56dc1", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DashNew) },
        { "9a3ba1c4, 44f761c3, 3e220da0, 5df0873f", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bash) },
        { "0301d83a, 4bf5928c, f5dd648f, ced61561", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::WaterDash) },
        { "7e686e64, 4fdc6a7a, 8c545381, c27e91d0", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::GlowSpell) },
        { "c4631bfe, 4805c6ee, cdefd19f, 9acfe6d8", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::ChargeJump) },
        { "9372586a, 48214636, 9c57548d, 182b410d", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::SpiritLeash) },
        { "e0eda584, 48cbb5c7, cb914bab, fa693844", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeA) },
        { "1c2f12f9, 4b5ac685, ff9bd6a4, cbe66a48", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Digging) },
        { "1f79d15a, 4192137e, a40d0c9e, 3e289606", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Grenade) },
        { "718c895b, 431b8c79, fdc0efa5, a0709f87", uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bow) },
        // Sword Tree has no icon in the base game, we add that manually
    };

    enum class ExtraIconDisplayCondition {
        Normal = 0b01,
        Spoiler = 0b10,
        SpoilerAndNormal = 0b11,
    };

    struct ExtraState {
        bool valid;
        uber_states::UberState uber_state;
        Comparison comparison;
        float value;
    };

    struct ExtraIcon {
        app::WorldMapIconType__Enum icon;
        float x;
        float y;
        bool can_teleport;
        ExtraIconDisplayCondition creation;
        bool use_custom_label = false;
        std::wstring custom_label;

        ExtraState collected;
        ExtraState custom;

        app::RuntimeWorldMapIcon* runtime_icon = nullptr;
        app::RuntimeWorldMapIcon* spoiler_icon = nullptr;
    };

    struct IconState {
        app::WorldMapIconType__Enum icon;
        uber_states::UberState uber_state;
        Comparison comparison;
        float value;
        bool has_spoiler_icon;
    };

    bool start_in_logic_filter = true;
    bool start_in_logic_filter_done_since_new_game = false;

    std::unordered_map<app::GameWorldAreaID__Enum, std::unordered_map<int, ExtraIcon>> header_icons;
    std::unordered_map<std::string, IconState> custom_filter_icon_states;
    std::unordered_map<app::GameWorldAreaID__Enum, std::vector<ExtraIcon>> extra_icons;
    std::unordered_map<app::GameWorldAreaID__Enum, std::vector<ExtraIcon>> extra_spoiler_icons;
    std::unordered_map<std::string, ExtraIcon*> extra_icons_map;
    std::unordered_map<std::string, ExtraIcon*> extra_states;
    bool initialized = false;
    int current_filter = 0;
    std::string stringify_guid(app::MoonGuid* guid) {
        return format(
                "%08x, %08x, %08x, %08x",
                guid->fields.A,
                guid->fields.B,
                guid->fields.C,
                guid->fields.D
        );
    }

    bool should_create(ExtraIconDisplayCondition value, ExtraIconDisplayCondition expected) {
        const auto expected_value = static_cast<int32_t>(expected);
        return (static_cast<int32_t>(value) & expected_value) == expected_value;
    }

    app::MoonGuid* create_guid() {
        auto guid = types::MoonGuid::create();
        MoonGuid::ctor_2(
                guid,
                static_cast<int>(generator()),
                static_cast<int>(generator()),
                static_cast<int>(generator()),
                static_cast<int>(generator())
        );

        return guid;
    }

    app::WorldMapIconType__Enum get_base_icon(app::RuntimeWorldMapIcon* icon) {
        auto base_icons = icon->fields.Area->fields.Area->fields.Icons;
        for (auto i = 0; i < base_icons->fields._size; ++i) {
            auto base_icon = base_icons->fields._items->vector[i];
            if (base_icon->fields.Guid->fields.A == icon->fields.Guid->fields.A &&
                base_icon->fields.Guid->fields.B == icon->fields.Guid->fields.B &&
                base_icon->fields.Guid->fields.C == icon->fields.Guid->fields.C &&
                base_icon->fields.Guid->fields.D == icon->fields.Guid->fields.D)
                return base_icon->fields.Icon;
        }

        return app::WorldMapIconType__Enum::Keystone;
    }

    app::WorldMapIconType__Enum get_icon_type(app::RuntimeWorldMapIcon* icon, uber_states::UberState state) {
        auto guid = stringify_guid(icon->fields.Guid);

        // Extra icons and trees.
        {
            auto it = custom_filter_icon_states.find(guid);
            if (it != custom_filter_icon_states.end())
                return it->second.icon;
        }

        {
            auto it = extra_icons_map.find(guid);
            if (it != extra_icons_map.end())
                return it->second->icon;
        }

        auto base_icons = icon->fields.Area->fields.Area->fields.Icons;
        for (auto i = 0; i < base_icons->fields._size; ++i) {
            auto base_icon = base_icons->fields._items->vector[i];
            if (base_icon->fields.State != nullptr &&
                uber_states::UberState(base_icon->fields.State) == state)
                return base_icon->fields.Icon;
        }

        return app::WorldMapIconType__Enum::Keystone;
    }

    IL2CPP_INTERCEPT(RuntimeWorldMapIcon, void, Show, (app::RuntimeWorldMapIcon * this_ptr)) {
        // For some stupid reason they set icons to WorldMapIconType__Enum_Invisible when a pickup is picked up...
        if (this_ptr->fields.Icon == app::WorldMapIconType__Enum::Invisible)
            this_ptr->fields.Icon = get_base_icon(this_ptr);

        next::RuntimeWorldMapIcon::Show(this_ptr);

        if (this_ptr->fields.m_areaMapIcon != nullptr) {
            bool label_set = false;
            auto guid = stringify_guid(this_ptr->fields.Guid);
            auto ex = extra_icons_map.find(guid);
            if (ex != extra_icons_map.end() && ex->second->use_custom_label) {
                AreaMapIcon::SetMessageProvider(this_ptr->fields.m_areaMapIcon, utils::create_message_provider(ex->second->custom_label));
                label_set = true;
            }

            auto it = custom_filter_icon_states.find(guid);
            if (it != custom_filter_icon_states.end()) {
                if (!label_set) {
                    wchar_t buffer[128] = { 0 };
                    csharp_bridge::filter_icon_text(
                            reinterpret_cast<void*>(buffer),
                            127 * sizeof(wchar_t),
                            static_cast<int>(it->second.uber_state.group()),
                            it->second.uber_state.state(),
                            static_cast<int>(it->second.value),
                            current_filter
                    );
                    AreaMapIcon::SetMessageProvider(this_ptr->fields.m_areaMapIcon, utils::create_message_provider(buffer));
                }

                const auto spoiler_active = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));
                if (spoiler_active ^ it->second.has_spoiler_icon) {
                    auto icon_enum = spoiler_active
                            ? csharp_bridge::filter_icon_type(static_cast<int>(it->second.uber_state.group()), it->second.uber_state.state(), static_cast<int>(it->second.value))
                            : static_cast<int>(get_icon_type(this_ptr, it->second.uber_state));
                    il2cpp::invoke(this_ptr, "SetIcon", &icon_enum);
                    it->second.has_spoiler_icon = spoiler_active;
                }
            }
        }
    }

    void initialize_icons() {
        extra_icons[app::GameWorldAreaID__Enum::InkwaterMarsh] = {
            { app::WorldMapIconType__Enum::AbilityPedestal, -296.395905f, -4480.f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Sword), Comparison::Greater, -1.f }, {} },

            { app::WorldMapIconType__Enum::QuestItem, -695, -4417, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 51645), Comparison::GreaterOrEquals, 3.f } }, // MarshSpawn.TheMissingKey
            { app::WorldMapIconType__Enum::QuestItem, -932, -4494, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 18458), Comparison::GreaterOrEquals, 4.f } }, // MarshSpawn.IntoTheBurrows
            { app::WorldMapIconType__Enum::QuestItem, -391, -4414, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 15983), Comparison::GreaterOrEquals, 3.f } }, // MarshSpawn.ALittleBraver

            { app::WorldMapIconType__Enum::Keystone, -461.027069f, -4195.8754808f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(21786), 27433), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Keystone, -393.719452f, -4188.882813f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(21786), 37225), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Mapmaker, -589.f, -4348.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 18767), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Weaponmaster, -597.f, -4293.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::OpherWeapon, 20000), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, -614.200012f, -4317.200195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 45951), Comparison::GreaterOrEquals, 2.f }, {} }, // MarshPastOpher.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::KwoloksHollow] = {
            { app::WorldMapIconType__Enum::QuestItem, -110, -4220, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 1.f } }, // EastHollow.HandToHandMap
            { app::WorldMapIconType__Enum::QuestItem, 240, -4207, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 50597), Comparison::GreaterOrEquals, 4.f } }, // EastHollow.KwoloksWisdom,
            { app::WorldMapIconType__Enum::Mapmaker, -146.f, -4321.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 3638), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Shardtrader, -281.f, -4239.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::TwillenShard, 20000), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, -115.000000f, -4257.200195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 25545), Comparison::GreaterOrEquals, 2.f }, {} }, // WestHollow.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::WellspringGlades] = {
            { app::WorldMapIconType__Enum::QuestItem, -282, -4155, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.HandToHandPouch
            { app::WorldMapIconType__Enum::QuestItem, -426, -4155, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 6.f } }, // GladesTown.HandToHandLantern
            { app::WorldMapIconType__Enum::QuestItem, -410, -4142, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 9.f } }, // GladesTown.HandToHandCanteen
            { app::WorldMapIconType__Enum::QuestItem, -110, -4090, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 4.f } }, // GladesTown.HandToHandSoup
            { app::WorldMapIconType__Enum::QuestItem, -385, -4161, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 27804), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.FamilyReunionKey
            { app::WorldMapIconType__Enum::QuestItem, -366, -4185, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 2782), Comparison::Greater, -1.f } }, // GladesTown.AcornQI
            { app::WorldMapIconType__Enum::QuestItem, -358, -4185, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 33776), Comparison::GreaterOrEquals, 3.f } }, // GladesTown.IntoTheDarkness
            { app::WorldMapIconType__Enum::QuestItem, -320, -4152, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 44578), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.RebuildTheGlades
            { app::WorldMapIconType__Enum::QuestItem, -408, -4162, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(23987), 14832), Comparison::Greater, -1.f } }, // GladesTown.ADiamondInTheRough
            { app::WorldMapIconType__Enum::QuestItem, -170, -4138, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26394), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.RegrowTheGlades
            { app::WorldMapIconType__Enum::Weaponmaster, -204.f, -4147.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::OpherWeapon, 20000), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Mapmaker, -209.f, -4163.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 20000), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Shardtrader, -410.f, -4162.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::TwillenShard, 20000), Comparison::Greater, -1.f }, {} },
        };

        extra_icons[app::GameWorldAreaID__Enum::WaterMill] = {
            { app::WorldMapIconType__Enum::QuestItem, -811, -3973, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 20667), Comparison::GreaterOrEquals, 3.f } }, // OuterWellspring.TheLostCompass
            { app::WorldMapIconType__Enum::QuestItem, -1168, -3733, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 3.f } }, // InnerWellspring.HandToHandHerbs
            { app::WorldMapIconType__Enum::QuestItem, -1159, -3635, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(37858), 12379), Comparison::Greater, -1.f } }, // InnerWellspring.WaterEscape
            { app::WorldMapIconType__Enum::Mapmaker, -1190.f, -3861.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 1590), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::Weaponmaster, -1260.f, -3677.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::OpherWeapon, 20000), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, -668.349976f, -3935.040283f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 11512), Comparison::GreaterOrEquals, 2.f }, {} }, // OuterWellspring.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::LumaPools] = {
            { app::WorldMapIconType__Enum::QuestItem, -1173, -4154, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 53103), Comparison::Greater, -1.f } }, // EastPools.KwoloksWisdomAmulet
            { app::WorldMapIconType__Enum::QuestItem, -1284, -4126, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 8.f } }, // EastPools.HandToHandSpyglass
            { app::WorldMapIconType__Enum::QuestEnd, -1928, -4066, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(945), 49747), Comparison::Greater, -1.f } }, // WestPools.ForestsStrength
            { app::WorldMapIconType__Enum::Mapmaker, -1391.f, -4167.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 1557), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, -1416.753174f, -4124.448242f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 54686), Comparison::GreaterOrEquals, 2.f }, {} }, // EastPools.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::SilentWoodland] = {
            { app::WorldMapIconType__Enum::Keystone, 907.865112f, -4121.716309f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(58674), 19769), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::QuestItem, 513, -4158, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 59708), Comparison::GreaterOrEquals, 1.f } }, // WoodsEntry.LastTreeBranch
            { app::WorldMapIconType__Enum::QuestItem, 469, -4180, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 57399), Comparison::Greater, -1.f } }, // WoodsEntry.DollQI
            { app::WorldMapIconType__Enum::QuestItem, 513, -4159, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 7470), Comparison::Greater, -1.f } }, // WoodsEntry.TreeSeed
            { app::WorldMapIconType__Enum::RaceStart, 819.549988f, -4045.100098f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 22703), Comparison::GreaterOrEquals, 2.f }, {} }, // WoodsMain.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::BaursReach] = {
            { app::WorldMapIconType__Enum::Experience, 68.761978f, -3730.634521f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(28895), 46404), Comparison::Greater, -1.f }, {} }, // UpperReach.RevisitEX

            { app::WorldMapIconType__Enum::QuestItem, -244, -3989, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 5.f } }, // LowerReach.HandToHandHat
            { app::WorldMapIconType__Enum::QuestEnd, -31, -3711, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(28895), 25522), Comparison::Greater, -1.f } }, // UpperReach.ForestsMemory
            { app::WorldMapIconType__Enum::Mapmaker, -275.f, -3996.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 29604), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, 76.593750f, -4035.282715f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 23661), Comparison::GreaterOrEquals, 2.f }, {} }, // LowerReach.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::MouldwoodDepths] = {
            { app::WorldMapIconType__Enum::QuestItem, 317, -4508, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 7.f } }, // LowerDepths.HandToHandSilk
            { app::WorldMapIconType__Enum::QuestEnd, 687, -4386, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(18793), 63291), Comparison::Greater, -1.f } }, // UpperDepths.ForestsEyes
            { app::WorldMapIconType__Enum::Mapmaker, 682.f, -4576.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 48423), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, 478.299988f, -4515.700195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 28552), Comparison::GreaterOrEquals, 2.f }, {} }, // LowerDepths.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::WindsweptWastes] = {
            { app::WorldMapIconType__Enum::QuestItem, 1641, -4003, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 58342), Comparison::Greater, -1.f } }, // LowerWastes.EerieGem
            { app::WorldMapIconType__Enum::QuestItem, 1685, -3923, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 10.f } }, // LowerWastes.HandToHandMapstone
            { app::WorldMapIconType__Enum::Mapmaker, 1647.f, -3899.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 61146), Comparison::Greater, -1.f }, {} },
            { app::WorldMapIconType__Enum::RaceStart, 1526.199951f, -4007.700195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 30767), Comparison::GreaterOrEquals, 2.f }, {} }, // LowerWastes.SpiritTrial
        };

        extra_icons[app::GameWorldAreaID__Enum::WindtornRuins] = {
            { app::WorldMapIconType__Enum::QuestItem, 1969, -4024, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 11.f } }, // WindtornRuins.HandToHandComplete
            { app::WorldMapIconType__Enum::QuestEnd, 2056, -3568, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(10289), 22102), Comparison::Greater, -1.f } }, // UpperDepths.WindtornRuins.Seir
        };

        extra_icons[app::GameWorldAreaID__Enum::MidnightBurrow] = {
            { app::WorldMapIconType__Enum::Mapmaker, -870.f, -4555.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 45538), Comparison::Greater, -1.f }, {} }
        };

        extra_icons[app::GameWorldAreaID__Enum::WillowsEnd] = {
            { app::WorldMapIconType__Enum::Mapmaker, 474.f, -3859.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 4045), Comparison::Greater, -1.f }, {} }
        };

        initialized = true;
    }

    uber_states::UberState custom_filter_icons_enabled_state(UberStateGroup::MapFilter, 70);
    void icon_resolver(app::RuntimeGameWorldArea* area, ExtraIcon& icon) {
        auto* runtime_icon = types::RuntimeWorldMapIcon::create();
        runtime_icon->fields.Guid = create_guid();
        auto guid = stringify_guid(runtime_icon->fields.Guid);

        extra_icons_map[guid] = &icon;

        // Custom spoiler state.
        runtime_icon->fields.Icon = icon.icon;
        if (icon.collected.valid && icon.collected.uber_state == custom_filter_icons_enabled_state) {
            if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
                runtime_icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(
                        csharp_bridge::filter_icon_type(static_cast<int>(icon.custom.uber_state.group()), icon.custom.uber_state.state(), static_cast<int>(icon.custom.value))
                );

            auto& state = custom_filter_icon_states[guid];
            state.uber_state = icon.custom.uber_state;
            state.comparison = icon.custom.comparison;
            state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));
        } else if (icon.custom.valid) {
            extra_states[stringify_guid(runtime_icon->fields.Guid)] = &icon;
        }

        runtime_icon->fields.Position.x = icon.x;
        runtime_icon->fields.Position.y = icon.y;
        runtime_icon->fields.Area = area;
        runtime_icon->fields.IsSecret = false;
        runtime_icon->fields.IsCollectedState = icon.collected.valid
                ? icon.collected.uber_state.ptr<app::SerializedBooleanUberState>()
                : nullptr;
        runtime_icon->fields.Condition = nullptr;
        runtime_icon->fields.SpecialState = nullptr;

        il2cpp::invoke(area->fields.Icons, "Add", runtime_icon);
        RuntimeWorldMapIcon::Show(runtime_icon);
        icon.runtime_icon = runtime_icon;
    }

    void spoiler_resolver(app::RuntimeGameWorldArea* area, app::RuntimeWorldMapIcon* runtime_icon) {
        uber_states::UberState state(static_cast<UberStateGroup>(0), 0);
        auto value = -1.f;
        Comparison comparison = Comparison::Greater;

        auto it = extra_icons_map.find(stringify_guid(runtime_icon->fields.Guid));
        if (it != extra_icons_map.end()) {
            if (!should_create(it->second->creation, ExtraIconDisplayCondition::Spoiler))
                return;

            if (it->second->custom.valid) {
                state = it->second->custom.uber_state;
                value = it->second->custom.value;
                comparison = it->second->custom.comparison;
            } else {
                state = it->second->collected.uber_state;
                value = it->second->collected.value;
                comparison = it->second->collected.comparison;
            }
        } else if (runtime_icon->fields.IsCollectedState != nullptr) {
            state = uber_states::UberState(
                    static_cast<UberStateGroup>(runtime_icon->fields.IsCollectedState->fields.Group->fields._.m_id->fields.m_id),
                    runtime_icon->fields.IsCollectedState->fields._.m_id->fields.m_id
            );
        } else
            return;

        auto* icon = types::RuntimeWorldMapIcon::create();

        // TODO: get icon.
        if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
            icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(
                    static_cast<int>(state.group()), state.state(), static_cast<int>(value)
            ));
        else
            icon->fields.Icon = runtime_icon->fields.Icon;

        icon->fields.Guid = create_guid();
        icon->fields.Position.x = runtime_icon->fields.Position.x;
        icon->fields.Position.y = runtime_icon->fields.Position.y;
        icon->fields.Area = area;
        icon->fields.IsSecret = false;
        icon->fields.IsCollectedState = reinterpret_cast<app::SerializedBooleanUberState*>(custom_filter_icons_enabled_state.ptr());
        icon->fields.Condition = nullptr;
        icon->fields.SpecialState = nullptr;

        auto& spoiler_state = custom_filter_icon_states[stringify_guid(icon->fields.Guid)];
        spoiler_state.icon = runtime_icon->fields.Icon;
        spoiler_state.uber_state = state;
        spoiler_state.value = value;
        spoiler_state.comparison = comparison;
        spoiler_state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));

        il2cpp::invoke(area->fields.Icons, "Add", icon);
        RuntimeWorldMapIcon::Show(icon);
    }

    void spoiler_resolver(app::RuntimeGameWorldArea* area, ExtraIcon& extra_icon) {
        if (!should_create(extra_icon.creation, ExtraIconDisplayCondition::Spoiler))
            return;

        ExtraState actual_state = extra_icon.custom.valid ? extra_icon.custom : extra_icon.collected;
        auto* icon = types::RuntimeWorldMapIcon::create();

        if (csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers)))
            icon->fields.Icon = static_cast<app::WorldMapIconType__Enum>(csharp_bridge::filter_icon_type(
                    static_cast<int>(actual_state.uber_state.group()), actual_state.uber_state.state(), static_cast<int>(actual_state.value)
            ));
        else
            icon->fields.Icon = extra_icon.icon;

        icon->fields.Guid = create_guid();
        icon->fields.Position.x = extra_icon.x;
        icon->fields.Position.y = extra_icon.y;
        icon->fields.Area = area;
        icon->fields.IsSecret = false;
        icon->fields.IsCollectedState = custom_filter_icons_enabled_state.ptr<app::SerializedBooleanUberState>();
        icon->fields.Condition = nullptr;
        icon->fields.SpecialState = nullptr;

        auto& state = custom_filter_icon_states[stringify_guid(icon->fields.Guid)];
        state.icon = extra_icon.icon;
        state.uber_state = actual_state.uber_state;
        state.value = actual_state.value;
        state.comparison = actual_state.comparison;
        state.has_spoiler_icon = csharp_bridge::filter_enabled(static_cast<int>(NewFilters::Spoilers));

        il2cpp::invoke(area->fields.Icons, "Add", icon);
        RuntimeWorldMapIcon::Show(icon);
    }

    void resolve_icons(app::RuntimeGameWorldArea* area) {
        for (auto i = 0; i < area->fields.Icons->fields._size; ++i) {
            auto item = area->fields.Icons->fields._items->vector[i];
            if (item->fields.Icon == app::WorldMapIconType__Enum::AbilityPedestal) {
                std::string key = format(
                        "%08x, %08x, %08x, %08x",
                        item->fields.Guid->fields.A,
                        item->fields.Guid->fields.B,
                        item->fields.Guid->fields.C,
                        item->fields.Guid->fields.D
                );

                auto it = TREE_OVERRIDES.find(key);
                if (it != TREE_OVERRIDES.end()) {
                    item->fields.Condition = nullptr;
                    item->fields.IsCollectedState = it->second.ptr<app::SerializedBooleanUberState>();
                } else {
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
        for (auto i = 0; i < old_size; ++i) {
            auto* item = area->fields.Icons->fields._items->vector[i];
            spoiler_resolver(area, item);
        }

        // Add extra icons
        for (auto& icon : extra_icons[area->fields.Area->fields.WorldMapAreaUniqueID]) {
            if (should_create(icon.creation, ExtraIconDisplayCondition::Normal))
                icon_resolver(area, icon);
            if (should_create(icon.creation, ExtraIconDisplayCondition::Spoiler))
                spoiler_resolver(area, icon);
        }

        // Add header icons
        for (auto& pair : header_icons[area->fields.Area->fields.WorldMapAreaUniqueID]) {
            auto& icon = pair.second;
            if (should_create(icon.creation, ExtraIconDisplayCondition::Normal))
                icon_resolver(area, icon);
            if (should_create(icon.creation, ExtraIconDisplayCondition::Spoiler))
                spoiler_resolver(area, icon);
        }
    }

    std::unordered_map<app::GameWorldAreaID__Enum, app::RuntimeGameWorldArea*> areas;
    IL2CPP_INTERCEPT(RuntimeGameWorldArea, void, ctor, (app::RuntimeGameWorldArea * this_ptr, app::GameWorldArea* area)) {
        next::RuntimeGameWorldArea::ctor(this_ptr, area);
        areas[area->fields.WorldMapAreaUniqueID] = this_ptr;
        if (!initialized)
            initialize_icons();

        resolve_icons(this_ptr);
    }

    IL2CPP_INTERCEPT(GameWorld, void, OnGameReset, (app::GameWorld * this_ptr)) {
        if (!initialized)
            initialize_icons();

        next::GameWorld::OnGameReset(this_ptr);
        for (auto i = 0; i < this_ptr->fields.RuntimeAreas->fields._size; ++i) {
            auto area = this_ptr->fields.RuntimeAreas->fields._items->vector[i];
            areas[area->fields.Area->fields.WorldMapAreaUniqueID] = area;
            resolve_icons(area);
        }
    }

    IL2CPP_INTERCEPT(RuntimeWorldMapIcon, void, Hide, (app::RuntimeWorldMapIcon * this_ptr)) {
        next::RuntimeWorldMapIcon::Hide(this_ptr);
    }

    IL2CPP_INTERCEPT(RuntimeWorldMapIcon, bool, CanBeTeleportedTo, (app::RuntimeWorldMapIcon * this_ptr)) {
        if (csharp_bridge::tp_to_any_pickup())
            return true;

        auto it = extra_icons_map.find(stringify_guid(this_ptr->fields.Guid));
        if (it != extra_icons_map.end() && it->second->can_teleport) {
            RuntimeWorldMapIcon::SetIconActiveMode(this_ptr, true);
            return true;
        }

        return next::RuntimeWorldMapIcon::CanBeTeleportedTo(this_ptr);
    }

    bool should_always_show_teleporters(app::AreaMapIconManager* manager) {
        return csharp_bridge::check_ini("AlwaysShowWarps") || (static_cast<NewFilters>(manager->fields.Filter) > NewFilters::Collectibles);
    }

    bool should_always_show_keystone_doors(app::AreaMapIconManager* manager) {
        return csharp_bridge::check_ini("AlwaysShowKeystoneDoors") || (static_cast<NewFilters>(manager->fields.Filter) > NewFilters::Collectibles);
    }

    bool is_custom_filter_icon_state(app::SerializedBooleanUberState* state) {
        return state != nullptr && uber_states::UberState(state) == custom_filter_icons_enabled_state;
    }

    bool should_always_show(app::AreaMapIconManager* manager, app::RuntimeWorldMapIcon* icon) {
        const auto is_custom_filter_icon = is_custom_filter_icon_state(icon->fields.IsCollectedState);
        if (is_custom_filter_icon)
            return false;

        switch (icon->fields.Icon) {
            case app::WorldMapIconType__Enum::SavePedestal:
                return csharp_bridge::check_ini("AlwaysShowWarps") &&
                        (static_cast<NewFilters>(manager->fields.Filter) > NewFilters::Collectibles);
            case app::WorldMapIconType__Enum::KeystoneDoorOpen:
            case app::WorldMapIconType__Enum::KeystoneDoorTwo:
            case app::WorldMapIconType__Enum::KeystoneDoorFour: {
                auto is_open = il2cpp::unity::is_valid(icon->fields.IsCollectedState) && icon->fields.IsCollectedState->fields.m_value;
                return !is_open && csharp_bridge::check_ini("AlwaysShowKeystoneDoors") && (static_cast<NewFilters>(manager->fields.Filter) > NewFilters::Collectibles);
            }
            default:
                return false;
        }
    }

    enum class FilterResult {
        Show,
        ShowTransparent,
        Hide
    };

    FilterResult should_show_icon_with_current_filter(app::AreaMapIconManager* manager, app::RuntimeWorldMapIcon* icon) {
        if (icon == nullptr)
            return FilterResult::Hide;

        // Always show warps check
        if (should_always_show(manager, icon))
            return FilterResult::Show;

        const auto filter = static_cast<NewFilters>(manager->fields.Filter);
        // If we are in original filters then use the original function.
        if (filter <= NewFilters::Collectibles) {
            const auto is_custom_filter_icon = is_custom_filter_icon_state(icon->fields.IsCollectedState);
            if (is_custom_filter_icon)
                return FilterResult::Hide;

            // if our custom state is bigger or equal to expected value dont show.
            const auto it = extra_states.find(stringify_guid(icon->fields.Guid));
            if (it != extra_states.end()) {
                const auto value = it->second->custom.value < 0 ? 1.f : it->second->custom.value;
                if (it->second->custom.uber_state.get() >= value)
                    return FilterResult::Hide;
            }

            return AreaMapIconManager::IsIconShownByFilter(icon->fields.Icon, manager->fields.Filter) ? FilterResult::Show : FilterResult::Hide;
        } else if (filter == NewFilters::Spoilers) {
            if (icon->fields.IsCollectedState == nullptr)
                return FilterResult::Hide;

            const auto is_custom_filter_icon = is_custom_filter_icon_state(icon->fields.IsCollectedState);
            if (!is_custom_filter_icon)
                return FilterResult::Hide;

            auto it = custom_filter_icon_states.find(stringify_guid(icon->fields.Guid));
            if (it != custom_filter_icon_states.end())
                return FilterResult::Show;

            return FilterResult::Hide;
        } else if (filter == NewFilters::InLogic) {
            if (icon->fields.IsCollectedState == nullptr)
                return FilterResult::Hide;

            const auto is_custom_filter_icon = is_custom_filter_icon_state(icon->fields.IsCollectedState);
            if (is_custom_filter_icon) {
                auto it = custom_filter_icon_states.find(stringify_guid(icon->fields.Guid));
                if (it != custom_filter_icon_states.end()) {
                    const auto transparency = randomizer::settings::map_icon_transparency();
                    const auto value = it->second.uber_state.get();
                    // Hide pickups that have been collected.
                    const auto compare = it->second.value < 0 ? 1.f : it->second.value;
                    if (value >= compare)
                        return FilterResult::Hide;

                    if (csharp_bridge::filter_icon_show(static_cast<int>(it->second.uber_state.group()), it->second.uber_state.state(), static_cast<int>(it->second.value), it->second.comparison))
                        return FilterResult::Show;
                    else
                        return eps_equals(transparency, 0.f) ? FilterResult::Hide : FilterResult::ShowTransparent;
                }
            }
        }

        // Player filter will hide everything, as players are not part of the map.
        return FilterResult::Hide;
    }

    class renderer_ops {
    public:
        size_t operator()(app::Renderer* val) const {
            return reinterpret_cast<size_t>(val);
        }

        bool operator()(app::Renderer* val1, app::Renderer* val2) const {
            return val1 == val2;
        }
    };

    std::unordered_map<app::Renderer*, app::Color, renderer_ops, renderer_ops> original_color;
    void set_icon_opacity(app::RuntimeWorldMapIcon* icon, float alpha, bool grayscale) {
        if (!il2cpp::unity::is_valid(icon->fields.IconGameObject))
            return;

        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(icon->fields.IconGameObject, "UnityEngine", "Renderer");
        for (auto renderer : renderers) {
            auto it = original_color.find(renderer);
            if (it == original_color.end()) {
                auto color = UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor);
                original_color[renderer] = color;
                it = original_color.find(renderer);
            }

            auto color = it->second;
            color.a *= alpha;
            UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, color);
        }
    }

    void handle_show_toggle(app::RuntimeWorldMapIcon* icon, FilterResult result) {
        if (icon == nullptr)
            return;

        switch (result) {
            case FilterResult::Show: {
                RuntimeWorldMapIcon::Show(icon);
                set_icon_opacity(icon, 1.0f, false);
                break;
            }
            case FilterResult::ShowTransparent: {
                RuntimeWorldMapIcon::Show(icon);
                const auto transparency = randomizer::settings::map_icon_transparency();
                set_icon_opacity(icon, transparency, true);
                break;
            }
            default: {
                RuntimeWorldMapIcon::Hide(icon);
                break;
            }
        }
    }

    IL2CPP_INTERCEPT(AreaMapIconManager, void, ShowAreaIcons, (app::AreaMapIconManager * this_ptr)) {
        // Start ShowAreaIcons function.
        auto world = types::GameWorld::get_class()->static_fields->Instance;
        for (auto i = 0; i < world->fields.RuntimeAreas->fields._size; ++i) {
            auto runtime_area = world->fields.RuntimeAreas->fields._items->vector[i];
            for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j) {
                auto icon = runtime_area->fields.Icons->fields._items->vector[j];
                RuntimeWorldMapIcon::Hide(icon);
            }

            if (il2cpp::unity::is_valid(runtime_area->fields.Area)) {
                if (il2cpp::unity::is_valid(runtime_area->fields.Area->fields.VisitableCondition) &&
                    !il2cpp::invoke<app::Boolean__Boxed>(runtime_area->fields.Area->fields.VisitableCondition, "Validate", nullptr)->fields)
                    continue;

                for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j) {
                    auto icon = runtime_area->fields.Icons->fields._items->vector[j];
                    handle_show_toggle(icon, should_show_icon_with_current_filter(this_ptr, icon));
                }
            }
        }
    }

    app::AreaMapIconFilterFooterLabel create_filter(NewFilters filter, const std::string& message) {
        app::AreaMapIconFilterFooterLabel label{
            .Filter = static_cast<app::AreaMapIconFilter__Enum>(filter),
            .Footer = utils::create_message_provider("Filter: " + message),
        };
        return label;
    }

    bool ignore_filter_input = false;
    IL2CPP_INTERCEPT(AreaMapUI, void, set_IconFilter, (app::AreaMapUI * this_ptr, app::AreaMapIconFilter__Enum value)) {
        if (!ignore_filter_input)
            next::AreaMapUI::set_IconFilter(this_ptr, value);
    }

    void check_and_initialize_filter_labels(app::AreaMapIconManager* icon_manager) {
        if (il2cpp::is_assignable(icon_manager, types::AreaMapIconManager::get_class()) && icon_manager->fields.Labels->max_length < static_cast<int>(NewFilters::COUNT)) {
            auto arr = types::AreaMapIconFilterFooterLabel::create_array(static_cast<int>(NewFilters::COUNT));

            for (auto i = 0; i < static_cast<int>(app::AreaMapIconFilter__Enum::COUNT); ++i)
                arr->vector[i] = icon_manager->fields.Labels->vector[i];

            // Add extra labels.
            arr->vector[static_cast<int>(NewFilters::InLogic)] = create_filter(NewFilters::InLogic, "In Logic");
            arr->vector[static_cast<int>(NewFilters::Spoilers)] = create_filter(NewFilters::Spoilers, "Spoilers");
            arr->vector[static_cast<int>(NewFilters::Players)] = create_filter(NewFilters::Players, "Players");

            icon_manager->fields.Labels = arr;
        }
    }

    void cycle_filter(app::AreaMapUI* map) {
        auto icon_manager = map->fields._IconManager_k__BackingField;
        check_and_initialize_filter_labels(icon_manager);
        auto count = static_cast<int32_t>(NewFilters::COUNT);
        auto prev = static_cast<int32_t>(icon_manager->fields.Filter);
        current_filter = (prev + 1) % count;
        while (!csharp_bridge::filter_enabled(current_filter) && current_filter != prev)
            current_filter = (current_filter + 1) % count;

        AreaMapUI::set_IconFilter(map, static_cast<app::AreaMapIconFilter__Enum>(current_filter));
    }

    bool dirty_filter = false;
    std::atomic<bool> refresh = false;

    IL2CPP_INTERCEPT(AreaMapUI, void, Init, (app::AreaMapUI * this_ptr)) {
        next::AreaMapUI::Init(this_ptr);
        auto icon_manager = this_ptr->fields._IconManager_k__BackingField;
        check_and_initialize_filter_labels(icon_manager);

        if (start_in_logic_filter && !start_in_logic_filter_done_since_new_game && csharp_bridge::filter_enabled(static_cast<int>(NewFilters::InLogic))) {
            current_filter = static_cast<int>(NewFilters::InLogic);
            AreaMapUI::set_IconFilter(this_ptr, static_cast<app::AreaMapIconFilter__Enum>(NewFilters::InLogic));
            dirty_filter = true;
        }
    }

    IL2CPP_INTERCEPT(GameMapUI, void, NormalInput, (app::GameMapUI * this_ptr)) {
        ignore_filter_input = true;
        next::GameMapUI::NormalInput(this_ptr);
        ignore_filter_input = false;

        auto input_cmd = types::Input_Cmd::get_class();
        if (input_cmd->static_fields->MapFilter->fields.IsPressed && !input_cmd->static_fields->MapFilter->fields.WasPressed) {
            cycle_filter(this_ptr->fields.m_areaMap);
            dirty_filter = true;
        }

        if (dirty_filter) {
            GameMapUI::UpdateFilterText(this_ptr);
            GameMapUI::UpdateQuests(this_ptr);
            dirty_filter = false;
        }
    }

    IL2CPP_INTERCEPT(AreaMapUI, void, CycleFilter, (app::AreaMapUI * this_ptr)) {
        cycle_filter(this_ptr);
    }

    void on_area_map_open(GameEvent game_event, EventTiming timing) {
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        if (il2cpp::unity::is_valid(area_map->fields._PlayerPositionMarker_k__BackingField)) {
            auto color = multiplayer::get_local_player_color();
            if (color.r < 0.99f || color.g < 0.99f || color.b < 0.99f || color.a < 0.99f)
                utils::set_color(area_map->fields._PlayerPositionMarker_k__BackingField, color);
        }

        auto icon_manager = area_map->fields._IconManager_k__BackingField;
        auto count = static_cast<int32_t>(NewFilters::COUNT);
        auto prev = current_filter;
        if (!csharp_bridge::filter_enabled(current_filter)) {
            current_filter = (current_filter + 1) % count;
            while (!csharp_bridge::filter_enabled(current_filter) && current_filter != prev)
                current_filter = (current_filter + 1) % count;
        }

        AreaMapUI::set_IconFilter(area_map, static_cast<app::AreaMapIconFilter__Enum>(current_filter));
        dirty_filter = true;
    }

    void on_area_map_open(GameEvent game_event, EventTiming timing) {
        start_in_logic_filter_done_since_new_game = false;
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::Start, &on_area_map_open);
        game::event_bus().register_handler(GameEvent::NewGame, EventTiming::Start, &on_new_game);
    }

    CALL_ON_INIT(initialize);
} // namespace

INJECT_C_DLLEXPORT void remove_icon(app::GameWorldAreaID__Enum area, int id) {
    auto& area_header_icons = header_icons[area];
    auto it = area_header_icons.find(id);
    if (it == area_header_icons.end())
        return;

    if (initialized) {
        if (it->second.runtime_icon != nullptr) {
            RuntimeWorldMapIcon::Hide(it->second.runtime_icon);
            il2cpp::invoke(it->second.runtime_icon->fields.Area->fields.Icons, "Remove", it->second.runtime_icon);
        }
        if (it->second.spoiler_icon != nullptr) {
            RuntimeWorldMapIcon::Hide(it->second.spoiler_icon);
            il2cpp::invoke(it->second.spoiler_icon->fields.Area->fields.Icons, "Remove", it->second.spoiler_icon);
        }
    }

    header_icons[area].erase(id);
}

INJECT_C_DLLEXPORT void add_icon(app::GameWorldAreaID__Enum area, int id, app::WorldMapIconType__Enum icon, float x, float y, UberStateGroup group_id, int state_id, bool allow_teleport) {
    auto& area_header_icons = header_icons[area];
    if (area_header_icons.find(id) != area_header_icons.end())
        remove_icon(area, id);

    ExtraState state = { true, uber_states::UberState(group_id, state_id), Comparison::GreaterOrEquals, 1.f };
    state.valid = state.uber_state.valid();

    area_header_icons[id] = {
        icon,
        x,
        y,
        allow_teleport,
        ExtraIconDisplayCondition::Normal,
        false,
        L"",
        state,
        {}
    };

    if (initialized) {
        auto* game_world = types::GameWorld::get_class()->static_fields->Instance;
        for (auto i = 0; i < game_world->fields.RuntimeAreas->fields._size; ++i) {
            auto* runtime_area = game_world->fields.RuntimeAreas->fields._items->vector[i];
            if (runtime_area->fields.Area->fields.WorldMapAreaUniqueID == area) {
                auto& icon = area_header_icons[id];
                if (should_create(icon.creation, ExtraIconDisplayCondition::Normal))
                    icon_resolver(runtime_area, icon);
                if (should_create(icon.creation, ExtraIconDisplayCondition::Spoiler))
                    spoiler_resolver(runtime_area, icon);

                auto* icon_manager = types::AreaMapUI::get_class()
                                             ->static_fields->Instance->fields._IconManager_k__BackingField;

                handle_show_toggle(icon.runtime_icon, should_show_icon_with_current_filter(icon_manager, icon.runtime_icon));
                break;
            }
        }
    }
}

INJECT_C_DLLEXPORT void set_icon_label(app::GameWorldAreaID__Enum area, int id, const wchar_t* label) {
    auto& area_header_icons = header_icons[area];
    auto it = area_header_icons.find(id);
    if (it != area_header_icons.end()) {
        it->second.custom_label = label;
        it->second.use_custom_label = !it->second.custom_label.empty();
    } else
        return; // TODO: Add warning
}

INJECT_C_DLLEXPORT void clear_icons() {
    if (initialized) {
        for (auto& area : header_icons) {
            for (auto& icon : area.second) {
                if (icon.second.runtime_icon != nullptr) {
                    RuntimeWorldMapIcon::Hide(icon.second.runtime_icon);
                    il2cpp::invoke(icon.second.runtime_icon->fields.Area->fields.Icons, "Remove", icon.second.runtime_icon);
                }
                if (icon.second.spoiler_icon != nullptr) {
                    RuntimeWorldMapIcon::Hide(icon.second.spoiler_icon);
                    il2cpp::invoke(icon.second.spoiler_icon->fields.Area->fields.Icons, "Remove", icon.second.spoiler_icon);
                }
            }
        }
    }

    header_icons.clear();
}

INJECT_C_DLLEXPORT void refresh_map() {
    if (game::ui::area_map_open()) {
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        AreaMapIconManager::ShowAreaIcons(area_map->fields._IconManager_k__BackingField);
    }
}

INJECT_C_DLLEXPORT void set_start_in_logic_filter(bool value) {
    start_in_logic_filter = value;
}
