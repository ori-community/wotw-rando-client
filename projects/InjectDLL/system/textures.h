#include <string_view>

namespace textures
{
    // All of the methods assume we are dealing with quads.
    void set_uvs(app::Renderer* renderer, app::Vector4& uvs);
    void set_default_uvs(app::Renderer* renderer);

    app::Texture2D* get_texture(std::wstring_view path, app::Vector4* uvs = nullptr);
}
