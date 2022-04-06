#pragma once

#include <macros.h>
#include <randomizer/render/shaders.h>

#include <memory>
#include <optional>
#include <string_view>
#include <unordered_map>

namespace randomizer
{
    namespace textures
    {
        struct MaterialParams
        {
            std::optional<app::Vector4> uvs;
            std::optional<app::Vector4> scroll_rot;
            std::optional<app::Color> color;
        };

        INJECT_C_DLLEXPORT void reload_all_file_textures();

        class TextureData
        {
        public:
            TextureData() = default;
            TextureData(const TextureData&) = delete;
            TextureData& operator=(const TextureData&) = delete;

            ~TextureData();

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

            std::wstring const& get_path() { return path; }
        private:
            bool initialized = true;
            std::wstring path;
            std::optional<uint32_t> texture;
            MaterialParams local;

            void load_texture();
            void reload_file_texture();

            friend std::shared_ptr<TextureData> create_texture();
            friend std::shared_ptr<TextureData> get_texture(std::wstring_view path);
            friend void reload_all_file_textures();
        };

        std::shared_ptr<TextureData> create_texture();
        std::shared_ptr<TextureData> get_texture(std::wstring_view path);
        void apply_default(app::Renderer* renderer);
    }
}
