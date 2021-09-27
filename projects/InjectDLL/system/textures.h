#pragma once

#include <string_view>

#include <utils/shaders.h>

namespace textures
{
    struct TextureData
    {
        std::wstring path;
        app::Texture* texture = nullptr;
        app::Vector4 uvs = { 0.0f, 0.0f, 1.0f, 1.0f };
        app::Vector4 scroll_rot = { 0.0f, 0.0f, 0.0f, 0.0f };
        app::Color color = { 1.0f, 1.0f, 1.0f, 1.0f};
        app::Vector4 alpha_mask = { 0.0f, 0.0f, 0.0f, 0.0f };
    };

    void apply(app::Renderer* renderer, shaders::ShaderInfo const& info, TextureData const& data);
    void apply(app::Renderer* renderer, TextureData const& data);
    void apply_default(app::Renderer* renderer);
    TextureData get_texture(std::wstring_view path, shaders::ShaderInfo* info = nullptr);
}
