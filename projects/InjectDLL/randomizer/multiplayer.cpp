#include <randomizer/multiplayer.h>

#include <dev/object_visualizer.h>
#include <enums/layer.h>
#include <game/game.h>
#include <game/player.h>
#include <game/ui.h>
#include <macros.h>
#include <utils/misc.h>

#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Il2CppModLoader/app/methods/IconPlacementScaler.h>
#include <Il2CppModLoader/app/methods/TimeUtility.h>
#include <Il2CppModLoader/app/methods/UberShaderAPI.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Object.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/il2cpp_math.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

#include <unordered_map>

using namespace modloader;
using namespace modloader::win;
using namespace app::methods;
using namespace app::methods::UnityEngine;
using namespace app::methods::CatlikeCoding::TextBox;

INJECT_C_DLLEXPORT void add_player(const wchar_t* id, const wchar_t* name, multiplayer::PlayerIcon icon);
INJECT_C_DLLEXPORT void set_player_icon(const wchar_t* id, multiplayer::PlayerIcon icon);
INJECT_C_DLLEXPORT void set_player_color(const wchar_t* id, float r, float g, float b, float a);
INJECT_C_DLLEXPORT void set_player_visibility(const wchar_t* id, bool world, bool map);
INJECT_C_DLLEXPORT void set_local_player_color(float r, float g, float b, float a);
INJECT_C_DLLEXPORT void clear_players();
INJECT_C_DLLEXPORT void remove_player(const wchar_t* id);
INJECT_C_DLLEXPORT void update_player_position(const wchar_t* id, float x, float y);
INJECT_C_DLLEXPORT void set_player_online(const wchar_t* id, bool online);

namespace multiplayer {
    constexpr float TEXT_OFFSET = 1.2f;
    constexpr float TEXT_SCALE = 4.0f;
    constexpr float SPRITE_OFFSET = 0.4f;
    constexpr float SPRITE_SCALE = 1.6f;
    constexpr float MAP_SPRITE_SCALE = 0.6f;
    constexpr float MAX_EXTRAPOLATE_TIME = 0.3f;
    constexpr float MAX_EXTRAPOLATE_DISTANCE_SQUARED = 25.f;

    std::vector<PlayerInfo> players;
    std::unordered_map<std::wstring, int> player_map;
    app::Color local_player_color = { 1.0f, 1.0f, 1.0f, 1.0f };

    std::vector<PlayerInfo> const& get_players() {
        return players;
    }

    PlayerInfo const* get_player(std::wstring str) {
        auto it = multiplayer::player_map.find(str);
        if (it == player_map.end())
            return nullptr;

        if (it->second >= players.size())
            return nullptr;

        return &players[it->second];
    }

    app::Color const& get_local_player_color() {
        return local_player_color;
    }

    constexpr int DOT_COUNT = 64;
    constexpr float DOT_TIMEOUT = 0.25f;
    constexpr float DOT_MIN_DISTANCE = 2.0f;
    void initialize_dots(PlayerInfo& player) {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        while (player.dots.size() <= DOT_COUNT) {
            auto& dot = player.dots.emplace_back();
            dot.dot = reinterpret_cast<app::GameObject*>(Object::Instantiate_3(reinterpret_cast<app::Object_1*>(area_map->fields.TrailPrefab)));
            dot.transform = il2cpp::unity::get_transform(dot.dot);
            dot.renderer = il2cpp::unity::get_components<app::Renderer>(
                    il2cpp::unity::get_children(dot.dot)[0], "UnityEngine", "Renderer"
            )[0];
            il2cpp::unity::set_active(dot.dot, player.map_avatar.visible);
            app::Vector3 pos{ player.map_avatar.position.x, player.map_avatar.position.y, 0.0f };
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, pos, false);
        }

        player.previous_dot_position = player.map_avatar.position;
    }

    void update_dot_colors(PlayerInfo& player) {
        if (player.dots.size() != DOT_COUNT)
            return;

        app::Color color = player.color;
        color.r = (color.r + 1.0f) / 2.0f;
        color.g = (color.g + 1.0f) / 2.0f;
        color.b = (color.b + 1.0f) / 2.0f;

        const int HALF_DOTS = DOT_COUNT / 2;
        for (int i = 0; i < HALF_DOTS; ++i) {
            color.a = static_cast<float>(i) / HALF_DOTS;
            auto& dot = player.dots[(player.next_dot_index + HALF_DOTS + i) % DOT_COUNT];
            UberShaderAPI::SetColor_1(dot.renderer, app::UberShaderProperty_Color__Enum::MainColor, color);
        }
    }

    void add_dot(PlayerInfo& player) {
        if (player.dots.size() != DOT_COUNT)
            return;

        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;

        auto& dot = player.dots[player.next_dot_index];
        il2cpp::unity::set_active(dot.dot, player.map_avatar.visible);
        app::Vector3 pos{ player.map_avatar.position.x, player.map_avatar.position.y, 0.0f };
        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, pos, false);

        update_dot_colors(player);

        player.previous_dot_position = player.map_avatar.position;
        player.time_until_next_dot = DOT_TIMEOUT;
        player.next_dot_index = (player.next_dot_index + 1) % DOT_COUNT;
    }

    bool should_make_dot(PlayerInfo& player) {
        player.time_until_next_dot -= TimeUtility::get_fixedDeltaTime();
        auto dx = player.previous_dot_position.x - player.map_avatar.position.x;
        auto dy = player.previous_dot_position.y - player.map_avatar.position.y;
        auto squared_distance = dx * dx + dy * dy;
        return squared_distance >= DOT_MIN_DISTANCE * DOT_MIN_DISTANCE && player.time_until_next_dot < 0.0f;
    }

    void set_layer_recursive(app::GameObject* obj, int layer) {
        GameObject::set_layer(obj, layer);
        for (auto child : il2cpp::unity::get_children(obj))
            set_layer_recursive(child, layer);
    }

    void set_avatar_active(PlayerInfo& info, PlayerInfo::Icon& icon, bool value) {
        il2cpp::unity::set_active(icon.root, value);
        if (value) {
            auto text_box = il2cpp::unity::get_component<app::TextBox>(icon.text, "CatlikeCoding.TextBox", "TextBox");
            if (info.name_handle == 0)
                info.name_handle = il2cpp::gchandle_new(il2cpp::string_new(info.name), false);

            TextBox::SetText_1(text_box, il2cpp::gchandle_target<app::String>(info.name_handle));
            TextBox::RenderText(text_box);
        }
    }

    void apply_avatar_position(PlayerInfo& info) {
        if (info.world_avatar.handle != 0) {
            auto transform = il2cpp::unity::get_transform(info.world_avatar.root);
            app::Vector3 pos{ info.world_avatar.position.x, info.world_avatar.position.y, 0.0f };
            Transform::set_position(transform, pos);
        }

        if (info.map_avatar.handle != 0) {
            app::Vector3 pos{ info.map_avatar.position.x, info.map_avatar.position.y, 0.f };
            auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
            if (il2cpp::unity::is_valid(area_map))
                IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, info.map_avatar.root, pos, false);
        }
    }

    PlayerInfo::Icon create_avatar_icon(std::wstring postfix, PlayerInfo const& info, int layer) {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        PlayerInfo::Icon icon;
        switch (info.icon) {
            case PlayerIcon::Kii: {
                icon.root = il2cpp::unity::instantiate_object(icons->fields.Siira);
                icon.icon = il2cpp::unity::find_child(icon.root, "npcTreeKeeperTraderMapIcon");
                icon.text = il2cpp::unity::find_child(icon.root, "IconLabelPrefab");
                il2cpp::unity::set_active(il2cpp::unity::find_child(icon.root, "questObjective2MapIcon"), false);
                break;
            }
            default: // Moki
            {
                icon.root = il2cpp::unity::instantiate_object(icons->fields.Moki);
                icon.icon = il2cpp::unity::find_child(icon.root, "npcMokiMapIcon");
                icon.text = il2cpp::unity::find_child(icon.root, "IconLabelPrefab");
                il2cpp::unity::set_active(il2cpp::unity::find_child(icon.root, "questObjective2MapIcon"), false);
                break;
            }
        }

        il2cpp::invoke(icon.root, "set_name", il2cpp::string_new(info.id + postfix));
        il2cpp::unity::set_active(icon.text, true);
        auto area_map_icon = il2cpp::unity::get_component(icon.root, "", "AreaMapIcon");
        if (area_map_icon != nullptr)
            il2cpp::unity::destroy_object(area_map_icon);

        set_layer_recursive(icon.root, layer);
        icon.handle = il2cpp::gchandle_new(icon.root, false);
        game::add_to_container(game::RandoContainer::Multiplayer, icon.root);
        return icon;
    }

    void create_icons(PlayerInfo& info) {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map))
            return;

        // Avatar
        if (info.world_avatar.handle == 0) {
            info.world_avatar = create_avatar_icon(L"_world", info, static_cast<int>(Layer::Sein));
            set_avatar_active(info, info.world_avatar, info.world_avatar.visible);
            app::Vector3 pos{ info.world_avatar.position.x, info.world_avatar.position.y, 0.f };
            auto transform = il2cpp::unity::get_transform(info.world_avatar.root);
            Transform::set_position(transform, pos);
            utils::set_color(info.world_avatar.icon, info.color, false);

            auto text_box = il2cpp::unity::get_component<app::TextBox>(info.world_avatar.text, "CatlikeCoding.TextBox", "TextBox");
            text_box->fields.color = { 1.f, 1.f, 1.f, 1.f };

            pos = { 0.f, SPRITE_OFFSET, 0.f };
            transform = il2cpp::unity::get_transform(info.world_avatar.icon);
            Transform::set_localPosition(transform, pos);
            app::Vector3 scale{ SPRITE_SCALE, SPRITE_SCALE, 1.0f };
            Transform::set_localScale(transform, scale);

            pos = { 0.f, TEXT_OFFSET, 0.f };
            transform = il2cpp::unity::get_transform(info.world_avatar.text);
            Transform::set_localPosition(transform, pos);
            app::Vector3 text_scale = { TEXT_SCALE, TEXT_SCALE, 2.f };
            Transform::set_localScale(transform, text_scale);
        }

        // Map Icon
        if (info.map_avatar.handle == 0) {
            info.map_avatar = create_avatar_icon(L"_map", info, static_cast<int>(Layer::UI));
            set_avatar_active(info, info.world_avatar, info.world_avatar.visible);

            auto transform = il2cpp::unity::get_transform(info.map_avatar.icon);
            utils::set_color(info.map_avatar.icon, info.color, false);
            app::Vector3 scale{ MAP_SPRITE_SCALE, MAP_SPRITE_SCALE, 1.0f };
            Transform::set_localScale(transform, scale);
            auto pos = Transform::get_localPosition(transform);
            pos.z = -0.004f;
            Transform::set_localPosition(transform, pos);
        }

        apply_avatar_position(info);
    }

    void create_avatar(PlayerInfo& info) {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map))
            return;

        // Icons
        create_icons(info);

        // Map Dots
        initialize_dots(info);
    }

    void update_avatar_color(PlayerInfo& info) {
        if (info.world_avatar.handle != 0 && il2cpp::unity::is_valid(info.world_avatar.icon))
            utils::set_color(info.world_avatar.icon, info.color, false);

        if (info.map_avatar.handle != 0 && il2cpp::unity::is_valid(info.map_avatar.icon))
            utils::set_color(info.map_avatar.icon, info.color, false);

        update_dot_colors(info);
    }

    void destroy_icons(PlayerInfo& info) {
        if (info.world_avatar.handle != 0) {
            auto target = il2cpp::gchandle_target(info.world_avatar.handle);
            if (il2cpp::unity::is_valid(target))
                il2cpp::unity::destroy_object(target);

            il2cpp::gchandle_free(info.world_avatar.handle);
            info.world_avatar = {};
        }

        if (info.map_avatar.handle != 0) {
            auto target = il2cpp::gchandle_target(info.map_avatar.handle);
            if (il2cpp::unity::is_valid(target)) {
                auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
                IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, info.map_avatar.root);
                il2cpp::unity::destroy_object(target);
            }

            il2cpp::gchandle_free(info.map_avatar.handle);
            info.map_avatar = {};
        }
    }

    void destroy_avatar(PlayerInfo& info) {
        destroy_icons(info);
        if (info.name_handle != 0) {
            il2cpp::gchandle_free(info.name_handle);
            info.name_handle = 0;
        }

        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        for (auto const& dot : info.dots) {
            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, dot.dot);
            il2cpp::unity::destroy_object(dot.dot);
        }

        info.dots.clear();
    }

    float lerp(float a, float b, float weight) {
        return a * (1 - weight) + b * weight;
    }

    void update_avatar_facing(PlayerInfo& info) {
        if (info.world_avatar.handle != 0) {
            auto transform = il2cpp::unity::get_transform(info.world_avatar.icon);
            app::Vector3 scale = Transform::get_localScale(transform);
            scale.x = lerp(scale.x, info.world_avatar.facing * SPRITE_SCALE, 20.0f * TimeUtility::get_deltaTime());
            Transform::set_localScale(transform, scale);
        }

        if (info.map_avatar.handle != 0) {
            auto transform = il2cpp::unity::get_transform(info.map_avatar.icon);
            app::Vector3 scale = Transform::get_localScale(transform);
            scale.x = lerp(scale.x, info.map_avatar.facing * MAP_SPRITE_SCALE, 20.0f * TimeUtility::get_deltaTime());
            Transform::set_localScale(transform, scale);
        }
    }

    bool should_show_avatar() {
        if (game::ui::menu_open())
            return false;

        auto sein = game::player::sein();
        if (sein == nullptr)
            return false;

        return true;
    }

    void spawn_player(std::string const& name, std::vector<console::CommandParam> const& params) {
        std::wstring id = L"test";
        app::Vector2 position{ 0 };
        for (auto const& param : params) {
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

    void show_icon_prefabs(std::string const& name, std::vector<console::CommandParam> const& params) {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        dev::Visualizer v;
        dev::visualize::visualize_object(v, icons->fields.Moki);
        dev::visualize::visualize_object(v, icons->fields.Siira);
        console::console_send(dev::visualize::get_string(v));
    }

    void show_players(std::string const& name, std::vector<console::CommandParam> const& params) {
        for (auto const& player : players) {
            console::console_send("_______________________");
            auto id = convert_wstring_to_string(player.id);
            console::console_send(format("player: %s", id.c_str()));
            console::console_send(format("position: %d, %d", player.world_avatar.position.x, player.world_avatar.position.y));
            console::console_send(format("map_position: %d, %d", player.map_avatar.position.x, player.map_avatar.position.y));
            console::console_send(format("visible: %d", player.world_visible));
            console::console_send(format("map_visible: %d", player.map_visible));
            console::console_send(format("online: %d", player.online));

            dev::Visualizer v;
            if (player.world_avatar.handle != 0)
                dev::visualize::visualize_object(v, player.world_avatar.root);
            if (player.map_avatar.handle != 0)
                dev::visualize::visualize_object(v, player.map_avatar.root);
            if (player.world_avatar.handle != 0 || player.map_avatar.handle != 0)
                console::console_send(dev::visualize::get_string(v));
        }
    }

    void set_server_position_on_icon(PlayerInfo::Icon& icon, float x, float y) {
        auto last_server_position = app::Vector2{ icon.server_position.x, icon.server_position.y };

        icon.server_position.x = x;
        icon.server_position.y = y;

        if (modloader::math::distance2(icon.position, icon.server_position) > MAX_EXTRAPOLATE_DISTANCE_SQUARED) {
            icon.extrapolate_velocity = app::Vector2{ 0.f };
        } else if (icon.time_since_server_position_update > FLT_EPSILON) {
            icon.extrapolate_velocity = (icon.server_position - last_server_position) / icon.time_since_server_position_update;
        }

        icon.position.x = x;
        icon.position.y = y;
        icon.time_since_server_position_update = 0.f;
    }

    void extrapolate_icon_position(PlayerInfo::Icon& icon, float delta_time) {
        icon.time_since_server_position_update += delta_time;

        if (icon.time_since_server_position_update < MAX_EXTRAPOLATE_TIME) {
            icon.position.x = icon.position.x + icon.extrapolate_velocity.x * delta_time;
            icon.position.y = icon.position.y + icon.extrapolate_velocity.y * delta_time;
        }
    }

    void update(GameEvent game_event, EventTiming timing) {
        auto should_show = should_show_avatar();
        for (auto& player : players) {
            if (player.world_avatar.handle == 0 || player.map_avatar.handle == 0)
                multiplayer::create_avatar(player);

            update_avatar_facing(player);
            apply_avatar_position(player);

            // Extrapolate for next frame
            float delta_time = TimeUtility::get_deltaTime();
            extrapolate_icon_position(player.world_avatar, delta_time);
            extrapolate_icon_position(player.map_avatar, delta_time);

            // Visibility toggles.
            bool visible = player.online && should_show && player.world_visible;
            if (visible != player.world_avatar.visible) {
                if (player.world_avatar.handle != 0)
                    set_avatar_active(player, player.world_avatar, visible);

                player.world_avatar.visible = visible;
            }

            bool map_visible = player.online && game::ui::area_map_open() && player.map_visible;
            if (map_visible != player.map_avatar.visible) {
                if (player.map_avatar.handle != 0)
                    set_avatar_active(player, player.map_avatar, map_visible);

                for (auto& dot : player.dots)
                    il2cpp::unity::set_active(dot.dot, map_visible);

                player.map_avatar.visible = map_visible;
            }
        }
    }

    void on_load(GameEvent game_event, EventTiming timing) {
        for (auto& player : players) {
            destroy_avatar(player);
            create_avatar(player);

            if (player.world_avatar.handle != 0)
                set_avatar_active(player, player.world_avatar, player.world_avatar.visible);

            if (player.map_avatar.handle != 0)
                set_avatar_active(player, player.map_avatar, player.map_avatar.visible);

            for (auto& dot : player.dots)
                il2cpp::unity::set_active(dot.dot, player.map_avatar.visible);
        }
    }

    void initialize() {
        console::register_command({ "multiplayer", "show_players" }, &show_players, true);
        console::register_command({ "multiplayer", "spawn_player" }, &spawn_player, true);
        console::register_command({ "multiplayer", "show_icon_prefabs" }, &show_icon_prefabs, true);

        game::event_bus().register_handler(GameEvent::Update, EventTiming::End, update);
        game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, on_load);
    }

    CALL_ON_INIT(initialize);
} // namespace multiplayer

INJECT_C_DLLEXPORT void add_player(const wchar_t* id, const wchar_t* name, multiplayer::PlayerIcon icon) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        warn("multiplayer", "duplicate player added, updating instead.");
        auto& info = multiplayer::players[it->second];
        info.name = name;
        info.online = true;
        info.color = { 1.0f, 1.0f, 1.0f, 1.0f };
        info.icon = icon;
        multiplayer::destroy_icons(info);
        multiplayer::create_icons(info);
    } else {
        multiplayer::PlayerInfo& info = multiplayer::players.emplace_back();
        info.id = id;
        info.name = name;
        info.online = true;
        info.color = { 1.0f, 1.0f, 1.0f, 1.0f };
        info.icon = icon;
        multiplayer::player_map[id] = multiplayer::players.size() - 1;
        multiplayer::create_avatar(info);
    }
}

INJECT_C_DLLEXPORT void set_player_icon(const wchar_t* id, multiplayer::PlayerIcon icon) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        auto& info = multiplayer::players[it->second];
        if (info.icon == icon)
            return;

        info.icon = icon;
        multiplayer::destroy_icons(info);
        multiplayer::create_icons(info);
    } else
        warn("multiplayer", "setting player world_avatar on missing player, skipping.");
}

INJECT_C_DLLEXPORT void set_player_color(const wchar_t* id, float r, float g, float b, float a) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        auto& info = multiplayer::players[it->second];
        info.color = { r, g, b, a };
        multiplayer::update_avatar_color(info);
    } else
        warn("multiplayer", "setting player color on missing player, skipping.");
}

INJECT_C_DLLEXPORT void set_player_visibility(const wchar_t* id, bool world, bool map) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        auto& info = multiplayer::players[it->second];
        info.world_visible = world;
        info.map_visible = map;
    } else
        warn("multiplayer", "setting player visibility on missing player, skipping.");
}

INJECT_C_DLLEXPORT void set_local_player_color(float r, float g, float b, float a) {
    multiplayer::local_player_color = { r, g, b, a };
}

INJECT_C_DLLEXPORT void clear_players() {
    for (auto& player : multiplayer::players)
        multiplayer::destroy_avatar(player);

    multiplayer::players.clear();
    multiplayer::player_map.clear();
    multiplayer::local_player_color = { 1.0f, 1.0f, 1.0f, 1.0f };
}

INJECT_C_DLLEXPORT void remove_player(const wchar_t* id) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        auto player_it = multiplayer::players.begin() + it->second;
        multiplayer::destroy_avatar(*player_it);
        multiplayer::player_map.erase(player_it->id);
        player_it = multiplayer::players.erase(player_it);
        for (; player_it != multiplayer::players.end(); ++player_it) {
            auto index = multiplayer::player_map[player_it->id] - 1;
            multiplayer::player_map[player_it->id] = index;
        }
    } else
        warn("multiplayer", "Failed to find player to remove.");
}

INJECT_C_DLLEXPORT void update_player_position(const wchar_t* id, float x, float y) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        if (abs(x - info.world_avatar.last_facing_pos) > 0.1f) {
            info.world_avatar.facing = x < info.world_avatar.last_facing_pos ? 1 : -1;
            info.world_avatar.last_facing_pos = x;
        }

        multiplayer::set_server_position_on_icon(info.world_avatar, x, y);
    }
}

INJECT_C_DLLEXPORT void update_player_map_position(const wchar_t* id, float x, float y) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        if (abs(x - info.map_avatar.last_facing_pos) > 0.1f) {
            info.map_avatar.facing = x < info.map_avatar.last_facing_pos ? 1 : -1;
            info.map_avatar.last_facing_pos = x;
        }

        multiplayer::set_server_position_on_icon(info.map_avatar, x, y);

        if (info.online && multiplayer::should_make_dot(info))
            multiplayer::add_dot(info);
    }
}

INJECT_C_DLLEXPORT app::Vector2 get_player_position(const wchar_t* id) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
        return multiplayer::players[it->second].world_avatar.position;
    else
        return app::Vector2{ 0.f, 0.f };
}

INJECT_C_DLLEXPORT app::Vector2 get_player_map_position(const wchar_t* id) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
        return multiplayer::players[it->second].map_avatar.position;
    else
        return app::Vector2{ 0.f, 0.f };
}

INJECT_C_DLLEXPORT void set_player_online(const wchar_t* id, bool online) {
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end()) {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        info.online = online;
    }
}
