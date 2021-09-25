#include <string_view>

namespace textures
{
    struct TextureData
    {
        app::Texture* texture = nullptr;
        app::Vector4 uvs = { 0 };
        app::Vector4 scroll_rot = { 0 };
        float alpha_color = 0.0f;
    };

    void apply(app::Renderer* renderer, TextureData const& data);
    void apply_default(app::Renderer* renderer);
    TextureData get_texture(std::wstring_view path);
}
