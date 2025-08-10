#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/UberShaderProperties_TextureSuffixType__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Float__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Vector__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberShaderAPI {
    IL2CPP_REGISTER_METHOD(0x01905780, bool, TryGetEditableMaterial, app::Renderer* renderer, app::Material** material)
    IL2CPP_REGISTER_METHOD(0x019058E0, bool, TryGetSharedMaterial, app::Renderer* renderer, app::Material** material)
    IL2CPP_REGISTER_METHOD(0x01905A40, app::Material*, GetEditableMaterial, app::Renderer* renderer)
    IL2CPP_REGISTER_METHOD(0x01905AA0, app::Material*, GetSharedMaterial, app::Renderer* renderer)
    IL2CPP_REGISTER_METHOD(
        0x01905B00,
        bool,
        HasProperty_1,
        app::Renderer* renderer,
        app::UberShaderProperty_Texture__Enum property,
        app::UberShaderProperties_TextureSuffixType__Enum suffix
    )
    IL2CPP_REGISTER_METHOD(0x01905C50, bool, HasProperty_2, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property)
    IL2CPP_REGISTER_METHOD(0x01905DA0, bool, HasProperty_3, app::Renderer* renderer, app::UberShaderProperty_Vector__Enum property)
    IL2CPP_REGISTER_METHOD(0x01905EF0, bool, HasProperty_4, app::Renderer* renderer, app::UberShaderProperty_Float__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906040, app::Texture*, GetTexture, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property)
    IL2CPP_REGISTER_METHOD(0x019061D0, app::Vector2, GetTextureScale, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906310, app::Vector2, GetTextureOffset, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906450, app::Vector4, GetTextureScrollRotData, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906690, app::Vector4, GetTextureAtlasUVs, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property)
    IL2CPP_REGISTER_METHOD(0x019068D0, app::Vector4, GetTextureAtlasScrollRotData, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906B10, app::Color, GetColor_1, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906C80, app::Color, GetColor_2, app::Renderer* renderer, app::Material* material, app::UberShaderProperty_Color__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906DA0, app::Vector4, GetVector, app::Renderer* renderer, app::UberShaderProperty_Vector__Enum property)
    IL2CPP_REGISTER_METHOD(0x01906F40, float, GetFloat, app::Renderer* renderer, app::UberShaderProperty_Float__Enum property)
    IL2CPP_REGISTER_METHOD(0x01907090, void, SetTexture, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property, app::Texture* texture)
    IL2CPP_REGISTER_METHOD(0x019071A0, void, SetTextureScale, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property, app::Vector2 scale)
    IL2CPP_REGISTER_METHOD(0x019072C0, void, SetTextureOffset, app::Renderer* renderer, app::UberShaderProperty_Texture__Enum property, app::Vector2 offset)
    IL2CPP_REGISTER_METHOD(
        0x019073E0,
        void,
        SetTextureScrollRotData,
        app::Renderer* renderer,
        app::UberShaderProperty_Texture__Enum property,
        app::Vector4 scroll_rot
    )
    IL2CPP_REGISTER_METHOD(
        0x01907630,
        void,
        SetTextureAtlasUVs,
        app::Renderer* renderer,
        app::UberShaderProperty_Texture__Enum property,
        app::Vector4 atlas_u_vs
    )
    IL2CPP_REGISTER_METHOD(
        0x01907880,
        void,
        SetTextureAtlasScrollRotData,
        app::Renderer* renderer,
        app::UberShaderProperty_Texture__Enum property,
        app::Vector4 atlas_scroll_rot
    )
    IL2CPP_REGISTER_METHOD(0x01907AD0, void, SetColor_1, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, app::Color color)
    IL2CPP_REGISTER_METHOD(
        0x01907C20,
        void,
        SetColor_2,
        app::Renderer* renderer,
        app::Material* material,
        app::UberShaderProperty_Color__Enum property,
        app::Color color
    )
    IL2CPP_REGISTER_METHOD(
        0x01907D30,
        void,
        SetAlpha,
        app::Renderer* renderer,
        app::Material* material,
        app::UberShaderProperty_Color__Enum property,
        float color
    )
    IL2CPP_REGISTER_METHOD(0x01907E40, void, SetVector_1, app::Renderer* renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 vector4)
    IL2CPP_REGISTER_METHOD(
        0x01907F50,
        void,
        SetVector_2,
        app::Renderer* renderer,
        app::UberShaderProperty_Vector__Enum property,
        app::Vector4 vector4,
        app::Material* material
    )
    IL2CPP_REGISTER_METHOD(0x019080A0, void, SetFloat_1, app::Renderer* renderer, app::UberShaderProperty_Float__Enum property, float val)
    IL2CPP_REGISTER_METHOD(
        0x019081B0,
        void,
        SetFloat_2,
        app::Renderer* renderer,
        app::UberShaderProperty_Float__Enum property,
        float val,
        app::Material* material
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearPropertyBlock, app::Renderer* renderer)
    IL2CPP_REGISTER_METHOD(
        0x019082C0,
        void,
        SetVectorInPropertyBlock,
        app::Renderer* renderer,
        app::UberShaderProperty_Vector__Enum property,
        app::Vector4 value
    )
    IL2CPP_REGISTER_METHOD(0x019083B0, void, SetFloatInPropertyBlock, app::Renderer* renderer, app::UberShaderProperty_Float__Enum property, float value)
    IL2CPP_REGISTER_METHOD(0x019084A0, void, cctor, )
} // namespace app::classes::UberShaderAPI
