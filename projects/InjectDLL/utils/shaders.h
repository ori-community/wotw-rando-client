#pragma once

#include <Il2CppModLoader/interception_macros.h>

#include <vector>

namespace shaders
{
    struct TextureBlock
    {
        std::vector<app::UberShaderProperties_TextureSuffixType__Enum> properties;
        app::Texture* texture;
        app::Vector2 scale;
        app::Vector2 offset;
        app::Vector4 uvs = { 0.0f, 0.0f, 1.0f, 1.0f };
        app::Vector4 scroll_rot = { 0.0f, 0.0f, 0.0f, 0.0f };
    };

    struct ShaderInfo
    {
        std::vector<std::pair<app::UberShaderProperty_Texture__Enum, TextureBlock>> textures;
        std::vector<std::pair<app::UberShaderProperty_Color__Enum, app::Color>> colors;
        std::vector<std::pair<app::UberShaderProperty_Vector__Enum, app::Vector4>> vectors;
        std::vector<std::pair<app::UberShaderProperty_Float__Enum, float>> floats;
    };

    void apply(app::Renderer* renderer, ShaderInfo const& info);

    void set_float(app::Material* mat, std::string_view name, float value);
    void set_color(app::Material* mat, std::string_view name, app::Color value);
    void set_vector(app::Material* mat, std::string_view name, app::Vector4 value);
    void set_texture(app::Material* mat, std::string_view name, app::Texture* value);

    DECLARE_BINDING(UnityEngine, Material, void, SetInt, (app::Material* this_ptr, app::String* name, int value));
    DECLARE_BINDING(UnityEngine, Material, void, SetFloat, (app::Material* this_ptr, app::String* name, float value));
    DECLARE_BINDING(UnityEngine, Material, void, SetColor, (app::Material* this_ptr, app::String* name, app::Color* value));
    DECLARE_BINDING(UnityEngine, Material, void, SetVector, (app::Material* this_ptr, app::String* name, app::Vector4* value));
    DECLARE_BINDING(UnityEngine, Material, void, SetTexture, (app::Material* this_ptr, app::String* name, app::Texture* value));

    DECLARE_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, void const* texture));
    DECLARE_BINDING(, UberShaderAPI, void, SetTextureAtlasUVs, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p, app::Vector4 const* atlas_uvs));
    DECLARE_BINDING(, UberShaderAPI, void, SetTextureScrollRotData, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p, app::Vector4 const* scroll_rot));
    DECLARE_BINDING(, UberShaderAPI, void, SetVector, (app::Renderer* this_ptr, app::UberShaderProperty_Vector__Enum p, app::Vector4 const* vec));
    DECLARE_BINDING(, UberShaderAPI, void, SetColor, (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop, app::Color const* color));
    DECLARE_BINDING(, UberShaderAPI, void, SetFloat, (app::Renderer* renderer, app::UberShaderProperty_Float__Enum prop, float value));
    DECLARE_BINDING(, UberShaderAPI, void, SetAlpha, (app::Renderer* this_ptr, app::Material* material, app::UberShaderProperty_Color__Enum p, float color));

    DECLARE_BINDING(, UberShaderAPI, app::Material*, GetEditableMaterial, (app::Renderer* this_ptr));
    DECLARE_BINDING(, UberShaderAPI, app::Material*, GetSharedMaterial, (app::Renderer* this_ptr));
    DECLARE_BINDING(, UberShaderAPI, app::Vector4, GetTextureAtlasUVs, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    DECLARE_BINDING(, UberShaderAPI, app::Vector4, GetTextureScrollRotData, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    DECLARE_BINDING(, UberShaderAPI, app::Texture*, GetTexture, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    DECLARE_BINDING(, UberShaderAPI, app::Vector4, GetVector, (app::Renderer* this_ptr, app::UberShaderProperty_Vector__Enum p));
    DECLARE_BINDING(, UberShaderAPI, app::Color, GetColor, (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop));
    DECLARE_BINDING(, UberShaderAPI, float, GetFloat, (app::Renderer* renderer, app::UberShaderProperty_Float__Enum prop));

    ShaderInfo get_info(app::Renderer* renderer);
    void set_color(app::GameObject* go, app::Color& color);
}
