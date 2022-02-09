#include <multiplayer.h>
#include <macros.h>
#include <features/messages.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>

using namespace modloader;

extern void update_player_icons();

namespace multiplayer
{
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
        return &players[it->second];
    }

    app::Color const& get_local_player_color()
    {
        return local_player_color;
    }

    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_position, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_root, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_parent, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));

    void create_avatar(PlayerInfo& info)
    {
        info.avatar_id = 0;
        //auto scene = il2cpp::get_class<app::GameController__Class>("", "GameController")->static_fields->Instance;
        auto scene = il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
        if (scene == nullptr)
            return;

        info.avatar_id = get_free_id();
        text_box_create(info.avatar_id, 0.1f, 0.1f, false, false);
        text_box_text(info.avatar_id, info.name.c_str());
        //text_box_color(info.avatar_id, info.color.r, info.color.g, info.color.b, info.color.a);
        text_box_position(info.avatar_id, 0.0f, 0.0f, 0.0f);
    }

    void destroy_avatar(int avatar_id)
    {
        if (avatar_id == 0)
            return;

        text_box_destroy(avatar_id);
    }


    STATIC_IL2CPP_BINDING(UnityEngine, Camera, app::Camera*, get_current, ());
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, WorldToScreenPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, ScreenToWorldPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(, GameplayCamera, app::Camera*, get_Camera, (app::GameplayCamera* camera));

    void move_avatar(PlayerInfo& info)
    {
        auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
        if (!il2cpp::unity::is_valid(cameras->static_fields->Current) || !il2cpp::unity::is_valid(cameras->static_fields->System->fields.GUICamera))
            return;

        auto world_camera = GameplayCamera::get_Camera(cameras->static_fields->Current);
        auto ui_camera = cameras->static_fields->System->fields.GUICamera->fields.Camera;
        if (!il2cpp::unity::is_valid(world_camera) || !il2cpp::unity::is_valid(ui_camera))
            return;

        if (info.avatar_id == 0)
        {
            create_avatar(info);
            if (info.avatar_id == 0)
                return;
        }

        app::Vector3 pos{ info.position.x, info.position.y, 0.0f };
        pos = Camera::WorldToScreenPoint(world_camera, &pos);
        pos = Camera::ScreenToWorldPoint(ui_camera, &pos);
        text_box_position(info.avatar_id, pos.x, pos.y, pos.z);
    }

    IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr)) {
        GameController::Update(this_ptr);
        for (auto& player : players)
            move_avatar(player);
    }
}

INJECT_C_DLLEXPORT void add_player(const wchar_t* id, const wchar_t* name)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        warn("multiplayer", "duplicate player added, updating instead.");
        auto& info = multiplayer::players[it->second];
        info.name = name;
        info.online = true;
        info.color = { 1.0f, 1.0f, 1.0f, 1.0f};
    }
    else
    {
        multiplayer::PlayerInfo& info = multiplayer::players.emplace_back();
        info.id = id;
        info.name = name;
        info.position = { 0 };
        info.online = true;
        info.color = { 1.0f, 1.0f, 1.0f, 1.0f };
        multiplayer::player_map[id] = multiplayer::players.size() - 1;
        create_avatar(info);
    }
}

INJECT_C_DLLEXPORT void set_player_color(const wchar_t* id, float r, float g, float b, float a)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        auto& info = multiplayer::players[it->second];
        info.color = { r, g, b, a };
    }
    else
        warn("multiplayer", "setting player color on missing player, skipping.");
}

INJECT_C_DLLEXPORT void set_local_player_color(float r, float g, float b, float a)
{
    multiplayer::local_player_color = { r, g, b, a };
}

INJECT_C_DLLEXPORT void refresh_players()
{
    update_player_icons();
}

INJECT_C_DLLEXPORT void clear_players()
{
    for (auto& player : multiplayer::players)
        multiplayer::destroy_avatar(player.avatar_id);

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
        multiplayer::destroy_avatar(player_it->avatar_id);
        player_it = multiplayer::players.erase(multiplayer::players.begin() + it->second);
        for (; player_it != multiplayer::players.end(); ++player_it)
            --multiplayer::player_map[player_it->id];
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
        info.position.x = x;
        info.position.y = y;
    }
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
