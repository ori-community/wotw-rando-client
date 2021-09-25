#pragma once

#include <Il2CppModLoader/interception_macros.h>

#include <vector>

namespace shaders
{
    struct ShaderInfo
    {
        std::vector<std::pair<app::UberShaderProperty_Texture__Enum, app::UberShaderProperties_TextureSuffixType__Enum>> textures;
        std::vector<app::UberShaderProperty_Color__Enum> colors;
        std::vector<app::UberShaderProperty_Vector__Enum> vectors;
        std::vector<app::UberShaderProperty_Float__Enum> floats;
    };

    DECLARE_BINDING(, UberShaderAPI, void, SetColor, (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop, app::Color* color));
    DECLARE_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Texture* texture));
    DECLARE_BINDING(, UberShaderAPI, void, SetTextureAtlasUVs, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p, app::Vector4* atlas_uvs));

    DECLARE_BINDING(, UberShaderAPI, app::Vector4, GetTextureAtlasUVs, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    DECLARE_BINDING(, UberShaderAPI, app::Texture*, GetTexture, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));

    ShaderInfo get_info(app::Renderer* renderer);
}
