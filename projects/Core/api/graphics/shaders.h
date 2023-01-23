#pragma once

#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderProperties_TextureSuffixType__Enum.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Float__Enum.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Color.h>

#include <vector>
#include <Core/macros.h>

namespace core::shaders {
    struct CORE_DLLEXPORT TextureBlock {
        std::vector<app::UberShaderProperties_TextureSuffixType__Enum> properties;
        app::Texture* texture;
        app::Vector2 scale;
        app::Vector2 offset;
        app::Vector4 uvs = { 0.0f, 0.0f, 1.0f, 1.0f };
        app::Vector4 scroll_rot = { 0.0f, 0.0f, 0.0f, 0.0f };
    };

    struct CORE_DLLEXPORT ShaderInfo {
        std::vector<std::pair<app::UberShaderProperty_Texture__Enum, TextureBlock>> textures;
        std::vector<std::pair<app::UberShaderProperty_Color__Enum, app::Color>> colors;
        std::vector<std::pair<app::UberShaderProperty_Vector__Enum, app::Vector4>> vectors;
        std::vector<std::pair<app::UberShaderProperty_Float__Enum, float>> floats;
    };

    CORE_DLLEXPORT void apply(app::Renderer* renderer, ShaderInfo const& info);

    CORE_DLLEXPORT void set_float(app::Material* mat, std::string_view name, float value);
    CORE_DLLEXPORT void set_color(app::Material* mat, std::string_view name, const app::Color& value);
    CORE_DLLEXPORT void set_vector(app::Material* mat, std::string_view name, const app::Vector4& value);
    CORE_DLLEXPORT void set_texture(app::Material* mat, std::string_view name, app::Texture* value);

    /**
     * Duplicate a material
     * @param source
     * @return Newly created material
     */
    CORE_DLLEXPORT app::Material* copy_material(app::Material* source);

    /**
     * Duplicate materials in all renderers found in this GameObject
     * @param go
     */
    CORE_DLLEXPORT void duplicate_materials(app::GameObject* go);

    CORE_DLLEXPORT ShaderInfo get_info(app::Renderer* renderer);
    CORE_DLLEXPORT void set_color(app::GameObject* go, app::Color& color);
} // namespace core::shaders
