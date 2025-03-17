#include <Core/animation/animation.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/graphics/textures.h>
#include <Core/dev/object_visualizer.h>
#include <Core/utils/json_serializers.h>

#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>

#include <nlohmann/json.hpp>

using namespace app::classes;
using namespace modloader;

namespace core::animation {
    CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation> g_animation_cache;

    std::shared_ptr<AnimationDefinition> load_animation(std::string path) {
        nlohmann::json j;
        load_json_file(path, j);
        std::shared_ptr<AnimationDefinition> anim(new AnimationDefinition());
        try {
            anim->duration = 0.f;
            auto frames = j.at("frames");
            for (auto frame: frames) {
                auto& frame_definition = anim->frames.emplace_back();
                frame_definition.position = frame.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                frame_definition.scale = frame.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
                frame_definition.rotation = frame.value("rotation", 0.0f);
                frame_definition.duration = frame.value("duration", 1.0f);
                anim->duration += frame_definition.duration;
                frame_definition.real_duration = anim->duration;
                frame_definition.texture = api::graphics::textures::get_texture(frame.value("texture", std::string("")));
                app::Vector2 texture_size;
                auto has_texture_size = frame.contains("texture_size");
                if (has_texture_size) {
                    texture_size = frame.value("texture_size", app::Vector2{ 1.f, 1.f });
                    frame_definition.aspect_ratio = texture_size.y / texture_size.x;
                }

                api::graphics::textures::MaterialParams mat_params;
                if (frame.contains("texture_params")) {
                    auto params = frame["texture_params"];
                    mat_params.color = params.value("color", app::Color{ 1.f, 1.f, 1.f, 1.f });
                    mat_params.scroll_rot = params.value("scroll_rot", app::Vector4{ 0.f, 0.f, 0.f, 0.f });
                    mat_params.uvs = params.value("uvs", app::Vector4{ 0.f, 0.f, 1.f, 1.f });
                    auto& value = mat_params.uvs.value();
                    if (has_texture_size) {
                        frame_definition.aspect_ratio = value.w / value.z;
                        value.x /= texture_size.x;
                        value.y /= texture_size.y;
                        value.z /= texture_size.x;
                        value.w /= texture_size.y;
                    }

                    value.y = 1.f - value.y - value.w;
                } else {
                    mat_params.color = app::Color{ 1.f, 1.f, 1.f, 1.f };
                    mat_params.scroll_rot = app::Vector4{ 0.f, 0.f, 0.f, 0.f };
                    mat_params.uvs = app::Vector4{ 0.f, 0.f, 1.f, 1.f };
                }

                frame_definition.params = std::optional(mat_params);
            }
        } catch (std::exception& ex) {
            warn("anim_renderer", std::format("failed to read '{}{}' error '{}'", base_path().string(), path, ex.what()));
        }

        return anim;
    }

    std::shared_ptr<AnimationDefinition> copy_animation(std::shared_ptr<AnimationDefinition> value) { return value; }

    Animation::Animation() {
        m_root = types::GameObject::create();
        UnityEngine::GameObject::ctor_1(m_root, il2cpp::string_new("rando_animation"));
        add_to_container(api::game::RandoContainer::GameObjects, m_root);
        m_sprite.set_parent(m_root);
    }

    Animation::Animation(std::shared_ptr<AnimationDefinition> definition)
        : Animation() {
        m_definitions.push_back(std::move(definition));
    }

    Animation::~Animation() {
        if (il2cpp::unity::is_valid(m_root)) {
            il2cpp::unity::destroy_object(m_root);
            m_root = nullptr;
        }
    }

    void Animation::add_definition(std::shared_ptr<AnimationDefinition> definition) {
        m_definitions.push_back(std::move(definition));
    }

    void Animation::start(const int definition_index, const bool repeat) {
        if (m_definitions.size() <= definition_index) {
            stop();
            return;
        }

        m_frame = 0;
        m_time = 0;
        m_stopped = false;
        m_repeat = repeat;
        m_sprite.enabled(true);
        apply();
    }

    void Animation::stop() {
        m_stopped = true;
        m_repeat = false;
        m_sprite.enabled(false);
    }

    void Animation::update(const float dt) {
        if (!m_sprite.enabled() || is_finished() || is_stopped()) {
            return;
        }

        m_time += dt;
        int old_frame = m_frame;
        while (!is_finished() && m_time >= m_definitions[m_definition_index]->frames[m_frame].real_duration) {
            old_frame = m_frame;
            m_frame = (m_frame + 1) % m_definitions[m_definition_index]->frames.size();
            if (old_frame > m_frame) {
                m_time -= m_definitions[m_definition_index]->frames[old_frame].real_duration;
            }
        }

        if (old_frame != m_frame) {
            apply();
        }
    }

    void Animation::apply() {
        const auto frame_index = std::min(m_frame, m_definitions[m_definition_index]->frames.size() - 1);
        const auto& frame = m_definitions[m_definition_index]->frames[frame_index];
        m_sprite.layer(frame.layer);
        m_sprite.local_position(frame.position);
        m_sprite.local_rotation(frame.rotation);
        m_sprite.local_scale(frame.scale * m_scale);

        auto params = frame.params;
        if (!params.has_value()) {
            params = api::graphics::textures::MaterialParams();
        }

        params->color = params->color.has_value() ? params->color.value() * m_color_modulate : m_color_modulate;
        m_sprite.texture(frame.texture, frame.params);
    }

    CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation>& animation_cache() {
        return g_animation_cache;
    }
} // namespace core::animation
