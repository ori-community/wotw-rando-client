#pragma once

#include <Core/api/graphics/shaders.h>
#include <Core/macros.h>
#include <Modloader/app/structs/Texture2D.h>

#include <memory>
#include <optional>
#include <string_view>
#include <unordered_map>

namespace core::api::graphics::textures {
    struct CORE_DLLEXPORT MaterialParams {
        std::optional<app::Vector4> uvs = std::nullopt;
        std::optional<app::Vector4> scroll_rot = std::nullopt;
        std::optional<app::Color> color = std::nullopt;
    };

    CORE_C_DLLEXPORT void reload_all_file_textures();

    class CORE_DLLEXPORT TextureData {
    public:
        TextureData() = default;
        TextureData(const TextureData&) = delete;
        TextureData& operator=(const TextureData&) = delete;

        ~TextureData();

        void apply(app::GameObject* go);
        void apply(app::Material* mat);
        void apply(app::Renderer* renderer, MaterialParams* extra = nullptr);
        void apply_texture(app::Renderer* renderer);
        void apply_params(app::Renderer* renderer, MaterialParams* extra = nullptr);
        void apply_texture_unity(app::Renderer* renderer);
        void apply_params_unity(app::Renderer* renderer, MaterialParams* extra = nullptr);
        app::Texture2D* get();

        void set_texture(app::Texture* texture_ptr);
        void set_uvs(app::Vector4 uvs);
        void set_scroll_rot(app::Vector4 scroll_rot);
        void set_color(app::Color color);
        void clear_overrides();

        std::string const& get_path() { return path; }

    private:
        bool initialized = true;
        std::string path;
        std::optional<GCHandleId> texture;
        MaterialParams local;

        void load_texture();
        void reload_file_texture();

        CORE_DLLEXPORT friend std::shared_ptr<TextureData> create_texture();
        CORE_DLLEXPORT friend std::shared_ptr<TextureData> get_texture(std::string_view path);
        CORE_DLLEXPORT friend void reload_all_file_textures();
    };

    CORE_DLLEXPORT std::shared_ptr<TextureData> create_texture();
    CORE_DLLEXPORT std::shared_ptr<TextureData> get_texture(std::string_view path);
    CORE_DLLEXPORT void apply_default(app::Renderer* renderer);
} // namespace core::textures
