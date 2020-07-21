#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>
#include <dev/dev_commands.h>
#include <uber_states/uber_state_manager.h>

#include <unordered_map>
#include <random>

namespace
{
    const std::unordered_map<std::string, std::pair<int, int>> TREE_OVERRIDES = {
        { "64590ed6, 476b6885, 8993bbb3, 7d01ee6d", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_DoubleJump) },
        { "2093882f, 41284e46, 284565b7, 3b59fe87", std::make_pair(uber_states::constants::TREE_GROUP_ID, app::AbilityType__Enum_Regenerate) },
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

    std::mt19937 generator(40500);
    NAMED_IL2CPP_BINDING(, RuntimeWorldMapIcon, void, .ctor, ctor, (app::RuntimeWorldMapIcon* this_ptr, app::GameWorldArea_WorldMapIcon* icon, app::RuntimeGameWorldArea* area));
    NAMED_IL2CPP_BINDING(, MoonGuid, void, .ctor, ctor, (app::MoonGuid* icon, int a, int b, int c, int d));

    // For some stupid reason they set icons to WorldMapIconType__Enum_Invisible when a pickup is picked up...
    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, void, Show, (app::RuntimeWorldMapIcon* this_ptr)) {
        if (this_ptr->fields.Icon == app::WorldMapIconType__Enum_Invisible)
        {
            auto base_icons = this_ptr->fields.Area->fields.Area->fields.Icons;
            for (auto i = 0; i < base_icons->fields._size; ++i)
            {
                auto icon = base_icons->fields._items->vector[i];
                if (icon->fields.Guid->fields.A == this_ptr->fields.Guid->fields.A &&
                    icon->fields.Guid->fields.B == this_ptr->fields.Guid->fields.B &&
                    icon->fields.Guid->fields.C == this_ptr->fields.Guid->fields.C &&
                    icon->fields.Guid->fields.D == this_ptr->fields.Guid->fields.D)
                {
                    this_ptr->fields.Icon = icon->fields.Icon;
                }
            }
        }

        RuntimeWorldMapIcon::Show(this_ptr);
    }

    uint32_t create_icon(app::WorldMapIconType__Enum type, float x, float y, app::SerializedBooleanUberState* collected = nullptr, app::ConditionUberState* condition = nullptr)
    {
        auto icon_guid = il2cpp::create_object<app::MoonGuid>("", "MoonGuid");
        MoonGuid::ctor(
            icon_guid,
            generator(),
            generator(),
            generator(),
            generator()
        );

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
                RuntimeWorldMapIcon::Show(icon);
            }
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
}
