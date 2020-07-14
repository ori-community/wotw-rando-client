#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>

#include <map>
#include <random>

namespace
{
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

    uint32_t create_icon(app::WorldMapIconType__Enum type, float x, float y)
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
        icon->fields.Condition = nullptr;
        icon->fields.State = nullptr;
        icon->fields.Position = app::Vector2{ x, y };
        icon->fields.IsSecret = false;
        icon->fields.Icon = type;
        icon->fields.Guid = icon_guid;
        return il2cpp::gchandle_new(icon, false);
    }

    std::map<app::GameWorldAreaID__Enum, std::vector<uint32_t>> extra_icons;
    void initialize()
    {
        //extra_icons[app::GameWorldAreaID__Enum_InkwaterMarsh] = {
        //    create_icon(app::WorldMapIconType__Enum_Keystone, -810.9f, -4320.f),
        //    create_icon(app::WorldMapIconType__Enum_Keystone, -815.9f, -4320.f),
        //    create_icon(app::WorldMapIconType__Enum_Keystone, -820.9f, -4320.f),
        //    create_icon(app::WorldMapIconType__Enum_Keystone, -827.9f, -4320.f),
        //};
    }

    CALL_ON_INIT(initialize);

    IL2CPP_INTERCEPT(, GameWorld, void, OnGameReset, (app::GameWorld* this_ptr)) {
        GameWorld::OnGameReset(this_ptr);
        for (auto i = 0; i < this_ptr->fields.RuntimeAreas->fields._size; ++i)
        {
            auto area = this_ptr->fields.RuntimeAreas->fields._items->vector[i];
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
    }
}
