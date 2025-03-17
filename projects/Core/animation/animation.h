#pragma once

#include <Core/actors/actor.h>
#include <Core/api/graphics/sprite.h>
#include <Core/cached_loader.h>
#include <Core/enums/layer.h>
#include <Core/macros.h>

namespace core::animation {
    struct CORE_DLLEXPORT AnimationFrame {
        app::Vector3 position;
        app::Vector3 scale;
        float rotation;

        Layer layer;
        float aspect_ratio;
        std::shared_ptr<api::graphics::textures::TextureData> texture;
        std::optional<api::graphics::textures::MaterialParams> params;

        float duration;
        float real_duration;
    };

    struct CORE_DLLEXPORT AnimationDefinition {
        float duration = 0;
        std::vector<AnimationFrame> frames;
    };

    class CORE_DLLEXPORT Animation final : public actors::Component {
    public:
        void add_definition(std::shared_ptr<AnimationDefinition> definition);

        static size_t static_component_id();
        size_t component_id() override;

        void start(int definition_index, bool repeat = false);
        void stop();

        void on_registered(actors::Actor* actor) override;
        void on_deregistered() override;
        void on_enabled(bool enabled) override;
        void on_update(float dt) override;

        bool is_stopped() const { return m_stopped; }
        bool is_finished() const {
            const auto& definition = m_definitions[m_definition_index];
            return is_stopped() || !m_repeat && (m_time >= definition->duration || m_frame >= definition->frames.size());
        }

        float const& scale() const { return m_scale; }
        void scale(const float s) { m_scale = s; }

        app::Color const& color() const { return m_color_modulate; }
        void color(const app::Color c) { m_color_modulate = c; }

    private:
        void apply();

        api::graphics::Sprite m_sprite;
        app::Color m_color_modulate{1, 1, 1, 1};
        std::vector<std::shared_ptr<AnimationDefinition>> m_definitions;

        float m_scale = 1.0f;
        bool m_stopped = true;
        float m_time = 0.0f;
        std::size_t m_frame = 0;
        std::size_t m_definition_index = 0;
        bool m_repeat = false;
    };

    CORE_DLLEXPORT std::shared_ptr<AnimationDefinition> load_animation(std::string path);
    CORE_DLLEXPORT std::shared_ptr<AnimationDefinition> copy_animation(std::shared_ptr<AnimationDefinition> value);
    CORE_DLLEXPORT CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation>& animation_cache();
} // namespace core::animation
