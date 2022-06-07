#pragma once

#include <Il2CppModLoader/interception_macros.h>

#include <vector>

namespace randomizer::shaders {
    struct TextureBlock {
        std::vector<app::UberShaderProperties_TextureSuffixType__Enum> properties;
        app::Texture* texture;
        app::Vector2 scale;
        app::Vector2 offset;
        app::Vector4 uvs = { 0.0f, 0.0f, 1.0f, 1.0f };
        app::Vector4 scroll_rot = { 0.0f, 0.0f, 0.0f, 0.0f };
    };

    struct ShaderInfo {
        std::vector<std::pair<app::UberShaderProperty_Texture__Enum, TextureBlock>> textures;
        std::vector<std::pair<app::UberShaderProperty_Color__Enum, app::Color>> colors;
        std::vector<std::pair<app::UberShaderProperty_Vector__Enum, app::Vector4>> vectors;
        std::vector<std::pair<app::UberShaderProperty_Float__Enum, float>> floats;
    };

    void apply(app::Renderer* renderer, ShaderInfo const& info);

    void set_float(app::Material* mat, std::string_view name, float value);
    void set_color(app::Material* mat, std::string_view name, const app::Color &value);
    void set_vector(app::Material *mat, std::string_view name, const app::Vector4 &value);
    void set_texture(app::Material* mat, std::string_view name, app::Texture* value);

    /**
     * Duplicate a material
     * @param source
     * @return Newly created material
     */
    app::Material* copy_material(app::Material* source);

    /**
     * Duplicate materials in all renderers found in this GameObject
     * @param go
     */
    void duplicate_materials(app::GameObject* go);

    ShaderInfo get_info(app::Renderer* renderer);
    void set_color(app::GameObject* go, app::Color& color);
} // namespace randomizer::shaders
