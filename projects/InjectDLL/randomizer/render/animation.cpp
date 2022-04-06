#include <randomizer/render/animation.h>

#include <dev/object_visualizer.h>
#include <game/player.h>
#include <randomizer/dirty_value.h>
#include <randomizer/render/sprite.h>
#include <randomizer/render/textures.h>
#include <utils/json_serializers.h>
#include <utils/operations.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <json/json.hpp>

#include <fstream>
#include <unordered_map>

using namespace modloader;
using namespace randomizer;

namespace
{

    int next_entry = 0;
    std::unordered_map<std::string, Animation> loaded_animations;
    std::unordered_map<int, Animation> animations;

    NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, .ctor, ctor_shader, (app::Material* this_ptr, app::Shader* shader), (UnityEngine:Shader));
    STATIC_IL2CPP_BINDING(UnityEngine, Shader, app::Shader*, Find, (app::String* name));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(UnityEngine, Renderer, app::Bounds, get_bounds, (app::Renderer* this_ptr));
    IL2CPP_BINDING(UnityEngine, MeshFilter, app::Mesh*, get_mesh, (app::MeshFilter* this_ptr));
    IL2CPP_BINDING(UnityEngine, Mesh, void, set_uv, (app::Mesh* this_ptr, app::Vector2__Array* arr));

    IL2CPP_BINDING(UnityEngine, Material, float, GetFloat, (app::Material* this_ptr, app::String* name));
    app::GameObject* create_sprite(Sprite& sprite, app::GameObject* obj)
    {
        auto sein = game::player::sein();
        auto go = reinterpret_cast<app::GameObject*>(il2cpp::unity::instantiate_object(obj));
        sprite.game_object_handle = il2cpp::gchandle_new(go, false);
        auto parent = il2cpp::unity::get_parent(il2cpp::unity::get_transform(sein));
        Transform::set_parent(il2cpp::unity::get_transform(go), parent);
        GameObject::SetActive(go, true);
        return go;
    }

    app::Vector2__Array* make_uvs(float x = 0, float y = 0, float w = 1, float h = 1)
    {
        return il2cpp::array_new<app::Vector2__Array>(
            il2cpp::get_class("UnityEngine", "Vector2"),
            std::vector<app::Vector2>{
                { x, y },
                { x + w, y },
                { x, y + h },
                { x + w, y + h }
            }
        );
    }

    bool use_prefab = true;
    bool custom_shader = false;
    float dst_blend = 1;
    app::GameObject* find_prefab()
    {
        static app::GameObject* icon = nullptr;
        if (il2cpp::unity::is_valid(icon))
            return icon;

        app::Renderer* renderer = nullptr;
        app::MeshFilter* mesh_filter = nullptr;
        if (use_prefab)
        {
            auto controller = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->MessageController;
            auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(controller->fields.HintSmallMessage, "", "MessageBox");
            auto icon_renderer = reinterpret_cast<app::MoonIconRenderer*>(
                message_box->fields.TextBox->fields.styleCollection->fields.styles->vector[1]->fields.renderer);
            auto icon_obj = icon_renderer->fields.Icons->fields.Icons->fields._items->vector[0]->fields.Icon;
            auto prefab = il2cpp::unity::get_children(icon_obj)[0];
            icon = il2cpp::unity::instantiate_object(il2cpp::unity::get_children(icon_obj)[0]);
            mesh_filter = il2cpp::unity::get_component<app::MeshFilter>(icon, "UnityEngine", "MeshFilter");
            renderer = il2cpp::unity::get_component<app::Renderer>(icon, "UnityEngine", "MeshRenderer");
            il2cpp::invoke(icon, "set_name", il2cpp::string_new("custom_rando_image"));
        }
        else
        {
            icon = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
            il2cpp::invoke(icon, ".ctor");
            il2cpp::invoke(icon, "set_name", il2cpp::string_new("custom_rando_image"));
            mesh_filter = il2cpp::unity::add_component<app::MeshFilter>(icon, "UnityEngine", "MeshFilter");
            renderer = il2cpp::unity::add_component<app::Renderer>(icon, "UnityEngine", "MeshRenderer");
            auto order = il2cpp::unity::add_component<app::UberShaderRuntimeRenderOrder>(icon, "", "UberShaderRuntimeRenderOrder");
            order->fields.m_isInScene = true;
            bool enabled = true;
            il2cpp::invoke(renderer, "set_enabled", &enabled);
        }

        GameObject::SetActive(icon, false);
        auto mesh = il2cpp::create_object<app::Mesh>("UnityEngine", "Mesh");
        il2cpp::invoke(mesh, ".ctor");
        auto vertices = il2cpp::array_new(il2cpp::get_class("UnityEngine", "Vector3"), std::vector<app::Vector3>{
            { -0.5f, -0.5f, 0 }, { 0.5f, -0.5f, 0 }, { -0.5f, 0.5f, 0 }, { 0.5f, 0.5f, 0 }});
        auto triangles = il2cpp::array_new(il2cpp::get_class("System", "Int32"), std::vector<int>{0, 2, 1, 2, 3, 1});
        auto normals = il2cpp::array_new(il2cpp::get_class("UnityEngine", "Vector3"), std::vector<app::Vector3>{
            { 0, 0, 1 }, { 0, 0, 1 }, { 0, 0, 1 }, { 0, 0, 1 }});
        auto uv = make_uvs();

        il2cpp::invoke(mesh, "set_vertices", vertices);
        il2cpp::invoke(mesh, "set_triangles", triangles);
        il2cpp::invoke(mesh, "set_normals", normals);
        Mesh::set_uv(mesh, uv);

        il2cpp::invoke(mesh_filter, "set_mesh", mesh);

        if (custom_shader)
        {
            auto shader = Shader::Find(il2cpp::string_new("Hidden/UberShader/59F9A629AA8A0ABB2D0B3EAE1933B13F"));
            auto mat = il2cpp::create_object<app::Material>("UnityEngine", "Material");
            Material::ctor_shader(mat, shader);

            auto keywords = il2cpp::array_new(il2cpp::get_class("System", "String"), std::vector<app::String*>{
                il2cpp::string_new("DISABLE_ALPHA_CUTOFF")
            });
            il2cpp::invoke(mat, "set_shaderKeywords", keywords);

            shaders::set_float(mat, "_UberShaderAlphaMask", 9);
            shaders::set_float(mat, "_UberShaderCulling", 0);
            shaders::set_vector(mat, "_DepthFlipScreen", { 0.008251436, 0, 0, 0 });
            shaders::set_vector(mat, "_Screen", { 0, 0, 0, 1 });
            shaders::set_vector(mat, "_UberShaderParams", { 0, 0, 1, 1 });
            shaders::set_vector(mat, "_UberShaderParams2", { 1, 1, 0, 1 });

            il2cpp::invoke(renderer, "set_sharedMaterial", mat);
        }

        return icon;
    }

    void destroy_sprite(Sprite& sprite)
    {
        if (sprite.game_object_handle == -1)
            return;

        auto game_object = il2cpp::gchandle_target<app::GameObject>(sprite.game_object_handle);
        il2cpp::gchandle_free(sprite.game_object_handle);
        sprite.game_object_handle = -1;

        if (il2cpp::unity::is_valid(game_object))
            il2cpp::unity::destroy_object(game_object);
    }

    bool update_active(Animation& anim)
    {
        auto sein = game::player::sein();
        auto active = anim.state != AnimState::Disabled && il2cpp::unity::is_valid(sein);
        if (active && !anim.sprites_exist)
        {
            auto created = true;
            for (auto& sprite : anim.sprites)
            {
                sprite.entry = 0;
                if (sprite.game_object_handle == -1 || !il2cpp::unity::is_valid(il2cpp::gchandle_target(sprite.game_object_handle)))
                    created &= create_sprite(sprite, find_prefab()) != nullptr;
            }

            if (!created)
                for (auto& sprite : anim.sprites)
                    destroy_sprite(sprite);

            anim.sprites_exist = created;
            return created;
        }
        else if (!active && anim.sprites_exist)
        {
            for (auto& sprite : anim.sprites)
                destroy_sprite(sprite);

            anim.sprites_exist = false;
        }

        return active;
    }

    bool update_sprite(Animation& anim, Sprite& sprite)
    {
        sprite.visible = anim.time >= sprite.start_time;
        if (!sprite.visible)
            return false;

        auto& entry = sprite.entries[*sprite.entry];
        if (anim.time < entry.real_duration)
            return false;

        if (*sprite.entry + 1 < sprite.entries.size())
        {
            sprite.entry = *sprite.entry + 1;
            return false;
        }

        switch (sprite.end_handler)
        {
        case SpriteEndHandling::Freeze:
            break;
        case SpriteEndHandling::Hide:
            sprite.visible = false;
            break;
        }

        return true;
    }

    bool update_animation(Animation& anim, float dt)
    {
        if (anim.state != AnimState::Active)
            return true;

        anim.time += dt;
        bool at_end = true;
        for (auto& sprite : anim.sprites)
            at_end &= update_sprite(anim, sprite);

        if (at_end)
        {
            switch (anim.end_handler)
            {
            case AnimationEndHandling::Freeze:
                anim.time = anim.duration;
                break;
            case AnimationEndHandling::DeactivateOnEnd:
                anim.state = AnimState::Disabled;
                anim.time = 0;
                for (auto& sprite : anim.sprites)
                    sprite.entry = 0;
                break;
            case AnimationEndHandling::DestroyOnEnd:
                return false;
            case AnimationEndHandling::Loop:
                anim.time -= anim.duration;
                for (auto& sprite : anim.sprites)
                    sprite.entry = 0;
                break;
            }
        }

        return true;
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localScale, (app::Transform* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* pos));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform* this_ptr, app::Quaternion* rot));
    app::Vector4 shader_scale_and_offset{ 0, 0, 1, 1 };
    void update_game_object(Animation& anim)
    {
        for (auto& sprite : anim.sprites)
        {
            auto& entry = sprite.entries[*sprite.entry];
            auto game_object = il2cpp::gchandle_target<app::GameObject>(sprite.game_object_handle);
            auto transform = il2cpp::unity::get_transform(game_object);

            if (anim.position.is_dirty() || sprite.entry.is_dirty())
            {
                auto pos = *anim.position;
                pos.x += sprite.position.x;
                pos.y += sprite.position.y;
                pos.z += sprite.position.z;
                pos.x += entry.position.x;
                pos.y += entry.position.y;
                pos.z += entry.position.z;
                Transform::set_position(transform, &pos);
            }

            if (anim.scale.is_dirty() || sprite.entry.is_dirty())
            {
                auto scale = *anim.scale;
                scale.x *= sprite.scale.x;
                scale.y *= sprite.scale.y;
                scale.z *= sprite.scale.z;
                scale.x *= entry.scale.x;
                scale.y *= entry.scale.y;
                scale.z *= entry.scale.z;
                scale.y *= entry.aspect_ratio;
                Transform::set_localScale(transform, &scale);
            }

            if (anim.rotation.is_dirty() || sprite.entry.is_dirty())
            {
                auto angle = *anim.rotation + sprite.rotation + entry.rotation;
                auto rotation = Quaternion::Euler(0, 0, angle);
                Transform::set_rotation(transform, &rotation);
            }

            auto order = il2cpp::unity::get_component<app::UberShaderRuntimeRenderOrder>(game_object, "", "UberShaderRuntimeRenderOrder");
            il2cpp::invoke(order, "SetRenderQueueOn", transform);

            if (sprite.layer.is_dirty())
            {
                il2cpp::invoke(game_object, "set_layer", &sprite.layer.value());
                sprite.layer.set_dirty(false);
            }

            auto renderer = il2cpp::unity::get_component<app::Renderer>(game_object, "UnityEngine", "MeshRenderer");
            bool hidden = false;
            il2cpp::invoke(renderer, "set_moonHidden", &hidden);
            il2cpp::invoke(renderer, "set_moonHidden2", &hidden);
            il2cpp::invoke(renderer, "set_moonHidden3", &hidden);


            if (sprite.entry.is_dirty())
            {
                if (entry.texture_data == nullptr && !entry.texture.empty())
                    entry.texture_data = textures::get_texture(entry.texture);

                il2cpp::invoke(renderer, "set_moonOffsetZ", &entry.offset_z);

                if (entry.texture_data != nullptr && sprite.current_texture != entry.texture)
                {
                    shaders::UberShaderAPI::SetVector(renderer, app::UberShaderProperty_Vector__Enum_MainTexScaleAndOffset, &shader_scale_and_offset);
                    entry.texture_data->apply_texture(renderer);
                    sprite.current_texture = entry.texture;
                }
            }

            if (sprite.entry.is_dirty() || anim.color_modulate.is_dirty())
            {
                auto params = entry.texture_params.value_or(textures::MaterialParams());
                auto color = params.color.value_or(app::Color{ 1.f, 1.f, 1.f, 1.f });
                color.r *= anim.color_modulate.value().r;
                color.g *= anim.color_modulate.value().g;
                color.b *= anim.color_modulate.value().b;
                color.a *= anim.color_modulate.value().a;
                params.color = color;
                entry.texture_data->apply_params(renderer, &params);
                sprite.entry.set_dirty(false);
            }
        }

        anim.position.set_dirty(false);
        anim.scale.set_dirty(false);
        anim.rotation.set_dirty(false);
        anim.color_modulate.set_dirty(false);
    }

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr)) {
        GameController::Update(this_ptr);
        float dt = TimeUtility::get_deltaTime();
        std::vector<int> remove;
        for (auto& pair : animations)
        {
            if (update_active(pair.second))
            {
                if (update_animation(pair.second, dt))
                    update_game_object(pair.second);
                else
                    remove.push_back(pair.first);
            }
        }

        for (auto id : remove)
            anim_destroy(id);
    }

    Animation parse_anim(nlohmann::json j)
    {
        Animation anim;
        anim.time = 0.f;
        anim.duration = 0.f;
        anim.end_handler = j.value<AnimationEndHandling>("end_handler", AnimationEndHandling::Freeze);
        auto sprite_entries = j.at("entries");
        for (auto sprite_entry : sprite_entries)
        {
            Sprite& sprite = anim.sprites.emplace_back();
            sprite.layer = sprite_entry.value<Layer>("layer", Layer::UI);
            sprite.position = sprite_entry.value("position", app::Vector3{ 0.f, 0.f, 0.f });
            sprite.scale = sprite_entry.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
            sprite.rotation = sprite_entry.value("rotation", 0.0f);
            sprite.start_time = sprite_entry.value("start_time", 0.0f);
            sprite.src_blend = sprite_entry.value("src_blend", app::BlendMode__Enum_SrcAlpha);
            sprite.dst_blend = sprite_entry.value("dst_blend", app::BlendMode__Enum_OneMinusSrcAlpha);
            auto entries = sprite_entry.at("entries");
            float sprite_duration = 0.f;
            for (auto& entry : entries)
            {
                AnimationEntry anim_entry;
                anim_entry.position = entry.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                anim_entry.scale = entry.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
                anim_entry.rotation = entry.value("rotation", 0.0f);
                anim_entry.duration = entry.value("duration", 1.0f);
                sprite_duration += anim_entry.duration;
                anim_entry.real_duration = sprite_duration;
                anim_entry.offset_z = entry.value("offset_z", 1.0f);
                anim_entry.texture = convert_string_to_wstring(entry.value("texture", std::string("")));
                anim_entry.texture_data = textures::get_texture(anim_entry.texture);
                app::Vector2 texture_size;
                auto has_texture_size = entry.contains("texture_size");
                if (has_texture_size)
                {
                    texture_size = entry.value("texture_size", app::Vector2{ 1.f, 1.f });
                    anim_entry.aspect_ratio = texture_size.y / texture_size.x;
                }

                if (entry.contains("texture_params"))
                {
                    auto params = entry["texture_params"];
                    textures::MaterialParams mat_params;
                    mat_params.color = params.value("color", app::Color{ 1.f, 1.f, 1.f, 1.f });
                    mat_params.scroll_rot = params.value("scroll_rot", app::Vector4{ 0.f, 0.f, 0.f, 0.f });
                    mat_params.uvs = params.value("uvs", app::Vector4{ 0.f, 0.f, 1.f, 1.f });
                    //if (params.contains("uvs"))
                    //    mat_params.uvs = params.at("uvs").get<app::Vector4>();
                    auto& value = mat_params.uvs.value();
                    if (has_texture_size)
                    {
                        anim_entry.aspect_ratio = value.w / value.z;
                        value.x /= texture_size.x;
                        value.y /= texture_size.y;
                        value.z /= texture_size.x;
                        value.w /= texture_size.y;
                    }


                    value.y = 1.f - value.y - value.w;
                    anim_entry.texture_params = std::optional(mat_params);
                }

                sprite.entries.push_back(anim_entry);
            }

            anim.duration = std::max(anim.duration, sprite_duration);
        }


        return anim;
    }
}

NLOHMANN_JSON_SERIALIZE_ENUM(AnimationEndHandling, {
    { AnimationEndHandling::Freeze, "Freeze" },
    { AnimationEndHandling::Loop, "Loop" },
    { AnimationEndHandling::DestroyOnEnd, "DestroyOnEnd" },
    { AnimationEndHandling::DeactivateOnEnd, "DeactivateOnEnd" },
});

NLOHMANN_JSON_SERIALIZE_ENUM(SpriteEndHandling, {
    { SpriteEndHandling::Freeze, "Freeze" },
    { SpriteEndHandling::Hide, "Hide" },
});

INJECT_C_DLLEXPORT bool anim_preload(const char* path)
{
    std::string spath(path);
    auto it = loaded_animations.find(spath);
    if (it == loaded_animations.end())
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
                trace(MessageType::Warning, 3, "anim_renderer", format("failed to parse '%s%s' error '%d' at byte '%d'", base_path.c_str(), path, ex.id, ex.byte));
                return false;
            }

            try
            {
                Animation anim = parse_anim(j);
                loaded_animations[spath] = anim;
            }
            catch (std::exception& ex)
            {
                trace(MessageType::Warning, 3, "anim_renderer", format("failed to read '%s%s' error '%s'", base_path.c_str(), path, ex.what()));
                return false;
            }
        }
        else
        {
            trace(MessageType::Warning, 3, "anim_renderer", format("failed to open '%s%s'", base_path.c_str(), path));
            return false;
        }
    }

    return true;
}

INJECT_C_DLLEXPORT int anim_load(const char* path, float x, float y, float z, float sx, float sy, float sz, float angle)
{
    if (!anim_preload(path))
        return -1;

    auto sprite = loaded_animations[path];
    sprite.position = { x, y, z };
    sprite.scale = { sx, sy, sz };
    sprite.rotation = angle;
    auto id = next_entry++;
    animations[id] = sprite;
    return id;
}

INJECT_C_DLLEXPORT void anim_set_color_modulate(int id, float r, float g, float b, float a)
{
    auto it = animations.find(id);
    if (it != animations.end())
    {
        it->second.color_modulate = app::Color{
            r, g, b, a,
        };
    }
    else
        modloader::warn("anim_renderer", format("anim_set_color_modulate: animation '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void anim_set_time(int id, float time)
{
    auto it = animations.find(id);
    if (it != animations.end())
        it->second.time = time;
    else
        modloader::warn("anim_renderer", format("anim_set_time: animation '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void anim_set_position(int id, float x, float y, float z)
{
    auto it = animations.find(id);
    if (it != animations.end())
        it->second.position = { x, y, z };
    else
        modloader::warn("anim_renderer", format("anim_set_position: animation '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void anim_set_scale(int id, float x, float y, float z)
{
    auto it = animations.find(id);
    if (it != animations.end())
        it->second.scale = { x, y, z };
    else
        modloader::warn("anim_renderer", format("anim_set_scale: animation '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void anim_set_rotation(int id, float angle)
{
    auto it = animations.find(id);
    if (it != animations.end())
        it->second.rotation = angle;
    else
        modloader::warn("anim_renderer", format("anim_set_rotation: animation '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void anim_set_state(int id, randomizer::AnimState state)
{
    auto it = animations.find(id);
    if (it != animations.end())
        it->second.state = state;
    else
        modloader::warn("anim_renderer", format("anim_set_state: animation '%d' does not exist.", id));
}

INJECT_C_DLLEXPORT void anim_destroy(int id)
{
    auto it = animations.find(id);
    if (it == animations.end())
        return;

    for (auto& sprite : it->second.sprites)
        destroy_sprite(sprite);

    animations.erase(it);
}

INJECT_C_DLLEXPORT bool anim_is_destroyed(int id)
{
    return animations.find(id) == animations.end();
}

INJECT_C_DLLEXPORT bool anim_check_state(int id, randomizer::AnimState state)
{
    auto it = animations.find(id);
    return it != animations.end() && it->second.state == state;
}

INJECT_C_DLLEXPORT void reload_animations()
{
    std::vector<std::string> paths;
    std::transform(loaded_animations.begin(), loaded_animations.end(), std::back_inserter(paths), [](auto p) -> auto { return p.first; });
    loaded_animations.clear();
    for (auto const& path : paths)
        anim_preload(path.c_str());
}

INJECT_C_DLLEXPORT void clear_animations()
{
    next_entry = 0;
    for (auto& anim : animations)
        for (auto& sprite : anim.second.sprites)
            destroy_sprite(sprite);

    animations.clear();
    loaded_animations.clear();
}

INJECT_C_DLLEXPORT app::Vector2 anim_bounds()
{
    auto prefab = find_prefab();
    auto renderer = il2cpp::unity::get_component<app::Renderer>(prefab, "UnityEngine", "Renderer");
    auto bounds = Renderer::get_bounds(renderer);
    return app::Vector2{ bounds.m_Extents.x, bounds.m_Extents.y };
}
