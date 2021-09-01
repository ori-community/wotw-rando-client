#pragma once

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

    ShaderInfo get_info(app::Renderer* renderer);
}
