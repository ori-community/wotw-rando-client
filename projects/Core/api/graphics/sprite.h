#pragma once

#include <Core/enums/layer.h>
#include <Core/macros.h>
#include <Core/api/graphics/textures.h>

namespace core {
    class CORE_DLLEXPORT Sprite {
    public:
        explicit Sprite(app::GameObject* parent = nullptr);
        ~Sprite();

        Sprite(Sprite const&) = delete;

        void layer(Layer l);
        void local_position(app::Vector3 p);
        void local_scale(app::Vector3 s);
        void local_rotation(float r);

        bool enabled();
        void enabled(bool value);

        void texture(std::shared_ptr<textures::TextureData> texture_data, std::optional<textures::MaterialParams> params);
        void set_parent(app::GameObject* parent);

    private:
        app::GameObject* m_root;
        app::Renderer* m_renderer;

        std::shared_ptr<textures::TextureData> m_texture_data;
        std::optional<textures::MaterialParams> m_texture_params;
    };
} // namespace core
