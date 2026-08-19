#pragma once

#include <Core/enums/layer.h>
#include <Core/macros.h>
#include <Core/api/graphics/textures.h>

namespace core::api::graphics {
    class CORE_DLLEXPORT Sprite {
    public:
        enum class Anchor {
            MiddleCenter,
            TopLeft,
            TopCenter,
            TopRight,
            MiddleLeft,
            MiddleRight,
            BottomLeft,
            BottomCenter,
            BottomRight,
        };

        explicit Sprite();
        explicit Sprite(app::GameObject* parent);
        explicit Sprite(Anchor anchor);
        Sprite(app::GameObject* parent, Anchor anchor);

        ~Sprite();
        void anchor(Anchor anchor);
        void layer(Layer l);
        void local_position(app::Vector3 p);
        void local_scale(app::Vector3 s);
        void local_rotation(float r);
        bool enabled();
        void enabled(bool value);

        Sprite(Sprite const&) = delete;

        void anchor(Anchor anchor) const;
        void layer(Layer l) const;
        void local_position(app::Vector3 p) const;
        void local_scale(app::Vector3 s) const;
        void local_rotation(float r) const;

        bool enabled() const;
        void enabled(bool value) const;

        void texture(const std::shared_ptr<textures::Texture>& texture);
        void set_parent(app::GameObject* parent);
        app::GameObject* get_game_object();
        void set_parent(app::GameObject* parent) const;

        app::GameObject* get_game_object() const;

    private:
        il2cpp::GCRef<app::GameObject> m_root;
        app::Renderer* m_renderer;

        std::shared_ptr<textures::Texture> m_texture;
    };
} // namespace core
