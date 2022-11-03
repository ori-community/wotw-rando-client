#include <animation/animation.h>

#include <dev/object_visualizer.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/utils/dirty_value.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/graphics/textures.h>
#include <Core/utils/json_serializers.h>
#include <Core/utils/operations.h>

#include <Common/ext.h>

#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

#include <nlohmann/json.hpp>

#include <fstream>
#include <unordered_map>

using namespace app::classes;
using namespace modloader;

namespace core::animation {
    CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation> animation_cache;

    std::shared_ptr<AnimationDefinition> load_animation(std::string path) {
        nlohmann::json j;
        load_json_file(path, j);
        std::shared_ptr<AnimationDefinition> anim(new AnimationDefinition());
        try {
            anim->duration = 0.f;
            auto frames = j.at("frames");
            for (auto frame : frames) {
                auto& frame_definition = anim->frames.emplace_back();
                frame_definition.position = frame.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                frame_definition.scale = frame.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
                frame_definition.rotation = frame.value("rotation", 0.0f);
                frame_definition.duration = frame.value("duration", 1.0f);
                anim->duration += frame_definition.duration;
                frame_definition.real_duration = anim->duration;
                auto texture_str = convert_string_to_wstring(frame.value("texture", std::string("")));
                frame_definition.texture = textures::get_texture(texture_str);
                app::Vector2 texture_size;
                auto has_texture_size = frame.contains("texture_size");
                if (has_texture_size) {
                    texture_size = frame.value("texture_size", app::Vector2{ 1.f, 1.f });
                    frame_definition.aspect_ratio = texture_size.y / texture_size.x;
                }

                textures::MaterialParams mat_params;
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
            trace(MessageType::Warning, 3, "anim_renderer", format("failed to read '%s%s' error '%s'", base_path.c_str(), path.c_str(), ex.what()));
        }

        return anim;
    }

    std::shared_ptr<AnimationDefinition> copy_animation(std::shared_ptr<AnimationDefinition> value) {
        return value;
    }

    Animation::Animation(AnimationDefinition const& definition) :
            m_sprite(), m_color_modulate{ 1, 1, 1, 1 }, m_duration(definition.duration), m_frame(0), m_frames(definition.frames) {
        m_root = types::GameObject::create();
        il2cpp::invoke(m_root, ".ctor");
        il2cpp::invoke(m_root, "set_name", il2cpp::string_new("rando_animation"));
        game::add_to_container(game::RandoContainer::GameObjects, m_root);
        m_sprite.set_parent(m_root);
    }

    Animation::~Animation() {
        if (il2cpp::unity::is_valid(m_root)) {
            il2cpp::unity::destroy_object(m_root);
            m_root = nullptr;
        }
    }

    void Animation::start(bool repeat) {
        m_frame = 0;
        m_stopped = false;
        m_time = repeat ? m_time - m_duration : 0;
        m_sprite.enabled(true);
        apply();
    }

    void Animation::stop() {
        m_stopped = true;
        m_sprite.enabled(false);
    }

    void Animation::update(float dt) {
        if (!m_sprite.enabled() || is_finished() || is_stopped())
            return;

        m_time += dt;
        int old_frame = m_frame;
        while (!is_finished() && m_time >= m_frames[m_frame].real_duration)
            ++m_frame;

        if (old_frame != m_frame)
            apply();
    }

    void Animation::apply() {
        auto const& frame = m_frames[std::min(m_frame, static_cast<int>(m_frames.size()))];
        m_sprite.layer(frame.layer);
        m_sprite.local_position(frame.position);
        m_sprite.local_rotation(frame.rotation);
        m_sprite.local_scale(frame.scale);

        auto params = frame.params;
        if (!params.has_value())
            params = textures::MaterialParams();

        params->color = params->color.has_value()
                ? params->color.value() * m_color_modulate
                : m_color_modulate;

        m_sprite.texture(frame.texture, frame.params);
    }
} // namespace core::animation
