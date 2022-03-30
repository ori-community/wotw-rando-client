#include <features/image_renderer.h>

#include <dev/object_visualizer.h>
#include <system/textures.h>
#include <utils/json_serializers.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <json/json.hpp>

#include <fstream>
#include <unordered_map>

using namespace modloader;

namespace {
    struct AnimationEntry
    {
        std::wstring texture;
        std::shared_ptr<textures::TextureData> texture_data = nullptr;
        std::optional<textures::MaterialParams> texture_params;
        app::Vector3 position{ 0.f, 0.f, 0.f };
        app::Vector3 scale{ 0.f, 0.f, 0.f };
        float rotation = 0;
        float duration = 0;
        int sorting_order = 0;
        float offset_z = 0.0f;
    };

    struct Sprite
    {
        bool active = false;
        uint32_t game_object_handle = -1;
        Layer layer = Layer::UI;
        app::Vector3 position{ 0.f, 0.f, 0.f };
        app::Vector3 scale{ 1.f, 1.f, 1.f };
        float rotation = 0;

        AnimationEndHandling end_handler = AnimationEndHandling::Freeze;
        float time = 0;
        int entry = 0;
        std::vector<AnimationEntry> entries;
    };

    int next_entry = 0;
    std::unordered_map<std::string, Sprite> loaded_sprites;
    std::unordered_map<int, Sprite> sprites;

    STATIC_IL2CPP_BINDING(UnityEngine, Shader, app::Shader*, Find, (app::String* name));
    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (void* object), (UnityEngine:Object));
    STATIC_IL2CPP_BINDING(UnityEngine, Object, void, Destroy, (void* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));

    app::GameObject* create_sprite(Sprite& sprite, app::GameObject* obj)
    {
        auto sein = il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
        auto go = reinterpret_cast<app::GameObject*>(Object::Instantiate(obj));
        sprite.game_object_handle = il2cpp::gchandle_new(go, false);
        auto parent = il2cpp::unity::get_parent(il2cpp::unity::get_transform(sein));
        Transform::set_parent(il2cpp::unity::get_transform(go), parent);
        GameObject::SetActive(go, true);
        return go;
    }

    //STATIC_IL2CPP_BINDING(RootMotion, LayerMaskExtensions, app::String*, MaskToString, (app::LayerMask original));
    STATIC_IL2CPP_BINDING(UnityEngine, LayerMask, app::String*, LayerToName, (int layer));
    bool create_ui_sprite(Sprite& sprite)
    {
        modloader::console::console_send("layer names: {");
        for (int i = 0; i < 32; ++i)
        {
            auto name = LayerMask::LayerToName(i);
            modloader::console::console_send(format("    %d: %s", i, il2cpp::convert_csstring(name).c_str()));
        }
        modloader::console::console_send("}");

        auto controller = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->MessageController;
        auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(controller->fields.HintSmallMessage, "", "MessageBox");
        auto icon_renderer = reinterpret_cast<app::MoonIconRenderer*>(
            message_box->fields.TextBox->fields.styleCollection->fields.styles->vector[1]->fields.renderer);
        auto icon = icon_renderer->fields.Icons->fields.Icons->fields._items->vector[0]->fields.Icon;
        auto go = create_sprite(sprite, il2cpp::unity::get_children(icon)[0]);
        return true;
    }

    bool update_active(Sprite& sprite)
    {
        auto sein = il2cpp::get_class<app::Characters__Class>("Game", "Characters")->static_fields->m_sein;
        auto active = sprite.active && !sprite.entries.empty() && il2cpp::unity::is_valid(sein);
        if (active && (sprite.game_object_handle == -1 || !il2cpp::unity::is_valid(il2cpp::gchandle_target(sprite.game_object_handle))))
            return create_ui_sprite(sprite);
        else if (!active && sprite.game_object_handle != -1)
        {
            auto game_object = il2cpp::gchandle_target<app::GameObject>(sprite.game_object_handle);
            il2cpp::gchandle_free(sprite.game_object_handle);
            sprite.game_object_handle = -1;

            if (il2cpp::unity::is_valid(game_object))
                Object::Destroy(game_object);
        }

        return active;
    }

    void update_animation(Sprite& sprite, float dt)
    {
        sprite.time += dt;
        auto& entry = sprite.entries[sprite.entry];
        if (sprite.time < entry.duration)
            return;

        if (sprite.entry + 1 < sprite.entries.size())
        {
            sprite.time -= entry.duration;
            ++sprite.entry;
            return;
        }

        switch (sprite.end_handler)
        {
        case AnimationEndHandling::Freeze:
            sprite.time = entry.duration;
            break;
        case AnimationEndHandling::DeactivateOnEnd:
            sprite.active = false;
            sprite.entry = 0;
            sprite.time = 0;
            break;
        case AnimationEndHandling::Loop:
            sprite.time -= entry.duration;
            sprite.entry = 0;
            break;
        }
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Camera, app::Camera*, get_current, ());
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, WorldToScreenPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, ScreenToWorldPoint, (app::Camera* camera, app::Vector3* pos));
    IL2CPP_BINDING(, GameplayCamera, app::Camera*, get_Camera, (app::GameplayCamera* camera));
    void convert_from_world(app::Vector3& pos)
    {
        auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
        if (!il2cpp::unity::is_valid(cameras->static_fields->Current) || !il2cpp::unity::is_valid(cameras->static_fields->System->fields.GUICamera))
            return;

        auto world_camera = GameplayCamera::get_Camera(cameras->static_fields->Current);
        auto ui_camera = cameras->static_fields->System->fields.GUICamera->fields.Camera;
        if (!il2cpp::unity::is_valid(world_camera) || !il2cpp::unity::is_valid(ui_camera))
            return;

        pos = Camera::WorldToScreenPoint(world_camera, &pos);
        pos = Camera::ScreenToWorldPoint(ui_camera, &pos);
        pos.z = 0.0f;
    }
    
    STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform* this_ptr, app::Quaternion* rot));
    app::Vector4 shader_scale_and_offset{ 0, 0, 1, 1 };
    void update_game_object(Sprite& sprite)
    {
        auto& entry = sprite.entries[sprite.entry];
        auto game_object = il2cpp::gchandle_target<app::GameObject>(sprite.game_object_handle);
        auto transform = il2cpp::unity::get_transform(game_object);
        
        auto pos = sprite.position;
        pos.x += entry.position.x;
        pos.y += entry.position.y;
        pos.z += entry.position.z;

        auto scale = sprite.scale;
        scale.x += entry.scale.x;
        scale.y += entry.scale.y;
        scale.z += entry.scale.z;

        auto angle = sprite.rotation + entry.rotation;
        auto rotation = Quaternion::Euler(0, 0, angle);

        Transform::set_position(transform, &pos);
        Transform::set_localScale(transform, &scale);
        Transform::set_rotation(transform, &rotation);

        auto renderer = il2cpp::unity::get_component<app::Renderer>(game_object, "UnityEngine", "MeshRenderer");
        if (entry.texture_data == nullptr && !entry.texture.empty())
            entry.texture_data = textures::get_texture(entry.texture);

        il2cpp::invoke(game_object, "set_layer", &sprite.layer);
        il2cpp::invoke(game_object, "set_moonOffsetZ", &entry.offset_z);
        il2cpp::invoke(renderer, "set_sortingOrder", &entry.sorting_order);

        bool hidden = false;
        il2cpp::invoke(renderer, "set_moonHidden", &hidden);
        il2cpp::invoke(renderer, "set_moonHidden2", &hidden);
        il2cpp::invoke(renderer, "set_moonHidden3", &hidden);
        
        auto order = il2cpp::unity::get_component<app::UberShaderRuntimeRenderOrder>(game_object, "", "UberShaderRuntimeRenderOrder");
        il2cpp::invoke(order, "SetRenderQueueOn", transform);

        if (entry.texture_data != nullptr)
        {
            shaders::UberShaderAPI::SetVector(renderer, app::UberShaderProperty_Vector__Enum_MainTexScaleAndOffset, &shader_scale_and_offset);
            entry.texture_data->apply(renderer);
        }
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr)) {
        GameController::Update(this_ptr);
        float dt = TimeUtility::get_deltaTime();
        for (auto& pair : sprites)
        {
            if (update_active(pair.second))
            {
                update_animation(pair.second, dt);
                update_game_object(pair.second);
            }
        }
    }
    
    NLOHMANN_JSON_SERIALIZE_ENUM(Layer, {
        { Layer::UI, "UI" },
        { Layer::Sein, "Sein" },
        { Layer::Solids, "Solids" },
        { Layer::Art, "Art" },
        { Layer::Character, "Character" },
        { Layer::CharacterMovement, "CharacterMovement" },
        { Layer::WorldMap, "WorldMap" },
        { Layer::Items, "Items" },
        { Layer::KillCharacter, "KillCharacter" },
        { Layer::KillEverything, "KillEverything" },
        { Layer::PushPullBlock, "PushPullBlock" },
        { Layer::Platform, "Platform" },
        { Layer::ResampleBuffer, "ResampleBuffer" },
        { Layer::CharacterMovementIgnorePlatforms, "CharacterMovementIgnorePlatforms" },
        { Layer::ArtReflected, "ArtReflected" },
        { Layer::Debris, "Debris" },
        { Layer::DebrisNoCollsion, "DebrisNoCollsion" },
        { Layer::ArtBlurred, "ArtBlurred" },
        { Layer::Projectile, "Projectile" },
        { Layer::EarlyZ, "EarlyZ" },
        { Layer::ArtBlurredReflected, "ArtBlurredReflected" },
        { Layer::Laser, "Laser" },
        { Layer::TerrainCollisionIgnorePlayerAndEnemies, "TerrainCollisionIgnorePlayerAndEnemies" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(AnimationEndHandling, {
        { AnimationEndHandling::Freeze, "Freeze" },
        { AnimationEndHandling::Loop, "Loop" },
        { AnimationEndHandling::DeactivateOnEnd, "DeactivateOnEnd" },
    });
}

INJECT_C_DLLEXPORT int sprite_load(const char* path)
{
    std::string spath(path);
    auto it = loaded_sprites.find(spath);
    if (it == loaded_sprites.end())
    {
        std::ifstream stream(base_path + path);
        if (stream.is_open())
        {
            nlohmann::json j;
            try
            {
                stream >> j;
            }
            catch (nlohmann::json::parse_error& ex)
            {
                trace(MessageType::Warning, 3, "sprite_renderer", format("failed to parse '%s%s' error '%d' at byte '%d'", base_path.c_str(), path, ex.id, ex.byte));
                return -1;
            }

            try
            {
                Sprite sprite;
                sprite.layer = j.value("layer", Layer::UI);
                sprite.position = j.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                sprite.scale = j.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
                sprite.rotation = j.value("rotation", 0.f);

                sprite.end_handler = j.value("end_handler", AnimationEndHandling::Freeze);
                sprite.time = j.value("time", 0.f);
                auto entries = j.at("entries");
                for (auto entry : entries)
                {
                    AnimationEntry anim_entry;
                    anim_entry.position = entry.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                    anim_entry.scale = entry.value("scale", app::Vector3{ 0.f, 0.f, 0.f });
                    anim_entry.rotation = entry.value("rotation", 0.0f);
                    anim_entry.duration = entry.value("duration", 1.0f);
                    anim_entry.offset_z = entry.value("offset_z", 1.0f);
                    anim_entry.sorting_order = entry.value("sorting_order", 0);
                    anim_entry.texture = convert_string_to_wstring(entry.value("texture", std::string("")));
                    if (entry.contains("texture_params"))
                    {
                        auto params = entry["texture_params"];
                        textures::MaterialParams mat_params;
                        mat_params.color = entry.value("color", app::Color{ 0.f, 0.f, 0.f, 1.0f });
                        mat_params.scroll_rot = entry.value("scroll_rot", app::Vector4{ 0.f, 0.f, 0.f, 1.0f });
                        mat_params.uvs = entry.value("uvs", app::Vector4{ 0.f, 0.f, 0.f, 1.0f });
                        anim_entry.texture_params = std::optional(mat_params);
                    }

                    sprite.entries.push_back(anim_entry);
                }

                loaded_sprites[spath] = sprite;
                it = loaded_sprites.find(spath);
            }
            catch (std::exception ex)
            {
                trace(MessageType::Warning, 3, "sprite_renderer", format("failed to read '%s%s' error '%s'", base_path.c_str(), path, ex.what()));
                return -1;
            }
        }
        else
        {
            trace(MessageType::Warning, 3, "sprite_renderer", format("failed to open '%s%s'", base_path.c_str(), path));
            return -1;
        }
    }

    auto id = next_entry++;
    sprites[id] = it->second;
    return id;
}

INJECT_C_DLLEXPORT int sprite_create(float x, float y, float z, float rotation, float scale_x, float scale_y, Layer layer, AnimationEndHandling end_handler)
{
    auto id = next_entry++;
    auto& sprite = sprites[id];
    sprite.position.x = x;
    sprite.position.y = y;
    sprite.position.z = z;
    sprite.rotation = rotation;
    sprite.scale.x = scale_x;
    sprite.scale.y = scale_y;
    sprite.layer = layer;
    sprite.end_handler = end_handler;
    return id;
}

INJECT_C_DLLEXPORT void sprite_animation_entry(int id, float x, float y, float z, float rotation, float scale_x, float scale_y, float duration, const wchar_t* texture)
{
    auto it = sprites.find(id);
    if (it != sprites.end())
    {
        AnimationEntry entry;
        entry.position.x = x;
        entry.position.y = y;
        entry.position.z = z;
        entry.rotation = rotation;
        entry.scale.x = scale_x;
        entry.scale.y = scale_y;
        entry.duration = duration;
        entry.texture = texture;
        entry.texture_data = textures::get_texture(texture);
        it->second.entries.push_back(entry);
    }
    else
        modloader::warn("sprite_renderer", format("sprite_animation_entry: sprite '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void sprite_set_animation_entry(int id, int entry)
{
    auto it = sprites.find(id);
    if (it != sprites.end())
    {
        if (entry < it->second.entries.size())
        {
            it->second.entry = entry;
            it->second.time = 0;
        }
        else
            modloader::warn("sprite_renderer", format("sprite '%d' does not have frame '%d'.", id, entry));
    }
    else
        modloader::warn("sprite_renderer", format("sprite_set_animation_entry: sprite '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void sprite_set_active(int id, bool value)
{
    auto it = sprites.find(id);
    if (it != sprites.end())
        it->second.active = value;
    else
        modloader::warn("sprite_renderer", format("sprite_set_active: sprite '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void sprite_destroy(int id)
{
    auto it = sprites.find(id);
    if (it == sprites.end())
        return;

    auto handle = it->second.game_object_handle;
    sprites.erase(it);

    if (handle == -1)
        return;

    auto target = il2cpp::gchandle_target(handle);
    if (il2cpp::unity::is_valid(target))
        Object::Destroy(target);
}

INJECT_C_DLLEXPORT void clear_sprites()
{
    next_entry = 0;
    for (auto sprite : sprites)
    {
        auto handle = sprite.second.game_object_handle;
        if (handle == -1)
            continue;

        auto target = il2cpp::gchandle_target(handle);
        if (il2cpp::unity::is_valid(target))
            Object::Destroy(target);
    }

    sprites.clear();
    loaded_sprites.clear();
}
