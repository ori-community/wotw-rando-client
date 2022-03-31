#include <multiplayer.h>
#include <macros.h>
#include <system/messages.h>
#include <utils/misc.h>

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
    constexpr float TEXT_OFFSET = 1.6f;
    constexpr float SPRITE_OFFSET = 0.4f;
    constexpr float SPRITE_SCALE = 0.6f;

    std::vector<PlayerInfo> players;
    std::unordered_map<std::wstring, int> player_map;
    std::unordered_map<int, int> player_avatar_map;
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
    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localScale, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_root, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, app::Transform*, get_parent, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));

    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (app::Object* object), (UnityEngine:Object));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));


    void move_avatar(PlayerInfo& info);
    void avatar_callback(int id)
    {
        auto area_map = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance;
        if (area_map == nullptr)
            return;

        auto player_index = player_avatar_map.find(id);
        if (player_index == player_avatar_map.end() || player_index->second >= players.size())
            return;

        auto& player = players[player_index->second];
        if (player.avatar_icon != 0)
        {
            auto target = il2cpp::gchandle_target(player.avatar_icon);
            if (il2cpp::unity::is_valid(target))
            {
                il2cpp::gchandle_free(player.avatar_icon);
                il2cpp::unity::destroy_object(target);
            }
        }

        auto parent = text_box_get_go(id);
        auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        auto moki = il2cpp::unity::find_child(icons->fields.Moki, "npcMokiMapIcon");
        auto icon = reinterpret_cast<app::GameObject*>(Object::Instantiate(reinterpret_cast<app::Object*>(moki)));
        player.avatar_icon = il2cpp::gchandle_new(icon, false);
        GameObject::SetActive(icon, player.visible);
        auto transform = il2cpp::unity::get_transform(icon);
        app::Vector3 scale{ SPRITE_SCALE, SPRITE_SCALE, 1.0f };
        Transform::set_localScale(transform, &scale);
        utils::set_color(icon, player.color, false);
        move_avatar(player);
    }

    void create_avatar(PlayerInfo& info)
    {
        info.avatar_id = reserve_id();
        text_box_create(info.avatar_id, 0.1f, 0.1f, false, false);
        text_box_text(info.avatar_id, info.name.c_str());
        //text_box_color(
        //    info.avatar_id,
        //    static_cast<int>(info.color.r * 255),
        //    static_cast<int>(info.color.g * 255),
        //    static_cast<int>(info.color.b * 255),
        //    static_cast<int>(info.color.a * 255)
        //);
        text_box_position(info.avatar_id, 0.0f, 0.0f, 0.0f, true);
        text_box_visibility(info.avatar_id, info.visible);
        text_box_creation_callback(info.avatar_id, avatar_callback);
        player_avatar_map[info.avatar_id] = player_map[info.id];
    }

    void update_avatar_color(PlayerInfo& info)
    {
        /*if (info.avatar_id != 0)
            text_box_color(
                info.avatar_id,
                static_cast<int>(info.color.r * 255),
                static_cast<int>(info.color.g * 255),
                static_cast<int>(info.color.b * 255),
                static_cast<int>(info.color.a * 255)
            );*/

        if (info.avatar_icon != 0)
        {
            auto icon = il2cpp::gchandle_target<app::GameObject>(info.avatar_icon);
            if (il2cpp::unity::is_valid(icon))
                utils::set_color(icon, info.color, false);
        }
    }

    void destroy_avatar(PlayerInfo& info)
    {
        if (info.avatar_id != 0)
        {
            text_box_destroy(info.avatar_id);
            info.avatar_id = 0;
        }

        if (info.avatar_icon != 0)
        {
            auto target = il2cpp::gchandle_target(info.avatar_icon);
            if (il2cpp::unity::is_valid(target))
            {
                il2cpp::gchandle_free(info.avatar_icon);
                il2cpp::unity::destroy_object(target);
                info.avatar_icon = 0;
            }
        }
    }


    STATIC_IL2CPP_BINDING(UnityEngine, Camera, app::Camera*, get_current, ());
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, WorldToScreenPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, ScreenToWorldPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(, GameplayCamera, app::Camera*, get_Camera, (app::GameplayCamera* camera));

    float lerp(float a, float b, float weight) {
        return a * (1 - weight) + b * weight;
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    void move_avatar(PlayerInfo& info)
    {
        if (info.avatar_id == 0)
            return;

        auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
        if (!il2cpp::unity::is_valid(cameras->static_fields->Current) || !il2cpp::unity::is_valid(cameras->static_fields->System->fields.GUICamera))
            return;

        auto world_camera = GameplayCamera::get_Camera(cameras->static_fields->Current);
        auto ui_camera = cameras->static_fields->System->fields.GUICamera->fields.Camera;
        if (!il2cpp::unity::is_valid(world_camera) || !il2cpp::unity::is_valid(ui_camera))
            return;

        app::Vector3 pos{ info.position.x, info.position.y + TEXT_OFFSET, 0.0f };
        text_box_position(info.avatar_id, pos.x, pos.y, pos.z, true);

        if (info.avatar_icon == 0)
            return;

        auto go = il2cpp::gchandle_target(info.avatar_icon);
        auto transform = il2cpp::unity::get_transform(go);

        pos = { info.position.x, info.position.y + SPRITE_OFFSET, 0.0f };
        pos = Camera::WorldToScreenPoint(world_camera, &pos);
        pos = Camera::ScreenToWorldPoint(ui_camera, &pos);
        pos.z = 0.0f;
        Transform::set_position(transform, &pos);

        app::Vector3 scale = Transform::get_localScale(transform);
        scale.x = lerp(scale.x, info.facing * SPRITE_SCALE, 20.0f * TimeUtility::get_deltaTime());
        Transform::set_localScale(transform, &scale);
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

        if (UI::get_MainMenuVisible() ||
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
            if (player.avatar_id == 0)
                create_avatar(player);

            move_avatar(player);
            bool visible = player.online && should_show;
            if (visible != player.visible)
            {
                text_box_visibility(player.avatar_id, visible);
                if (player.avatar_icon != 0)
                {
                    auto go = il2cpp::gchandle_target<app::GameObject>(player.avatar_icon);
                    GameObject::SetActive(go, visible);
                }

                player.visible = visible;
            }
        }
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
        info.texture = textures::get_texture(L"ability:1");
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
        multiplayer::update_avatar_color(info);
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
        multiplayer::destroy_avatar(player);

    multiplayer::players.clear();
    multiplayer::player_map.clear();
    multiplayer::player_avatar_map.clear();
    multiplayer::local_player_color = { 1.0f, 1.0f, 1.0f, 1.0f };
}

INJECT_C_DLLEXPORT void remove_player(const wchar_t* id)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        auto player_it = multiplayer::players.begin() + it->second;
        multiplayer::destroy_avatar(*player_it);
        multiplayer::player_avatar_map.erase(player_it->avatar_id);
        multiplayer::player_map.erase(player_it->name);
        player_it = multiplayer::players.erase(multiplayer::players.begin() + it->second);
        for (; player_it != multiplayer::players.end(); ++player_it)
        {
            auto index = multiplayer::player_map[player_it->id] - 1;
            multiplayer::player_map[player_it->id] = index;
            auto it = multiplayer::player_avatar_map.find(multiplayer::players[index].avatar_id);
            if (it != multiplayer::player_avatar_map.end())
                it->second = index;
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
