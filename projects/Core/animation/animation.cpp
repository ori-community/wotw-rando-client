#include <Core/animation/animation.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/graphics/textures.h>
#include <Core/dirty_value.h>
#include <Core/utils/json_serializers.h>
#include <Core/utils/operations.h>
#include <Core/dev/object_visualizer.h>

#include <Common/ext.h>

#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <memory>
#include <nlohmann/json.hpp>

#include <fstream>
#include <unordered_map>

#include "Core/fs.h"

using namespace app::classes;
using namespace modloader;

namespace core::animation {
    CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation> animation_cache;

    std::shared_ptr<AnimationDefinition> load_animation(const std::filesystem::path& asset_path) {
        const auto confined_asset_path = fs::get_confined_asset_path(asset_path);

        auto animation_definition = std::make_shared<AnimationDefinition>();
        if (!confined_asset_path.has_value()) {
            return animation_definition;
        }

        nlohmann::json j;
        load_json_file(*confined_asset_path, j);

        try {
            animation_definition->duration = 0.f;
            auto frames = j.at("frames");
            for (auto frame : frames) {
                auto& frame_definition = animation_definition->frames.emplace_back();
                frame_definition.position = frame.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                frame_definition.scale = frame.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
                frame_definition.rotation = frame.value("rotation", 0.0f);
                frame_definition.duration = frame.value("duration", 1.0f);
                animation_definition->duration += frame_definition.duration;
                frame_definition.real_duration = animation_definition->duration;
                frame_definition.texture = api::graphics::textures::get_texture_from_identifier(frame.value("texture", std::string("")));
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
            warn("anim_renderer", std::format("failed to read '{}' error '{}'", confined_asset_path->string(), ex.what()));
        }

        return animation_definition;
    }

    std::shared_ptr<AnimationDefinition> copy_animation(std::shared_ptr<AnimationDefinition> value) {
        return value;
    }

    Animation::Animation(AnimationDefinition const& definition)
            : m_sprite(), m_color_modulate{ 1, 1, 1, 1 }, m_duration(definition.duration), m_frame(0), m_frames(definition.frames) {
        m_root = types::GameObject::create();
        il2cpp::invoke(m_root, ".ctor");
        il2cpp::invoke(m_root, "set_name", il2cpp::string_new("rando_animation"));
        core::api::game::add_to_container(core::api::game::GameObjectContainer::Miscellaneous, m_root);
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
            params = api::graphics::textures::MaterialParams();

        params->color = params->color.has_value()
            ? params->color.value() * m_color_modulate
            : m_color_modulate;

        m_sprite.texture(frame.texture, frame.params);
    }
} // namespace core::animation
