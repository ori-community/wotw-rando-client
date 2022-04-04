#include <utils/shaders.h>

#include <Common/ext.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/il2cpp_math.h>

namespace shaders
{
    STATIC_IL2CPP_BINDING(, UberShaderAPI, bool, HasProperty, 
        (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::UberShaderProperties_TextureSuffixType__Enum suffix));
    NAMED_STATIC_IL2CPP_BINDING_OVERLOAD(, UberShaderAPI, bool, HasProperty, HasPropertyColor,
        (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop), (UnityEngine:Renderer, UberShaderProperty_Color));
    NAMED_STATIC_IL2CPP_BINDING_OVERLOAD(, UberShaderAPI, bool, HasProperty, HasPropertyVector,
        (app::Renderer* renderer, app::UberShaderProperty_Vector__Enum prop), (UnityEngine:Renderer, UberShaderProperty_Vector));
    NAMED_STATIC_IL2CPP_BINDING_OVERLOAD(, UberShaderAPI, bool, HasProperty, HasPropertyFloat,
        (app::Renderer* renderer, app::UberShaderProperty_Float__Enum prop), (UnityEngine:Renderer, UberShaderProperty_Float));

    IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, SetInt, (app::Material* this_ptr, app::String* name, int value), (System:String, System:Int32));
    IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, SetFloat, (app::Material* this_ptr, app::String* name, float value), (System:String, System:Single));
    IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, SetColor, (app::Material* this_ptr, app::String* name, app::Color* value), (System:String, UnityEngine:Color));
    IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, SetVector, (app::Material* this_ptr, app::String* name, app::Vector4* value), (System:String, UnityEngine:Vector3));
    IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, SetTexture, (app::Material* this_ptr, app::String* name, app::Texture* value), (System:String, UnityEngine:Texture));

    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, void const* texture));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTextureScale, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Vector2 const* scale));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTextureOffset, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Vector2 const* offset));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTextureAtlasUVs, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p, app::Vector4 const* atlas_uvs));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTextureScrollRotData, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p, app::Vector4 const* scroll_rot));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetVector, (app::Renderer* this_ptr, app::UberShaderProperty_Vector__Enum p, app::Vector4 const* vec));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetColor, (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop, app::Color const* color));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetFloat, (app::Renderer* renderer, app::UberShaderProperty_Float__Enum prop, float value));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetAlpha, (app::Renderer* this_ptr, app::Material* material, app::UberShaderProperty_Color__Enum p, float color));

    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Material*, GetEditableMaterial, (app::Renderer* this_ptr));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Material*, GetSharedMaterial, (app::Renderer* this_ptr));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Texture*, GetTexture, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Vector2, GetTextureScale, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Vector2, GetTextureOffset, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Vector4, GetTextureAtlasUVs, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Vector4, GetTextureScrollRotData, (app::Renderer* this_ptr, app::UberShaderProperty_Texture__Enum p));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Vector4, GetVector, (app::Renderer* this_ptr, app::UberShaderProperty_Vector__Enum p));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, app::Color, GetColor, (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, float, GetFloat, (app::Renderer* renderer, app::UberShaderProperty_Float__Enum prop));


    void set_float(app::Material* mat, std::string_view name, float value)
    {
        Material::SetFloat(mat, il2cpp::string_new(name), value);
    }

    void set_color(app::Material* mat, std::string_view name, app::Color value)
    {
        Material::SetColor(mat, il2cpp::string_new(name), &value);
    }

    void set_texture(app::Material* mat, std::string_view name, app::Texture* value)
    {
        Material::SetTexture(mat, il2cpp::string_new(name), value);
    }

    void set_vector(app::Material* mat, std::string_view name, app::Vector4 value)
    {
        Material::SetVector(mat, il2cpp::string_new(name), &value);
    }

    ShaderInfo get_info(app::Renderer* renderer)
    {
        ShaderInfo info;
        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Texture__Enum_TotalTextureProperties); ++i)
        {
            auto value = static_cast<app::UberShaderProperty_Texture__Enum>(i);
            TextureBlock block;
            for (int j = 0 ; j < 6; ++j)
            {
                auto suffix = static_cast<app::UberShaderProperties_TextureSuffixType__Enum>(j);
                if (UberShaderAPI::HasProperty(renderer, value, suffix))
                    block.properties.push_back(suffix);
            }

            if (!block.properties.empty())
            {
                block.offset = UberShaderAPI::GetTextureOffset(renderer, value);
                block.scale = UberShaderAPI::GetTextureScale(renderer, value);
                block.uvs = UberShaderAPI::GetTextureAtlasUVs(renderer, value);
                block.scroll_rot = UberShaderAPI::GetTextureScrollRotData(renderer, value);
                block.texture = UberShaderAPI::GetTexture(renderer, value);
                info.textures.push_back({ value, block });
            }
        }

        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Color__Enum_TotalColorProperties); ++i)
        {
            auto value = static_cast<app::UberShaderProperty_Color__Enum>(i);
            if (UberShaderAPI::HasPropertyColor(renderer, value))
                info.colors.push_back({ value, UberShaderAPI::GetColor(renderer, value) });
        }

        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Vector__Enum_TotalVectorProperties); ++i)
        {
            auto value = static_cast<app::UberShaderProperty_Vector__Enum>(i);
            if (UberShaderAPI::HasPropertyVector(renderer, value))
                info.vectors.push_back({ value, UberShaderAPI::GetVector(renderer, value) });
        }

        for (int i = 0; i < static_cast<int>(app::UberShaderProperty_Float__Enum_TotalFloatProperties); ++i)
        {
            auto value = static_cast<app::UberShaderProperty_Float__Enum>(i);
            if (UberShaderAPI::HasPropertyFloat(renderer, value))
                info.floats.push_back({ value, UberShaderAPI::GetFloat(renderer, value) });
        }

        return info;
    }

    void apply(app::Renderer* renderer, ShaderInfo const& info)
    {
        for (auto const& pair : info.textures)
        {
            auto const& value = pair.first;
            auto const& block = pair.second;
            UberShaderAPI::SetTextureOffset(renderer, value, &block.offset);
            UberShaderAPI::SetTextureScale(renderer, value, &block.scale);
            UberShaderAPI::SetTextureAtlasUVs(renderer, value, &block.uvs);
            UberShaderAPI::SetTextureScrollRotData(renderer, value, &block.scroll_rot);
            UberShaderAPI::SetTexture(renderer, value, block.texture);
        }

        for (auto const& pair : info.colors)
            UberShaderAPI::SetColor(renderer, pair.first, &pair.second);

        for (auto const& pair : info.vectors)
            UberShaderAPI::SetVector(renderer, pair.first, &pair.second);

        for (auto const& pair : info.floats)
            UberShaderAPI::SetFloat(renderer, pair.first, pair.second);
    }
}
