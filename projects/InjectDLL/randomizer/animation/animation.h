#pragma once

#include <macros.h>
#include <enums/layer.h>
#include <randomizer/cached_loader.h>
#include <randomizer/render/sprite.h>

namespace randomizer
{
    struct AnimationFrame
    {
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

    struct AnimationDefinition
    {
    public:
        float duration = 0;
        std::vector<AnimationFrame> frames;
    };

    class Animation
    {
    public:
        Animation(AnimationDefinition const& definition);
        ~Animation();

        void start(bool repeat = false);
        void update(float dt);
        void stop();
        bool is_finished() { return m_time >= m_duration; }
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

    std::shared_ptr<AnimationDefinition>&& load_animation(std::string path);
    std::shared_ptr<AnimationDefinition>&& copy_animation(std::shared_ptr<AnimationDefinition> value);
    extern CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation> animation_cache;
}
