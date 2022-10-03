#include <randomizer/render/shaders.h>

#include <Common/ext.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/il2cpp_math.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Material.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Shader.h>
#include <Il2CppModLoader/app/methods/UberShaderAPI.h>

using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace randomizer::shaders {
    app::Material *copy_material(app::Material *source) {
        auto instanced_material = il2cpp::create_object<app::Material>("UnityEngine", "Material");
        Material::ctor_2(instanced_material, source);
        Material::CopyPropertiesFromMaterial(instanced_material, source);
        return instanced_material;
    }

    void duplicate_materials(app::GameObject *go) {
        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(go, "UnityEngine", "Renderer");
        for (auto renderer: renderers) {
            auto mat = UberShaderAPI::GetEditableMaterial(renderer);
            il2cpp::invoke(renderer, "set_sharedMaterial", randomizer::shaders::copy_material(mat));
        }
    }

    void set_float(app::Material *mat, std::string_view name, float value) {
        // For some reason, the SetFloat(string, float) overload is missing oriShrug
        Material::SetFloat(mat, Shader::PropertyToID(il2cpp::string_new(name)), value);
    }

    void set_color(app::Material *mat, std::string_view name, const app::Color &value) {
        Material::SetColor_1(mat, il2cpp::string_new(name), value);
    }

    void set_texture(app::Material *mat, std::string_view name, app::Texture *value) {
        Material::SetTexture_1(mat, il2cpp::string_new(name), value);
    }

    void set_vector(app::Material *mat, std::string_view name, const app::Vector4 &value) {
        Material::SetVector(mat, Shader::PropertyToID(il2cpp::string_new(name)), value);
    }

    ShaderInfo get_info(app::Renderer *renderer) {
        ShaderInfo info;
        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Texture__Enum::TotalTextureProperties); ++i) {
            auto value = static_cast<app::UberShaderProperty_Texture__Enum>(i);
            TextureBlock block;
            for (int j = 0; j < 6; ++j) {
                auto suffix = static_cast<app::UberShaderProperties_TextureSuffixType__Enum>(j);
                if (UberShaderAPI::HasProperty_1(renderer, value, suffix))
                    block.properties.push_back(suffix);
            }

            if (!block.properties.empty()) {
                block.offset = UberShaderAPI::GetTextureOffset(renderer, value);
                block.scale = UberShaderAPI::GetTextureScale(renderer, value);
                block.uvs = UberShaderAPI::GetTextureAtlasUVs(renderer, value);
                block.scroll_rot = UberShaderAPI::GetTextureScrollRotData(renderer, value);
                block.texture = UberShaderAPI::GetTexture(renderer, value);
                info.textures.emplace_back(value, block);
            }
        }

        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Color__Enum::TotalColorProperties); ++i) {
            auto value = static_cast<app::UberShaderProperty_Color__Enum>(i);
            if (UberShaderAPI::HasProperty_2(renderer, value))
                info.colors.emplace_back(value, UberShaderAPI::GetColor_1(renderer, value));
        }

        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Vector__Enum::TotalVectorProperties); ++i) {
            auto value = static_cast<app::UberShaderProperty_Vector__Enum>(i);
            if (UberShaderAPI::HasProperty_3(renderer, value))
                info.vectors.emplace_back(value, UberShaderAPI::GetVector(renderer, value));
        }

        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Float__Enum::TotalFloatProperties); ++i) {
            auto value = static_cast<app::UberShaderProperty_Float__Enum>(i);
            if (UberShaderAPI::HasProperty_4(renderer, value))
                info.floats.emplace_back(value, UberShaderAPI::GetFloat(renderer, value));
        }

        return info;
    }

    void apply(app::Renderer *renderer, ShaderInfo const &info) {
        for (auto const &pair: info.textures) {
            auto const &value = pair.first;
            auto const &block = pair.second;
            UberShaderAPI::SetTextureOffset(renderer, value, block.offset);
            UberShaderAPI::SetTextureScale(renderer, value, block.scale);
            UberShaderAPI::SetTextureAtlasUVs(renderer, value, block.uvs);
            UberShaderAPI::SetTextureScrollRotData(renderer, value, block.scroll_rot);
            UberShaderAPI::SetTexture(renderer, value, block.texture);
        }

        for (auto const &pair: info.colors)
            UberShaderAPI::SetColor_1(renderer, pair.first, pair.second);

        for (auto const &pair: info.vectors)
            UberShaderAPI::SetVector_1(renderer, pair.first, pair.second);

        for (auto const &pair: info.floats)
            UberShaderAPI::SetFloat_1(renderer, pair.first, pair.second);
    }
} // namespace randomizer
