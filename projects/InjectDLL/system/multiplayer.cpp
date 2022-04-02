#include <multiplayer.h>
#include <macros.h>
#include <dll_main.h>
#include <dev/object_visualizer.h>
#include <enums/layer.h>
#include <system/messages.h>
#include <utils/misc.h>
#include <utils/position_converter.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>
#include <fstream>

using namespace modloader;

INJECT_C_DLLEXPORT void add_player(const wchar_t* id, const wchar_t* name, multiplayer::PlayerIcon icon);
INJECT_C_DLLEXPORT void set_player_icon(const wchar_t* id, multiplayer::PlayerIcon icon);
INJECT_C_DLLEXPORT void set_player_color(const wchar_t* id, float r, float g, float b, float a);
INJECT_C_DLLEXPORT void set_local_player_color(float r, float g, float b, float a);
INJECT_C_DLLEXPORT void clear_players();
INJECT_C_DLLEXPORT void remove_player(const wchar_t* id);
INJECT_C_DLLEXPORT void update_player_position(const wchar_t* id, float x, float y);
INJECT_C_DLLEXPORT app::Vector2 get_player_position(const wchar_t* id);
INJECT_C_DLLEXPORT void set_player_online(const wchar_t* id, bool online);

namespace multiplayer
{
    constexpr float TEXT_OFFSET = 1.2f;
    constexpr float TEXT_SCALE = 4.0f;
    constexpr float SPRITE_OFFSET = 0.4f;
    constexpr float SPRITE_SCALE = 1.6f;

    std::vector<PlayerInfo> players;
    std::unordered_map<std::wstring, int> player_map;
    app::Color local_player_color = { 1.0f, 1.0f, 1.0f, 1.0f };

    std::vector<PlayerInfo> const& get_players()
    {
        return players;
    }

    PlayerInfo const* get_player(std::wstring str)
    {
        auto it = multiplayer::player_map.find(str);
        if (it == player_map.end())
            return nullptr;
        
        if (it->second >= players.size())
            return nullptr;

        return &players[it->second];
    }

    app::Color const& get_local_player_color()
    {
        return local_player_color;
    }

    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_position, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localPosition, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localPosition, (app::Transform* this_ptr, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localScale, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_root, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_parent, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));

    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (app::Object* object), (UnityEngine:Object));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(UnityEngine, GameObject, void, set_layer, (app::GameObject* this_ptr, int value));

    IL2CPP_BINDING(, IconPlacementScaler, void, PlaceIcon, (app::IconPlacementScaler* this_ptr, app::GameObject* icon, app::Vector3* location, bool is_teleportable));
    IL2CPP_BINDING(, IconPlacementScaler, void, RemoveIcon, (app::IconPlacementScaler* this_ptr, app::GameObject* icon));

    constexpr int DOT_COUNT = 64;
    constexpr float DOT_TIMEOUT = 0.25f;
    constexpr float DOT_MIN_DISTANCE = 2.0f;
    void initialize_dots(PlayerInfo& player)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        while (player.dots.size() <= DOT_COUNT)
        {
            auto& dot = player.dots.emplace_back();
            dot.dot = reinterpret_cast<app::GameObject*>(Object::Instantiate(
                reinterpret_cast<app::Object*>(area_map->fields.TrailPrefab)));
            dot.transform = il2cpp::unity::get_transform(dot.dot);
            dot.renderer = il2cpp::unity::get_components<app::Renderer>(
                il2cpp::unity::get_children(dot.dot)[0], "UnityEngine", "Renderer")[0];
            GameObject::SetActive(dot.dot, player.map_visible);
            app::Vector3 pos{ player.position.x, player.position.y, 0.0f };
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, &pos, false);
        }

        player.previous_dot_position = player.position;
    }
    
    void update_dot_colors(PlayerInfo& player)
    {
        if (player.dots.size() != DOT_COUNT)
            return;

        app::Color color = player.color;
        color.r = (color.r + 1.0f) / 2.0f;
        color.g = (color.g + 1.0f) / 2.0f;
        color.b = (color.b + 1.0f) / 2.0f;

        const int HALF_DOTS = DOT_COUNT / 2;
        for (int i = 0; i < HALF_DOTS; ++i)
        {
            color.a = static_cast<float>(i) / HALF_DOTS;
            auto& dot = player.dots[(player.next_dot_index + HALF_DOTS + i) % DOT_COUNT];
            shaders::UberShaderAPI::SetColor(dot.renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);
        }
    }

    void add_dot(PlayerInfo& player)
    {
        if (player.dots.size() != DOT_COUNT)
            return;

        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;

        auto& dot = player.dots[player.next_dot_index];
        GameObject::SetActive(dot.dot, player.map_visible);
        app::Vector3 pos{ player.position.x, player.position.y, 0.0f };
        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, &pos, false);
    
        update_dot_colors(player);

        player.previous_dot_position = player.position;
        player.time_until_next_dot = DOT_TIMEOUT;
        player.next_dot_index = (player.next_dot_index + 1) % DOT_COUNT;
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_fixedDeltaTime, ());
    bool should_make_dot(PlayerInfo& player)
    {
        player.time_until_next_dot -= TimeUtility::get_fixedDeltaTime();
        auto dx = player.previous_dot_position.x - player.position.x;
        auto dy = player.previous_dot_position.y - player.position.y;
        auto squared_distance = dx * dx + dy * dy;
        return squared_distance >= DOT_MIN_DISTANCE * DOT_MIN_DISTANCE && player.time_until_next_dot < 0.0f;
    }

    void set_layer_recursive(app::GameObject* obj, int layer)
    {
        GameObject::set_layer(obj, layer);
        for (auto child : il2cpp::unity::get_children(obj))
            set_layer_recursive(child, layer);
    }

    IL2CPP_BINDING_OVERLOAD(CatlikeCoding.TextBox, TextBox, void, SetText, (app::TextBox* this_ptr, app::String* text), (System:String));
    IL2CPP_BINDING(CatlikeCoding.TextBox, TextBox, void, RenderText, (app::TextBox* this_ptr));
    PlayerInfo::Icon create_avatar_icon(PlayerInfo const& info, int layer)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        PlayerInfo::Icon icon;
        switch (info.icon)
        {
        case PlayerIcon::Kii:
        {
            icon.root = il2cpp::unity::instantiate_object(icons->fields.Siira);
            icon.icon = il2cpp::unity::find_child(icon.root, "npcTreeKeeperTraderMapIcon");
            icon.text = il2cpp::unity::find_child(icon.root, "IconLabelPrefab");
            GameObject::SetActive(il2cpp::unity::find_child(icon.root, "questObjective2MapIcon"), false);
            break;
        }
        default: // Moki
        {
            icon.root = il2cpp::unity::instantiate_object(icons->fields.Moki);
            icon.icon = il2cpp::unity::find_child(icon.root, "npcMokiMapIcon");
            icon.text = il2cpp::unity::find_child(icon.root, "IconLabelPrefab");
            GameObject::SetActive(il2cpp::unity::find_child(icon.root, "questObjective2MapIcon"), false);
            break;
        }
        }

        auto text_box = il2cpp::unity::get_component<app::TextBox>(icon.text, "CatlikeCoding.TextBox", "TextBox");
        GameObject::SetActive(icon.text, true);
        TextBox::SetText(text_box, il2cpp::string_new(info.name));
        TextBox::RenderText(text_box);
        set_layer_recursive(icon.root, layer);

        icon.handle = il2cpp::gchandle_new(icon.root, false);
        return icon;
    }

    void set_map_position(PlayerInfo& info)
    {
        app::Vector3 pos{ info.position.x, info.position.y, 0.f };
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, info.map_avatar.root, &pos, false);
    }

    void create_icons(PlayerInfo& info)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map))
            return;

        // Avatar
        if (info.avatar.handle == 0)
        {
            info.avatar = create_avatar_icon(info, static_cast<int>(Layer::Sein));
            GameObject::SetActive(info.avatar.root, info.visible);
            app::Vector3 pos{ info.position.x, info.position.y, 0.f };
            auto transform = il2cpp::unity::get_transform(info.avatar.root);
            Transform::set_position(transform, &pos);
            utils::set_color(info.avatar.icon, info.color, false);

            auto text_box = il2cpp::unity::get_component<app::TextBox>(info.avatar.text, "CatlikeCoding.TextBox", "TextBox");
            text_box->fields.color = { 1.f, 1.f, 1.f, 1.f };

            pos = { 0.f, SPRITE_OFFSET, 0.f};
            transform = il2cpp::unity::get_transform(info.avatar.icon);
            Transform::set_localPosition(transform, &pos);
            auto icon_transform = il2cpp::unity::get_transform(info.avatar.icon);
            app::Vector3 scale{ SPRITE_SCALE, SPRITE_SCALE, 1.0f };
            Transform::set_localScale(icon_transform, &scale);

            pos = { 0.f, TEXT_OFFSET, 0.f };
            transform = il2cpp::unity::get_transform(info.avatar.text);
            Transform::set_localPosition(transform, &pos);
            app::Vector3 text_scale = { TEXT_SCALE, TEXT_SCALE, 2.f };
            transform = il2cpp::unity::get_transform(info.avatar.text);
            Transform::set_localScale(transform, &text_scale);
        }

        // Map Icon
        if (info.map_avatar.handle == 0)
        {
            info.map_avatar = create_avatar_icon(info, static_cast<int>(Layer::UI));
            GameObject::SetActive(info.map_avatar.root, info.map_visible);
            
            auto transform = il2cpp::unity::get_transform(info.map_avatar.icon);
            auto scale = Transform::get_localScale(transform);
            info.map_scale = scale.x;
            utils::set_color(info.map_avatar.icon, info.color, false);
            transform = il2cpp::unity::get_transform(info.map_avatar.icon);
            auto pos = Transform::get_localPosition(transform);
            pos.z = -0.001f;
            Transform::set_localPosition(transform, &pos);
            set_map_position(info);
        }
    }

    void create_avatar(PlayerInfo& info)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map))
            return;

        // Icons
        create_icons(info);

        // Map Dots
        initialize_dots(info);
    }

    void update_avatar_color(PlayerInfo& info)
    {
        if (info.avatar.handle != 0 && il2cpp::unity::is_valid(info.avatar.icon))
            utils::set_color(info.avatar.icon, info.color, false);

        if (info.map_avatar.handle != 0 && il2cpp::unity::is_valid(info.map_avatar.icon))
            utils::set_color(info.map_avatar.icon, info.color, false);

        update_dot_colors(info);
    }

    void destroy_icons(PlayerInfo& info)
    {
        if (info.avatar.handle != 0)
        {
            auto target = il2cpp::gchandle_target(info.avatar.handle);
            if (il2cpp::unity::is_valid(target))
                il2cpp::unity::destroy_object(target);

            il2cpp::gchandle_free(info.avatar.handle);
            info.avatar = {};
        }

        if (info.map_avatar.handle != 0)
        {
            auto target = il2cpp::gchandle_target(info.map_avatar.handle);
            if (il2cpp::unity::is_valid(target))
            {
                auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
                IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, info.map_avatar.root);
                il2cpp::unity::destroy_object(target);
            }

            il2cpp::gchandle_free(info.map_avatar.handle);
            info.map_avatar = {};
        }
    }

    void destroy_avatar(PlayerInfo& info)
    {
        destroy_icons(info);
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        for (auto const& dot : info.dots)
        {
            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, dot.dot);
            il2cpp::unity::destroy_object(dot.dot);
        }

        info.dots.clear();
    }

    float lerp(float a, float b, float weight) {
        return a * (1 - weight) + b * weight;
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    void update_avatar_facing(PlayerInfo& info)
    {
        if (info.avatar.handle != 0)
        {
            auto transform = il2cpp::unity::get_transform(info.avatar.icon);
            app::Vector3 scale = Transform::get_localScale(transform);
            scale.x = lerp(scale.x, info.facing * SPRITE_SCALE, 20.0f * TimeUtility::get_deltaTime());
            Transform::set_localScale(transform, &scale);
        }

        if (info.map_avatar.handle != 0)
        {
            auto transform = il2cpp::unity::get_transform(info.map_avatar.icon);
            app::Vector3 scale = Transform::get_localScale(transform);
            scale.x = lerp(scale.x, info.facing * info.map_scale, 20.0f * TimeUtility::get_deltaTime());
            Transform::set_localScale(transform, &scale);
        }
    }

    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WeaponmasterScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_BuilderScreenVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_GardenerScreenVisible, ());
    IL2CPP_BINDING(, MenuScreenManager, bool, IsVisible, (app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen));
    bool should_show_avatar()
    {
        auto ui = reinterpret_cast<app::UI__Class*>(il2cpp::get_class("Game", "UI"));
        if (MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_WorldMap) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_EquipmentWheel) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_ShardsShop) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_BuilderProjects) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_GardenerProjects) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_Loremaster) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_RaceScreen) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_MapmakerShop) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_ShardUpgradeShop) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_Stats))
            return false;

        if (is_area_map_open() ||
            UI::get_MainMenuVisible() ||
            UI::get_WorldMapVisible() ||
            UI::get_ShardShopVisible() ||
            UI::get_WeaponmasterScreenVisible() ||
            UI::get_BuilderScreenVisible() ||
            UI::get_GardenerScreenVisible())
            return false;

        auto sein = il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
        if (sein == nullptr)
            return false;

        return true;
    }

    IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr)) {
        GameController::Update(this_ptr);
        auto should_show = should_show_avatar();
        for (auto& player : players)
        {
            if (player.avatar.handle == 0 || player.map_avatar.handle == 0)
                multiplayer::create_avatar(player);

            update_avatar_facing(player);

            // Visibility toggles.
            bool visible = player.online && should_show;
            if (visible != player.visible)
            {
                if (player.avatar.handle != 0)
                    GameObject::SetActive(player.avatar.root, visible);

                player.visible = visible;
            }

            bool map_visible = player.online && is_area_map_open();
            if (map_visible != player.map_visible)
            {
                if (player.map_avatar.handle != 0)
                    GameObject::SetActive(player.map_avatar.root, map_visible);

                for (auto& dot : player.dots)
                    GameObject::SetActive(dot.dot, map_visible);

                player.map_visible = map_visible;
            }
        }
    }

    void spawn_player(std::string const& name, std::vector<console::CommandParam> const& params)
    {
        std::wstring id = L"test";
        app::Vector2 position{0};
        for (auto const& param : params)
        {
            if (param.name == "x")
                position.x = std::stof(param.value);
            else if (param.name == "y")
                position.y = std::stof(param.value);
            else if (param.name == "id")
                id = convert_string_to_wstring(param.value);
        }

        add_player(id.c_str(), L"Its a me", multiplayer::PlayerIcon::Moki);
        update_player_position(id.c_str(), position.x, position.y);
        set_player_color(id.c_str(), 1.f, 0.1f, 0.1f, 1.f);
        set_player_online(id.c_str(), true);
    }

    void show_icon_prefabs(std::string const& name, std::vector<console::CommandParam> const& params)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        dev::Visualizer v;
        dev::visualize::visualize_object(v, icons->fields.Moki);
        dev::visualize::visualize_object(v, icons->fields.Siira);
        console::console_send(dev::visualize::get_string(v));
    }

    void show_players(std::string const& name, std::vector<console::CommandParam> const& params)
    {
        for (auto const& player : players)
        {
            console::console_send("_______________________");
            auto id = convert_wstring_to_string(player.id);
            console::console_send(format("player: %s", id.c_str()));
            console::console_send(format("position: %d, %d", player.position.x, player.position.y));
            console::console_send(format("visible: %d", player.visible));
            console::console_send(format("map_visible: %d", player.map_visible));
            console::console_send(format("online: %d", player.online));

            dev::Visualizer v;
            if (player.avatar.handle != 0)
                dev::visualize::visualize_object(v, player.avatar.root);
            if (player.map_avatar.handle != 0)
                dev::visualize::visualize_object(v, player.map_avatar.root);
            if (player.avatar.handle != 0 || player.map_avatar.handle != 0)
                console::console_send(dev::visualize::get_string(v));
        }
    }

    void initialize()
    {
        console::register_command({ "multiplayer", "show_players" }, &show_players, true);
        console::register_command({ "multiplayer", "spawn_player" }, &spawn_player, true);
        console::register_command({ "multiplayer", "show_icon_prefabs" }, &show_icon_prefabs, true);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void add_player(const wchar_t* id, const wchar_t* name, multiplayer::PlayerIcon icon)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        warn("multiplayer", "duplicate player added, updating instead.");
        auto& info = multiplayer::players[it->second];
        info.name = name;
        info.online = true;
        info.color = { 1.0f, 1.0f, 1.0f, 1.0f};
        info.icon = icon;
        multiplayer::destroy_icons(info);
        multiplayer::create_icons(info);
    }
    else
    {
        multiplayer::PlayerInfo& info = multiplayer::players.emplace_back();
        info.id = id;
        info.name = name;
        info.position = { 0 };
        info.online = true;
        info.color = { 1.0f, 1.0f, 1.0f, 1.0f };
        info.icon = icon;
        multiplayer::player_map[id] = multiplayer::players.size() - 1;
        multiplayer::create_avatar(info);
    }
}

INJECT_C_DLLEXPORT void set_player_icon(const wchar_t* id, multiplayer::PlayerIcon icon)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        auto& info = multiplayer::players[it->second];
        if (info.icon == icon)
            return;

        info.icon = icon;
        multiplayer::destroy_icons(info);
        multiplayer::create_icons(info);
    }
    else
        warn("multiplayer", "setting player avatar on missing player, skipping.");
}

INJECT_C_DLLEXPORT void set_player_color(const wchar_t* id, float r, float g, float b, float a)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        auto& info = multiplayer::players[it->second];
        info.color = { r, g, b, a };
        multiplayer::update_avatar_color(info);
    }
    else
        warn("multiplayer", "setting player color on missing player, skipping.");
}

INJECT_C_DLLEXPORT void set_local_player_color(float r, float g, float b, float a)
{
    multiplayer::local_player_color = { r, g, b, a };
}

INJECT_C_DLLEXPORT void clear_players()
{
    for (auto& player : multiplayer::players)
        multiplayer::destroy_avatar(player);

    multiplayer::players.clear();
    multiplayer::player_map.clear();
    multiplayer::local_player_color = { 1.0f, 1.0f, 1.0f, 1.0f };
}

INJECT_C_DLLEXPORT void remove_player(const wchar_t* id)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        auto player_it = multiplayer::players.begin() + it->second;
        multiplayer::destroy_avatar(*player_it);
        multiplayer::player_map.erase(player_it->id);
        player_it = multiplayer::players.erase(player_it);
        for (; player_it != multiplayer::players.end(); ++player_it)
        {
            auto index = multiplayer::player_map[player_it->id] - 1;
            multiplayer::player_map[player_it->id] = index;
        }
    }
    else
        warn("multiplayer", "Failed to find player to remove.");
}

INJECT_C_DLLEXPORT void update_player_position(const wchar_t* id, float x, float y)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        if (abs(x - info.last_facing_pos) > 0.1f)
        {
            info.facing = x < info.last_facing_pos ? 1 : -1;
            info.last_facing_pos = x;
        }

        info.position.x = x;
        info.position.y = y;

        // Avatar
        if (info.avatar.handle != 0)
        {
            auto transform = il2cpp::unity::get_transform(info.avatar.root);
            app::Vector3 pos { info.position.x, info.position.y, 0.0f };
            multiplayer::Transform::set_position(transform, &pos);
        }

        // Map Avatar
        if (info.map_avatar.handle != 0)
            set_map_position(info);

        if (info.online && multiplayer::should_make_dot(info))
            multiplayer::add_dot(info);
    }
}

INJECT_C_DLLEXPORT app::Vector2 get_player_position(const wchar_t* id)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
        return multiplayer::players[it->second].position;
    else
        return app::Vector2{ 0.f, 0.f };
}

INJECT_C_DLLEXPORT void set_player_online(const wchar_t* id, bool online)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        info.online = online;
    }
}
