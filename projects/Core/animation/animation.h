#pragma once

#include <Core/api/graphics/sprite.h>
#include <Core/enums/layer.h>
#include <Core/macros.h>
#include <Core/utils/cached_loader.h>

namespace core::animation {
    struct CORE_DLLEXPORT AnimationFrame {
        app::Vector3 position;
        app::Vector3 scale;
        float rotation;

        Layer layer;
        float aspect_ratio;
        std::shared_ptr<textures::TextureData> texture;
        std::optional<textures::MaterialParams> params;

        float duration;
        float real_duration;
    };

    struct CORE_DLLEXPORT AnimationDefinition {
    public:
        float duration = 0;
        std::vector<AnimationFrame> frames;
    };

    class CORE_DLLEXPORT Animation {
    public:
        Animation(AnimationDefinition const& definition);
        ~Animation();

        void start(bool repeat = false);
        void update(float dt);
        void stop();
        bool is_finished() { return m_time >= m_duration || m_frame >= m_frames.size(); }
        bool is_stopped() { return m_stopped; }

        app::Color const& color() { return m_color_modulate; }
        void color(app::Color c) { m_color_modulate = c; }

        app::GameObject* root() { return m_root; }

    private:
        void apply();

        app::GameObject* m_root;
        Sprite m_sprite;
        app::Color m_color_modulate;

        bool m_stopped;
        float m_duration;
        float m_time;
        int m_frame;
        std::vector<AnimationFrame> m_frames;
    };

    CORE_DLLEXPORT std::shared_ptr<AnimationDefinition> load_animation(std::string path);
    CORE_DLLEXPORT std::shared_ptr<AnimationDefinition> copy_animation(std::shared_ptr<AnimationDefinition> value);
    extern CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation> animation_cache;
} // namespace core::animation
