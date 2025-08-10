#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::UnityEngine::Material {
    IL2CPP_REGISTER_METHOD(0x02531050, void, ctor_1, app::Material* this_ptr, app::Shader* shader)
    IL2CPP_REGISTER_METHOD(0x02531140, void, ctor_2, app::Material* this_ptr, app::Material* source)
    IL2CPP_REGISTER_METHOD(0x02531230, void, ctor_3, app::Material* this_ptr, app::String* contents)
    IL2CPP_REGISTER_METHOD(0x02531300, void, CreateWithShader, app::Material* self, app::Shader* shader)
    IL2CPP_REGISTER_METHOD(0x02531360, void, CreateWithMaterial, app::Material* self, app::Material* source)
    IL2CPP_REGISTER_METHOD(0x025313C0, void, CreateWithString, app::Material* self)
    IL2CPP_REGISTER_METHOD(0x02531410, app::Shader*, get_shader, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02531460, void, set_shader, app::Material* this_ptr, app::Shader* value)
    IL2CPP_REGISTER_METHOD(0x025314C0, app::Color, get_color, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025315F0, void, set_color, app::Material* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x02531710, app::Texture*, get_mainTexture, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02531820, void, set_mainTexture, app::Material* this_ptr, app::Texture* value)
    IL2CPP_REGISTER_METHOD(0x025318C0, app::Vector2, get_mainTextureOffset, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02531990, void, set_mainTextureOffset, app::Material* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02531AC0, app::Vector2, get_mainTextureScale, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02531B90, void, set_mainTextureScale, app::Material* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02531CC0, bool, HasProperty_1, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02531D20, bool, HasProperty_2, app::Material* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02531DD0, int32_t, get_renderQueue, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02531E20, void, set_renderQueue, app::Material* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02531E80, void, EnableKeyword_1, app::Material* this_ptr, int32_t keyword_i_d)
    IL2CPP_REGISTER_METHOD(0x02531EE0, void, DisableKeyword_1, app::Material* this_ptr, int32_t keyword_i_d)
    IL2CPP_REGISTER_METHOD(0x02531F40, bool, IsKeywordEnabled, app::Material* this_ptr, int32_t keyword_i_d)
    IL2CPP_REGISTER_METHOD(0x02531FA0, int32_t, get_passCount, app::Material* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02531FF0,
        app::String*,
        GetTagImpl,
        app::Material* this_ptr,
        app::String* tag,
        bool current_sub_shader_only,
        app::String* default_value
    )
    IL2CPP_REGISTER_METHOD(0x02532080, app::String*, GetTag, app::Material* this_ptr, app::String* tag, bool search_fallbacks)
    IL2CPP_REGISTER_METHOD(0x02532170, bool, SetPass, app::Material* this_ptr, int32_t pass)
    IL2CPP_REGISTER_METHOD(0x025321D0, void, CopyPropertiesFromMaterial, app::Material* this_ptr, app::Material* mat)
    IL2CPP_REGISTER_METHOD(0x02532230, void, SetShaderKeywords, app::Material* this_ptr, app::String__Array* names)
    IL2CPP_REGISTER_METHOD(0x02532230, void, set_shaderKeywords, app::Material* this_ptr, app::String__Array* value)
    IL2CPP_REGISTER_METHOD(0x02532290, void, SetFloatImpl, app::Material* this_ptr, int32_t name, float value)
    IL2CPP_REGISTER_METHOD(0x02532300, void, SetIntImpl, app::Material* this_ptr, int32_t name, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02532370, void, SetColorImpl, app::Material* this_ptr, int32_t name, app::Color value)
    IL2CPP_REGISTER_METHOD(0x025323E0, void, SetAlphaFastImpl, app::Material* this_ptr, int32_t name, float value)
    IL2CPP_REGISTER_METHOD(0x02532450, void, SetMatrixImpl, app::Material* this_ptr, int32_t name, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x025324C0, void, SetTextureImpl, app::Material* this_ptr, int32_t name, app::Texture* value)
    IL2CPP_REGISTER_METHOD(0x02532530, void, SetBufferImpl, app::Material* this_ptr, int32_t name, app::ComputeBuffer* value)
    IL2CPP_REGISTER_METHOD(0x025325A0, float, GetFloatImpl, app::Material* this_ptr, int32_t name)
    IL2CPP_REGISTER_METHOD(0x02532600, app::Color, GetColorImpl, app::Material* this_ptr, int32_t name)
    IL2CPP_REGISTER_METHOD(0x02532690, app::Texture*, GetTextureImpl, app::Material* this_ptr, int32_t name)
    IL2CPP_REGISTER_METHOD(0x025326F0, void, SetVectorArrayImpl, app::Material* this_ptr, int32_t name, app::Vector4__Array* values, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x02532770,
        void,
        SetVectorArrayExImpl,
        app::Material* this_ptr,
        int32_t name,
        app::Vector4__Array* values,
        int32_t count,
        int32_t max_count
    )
    IL2CPP_REGISTER_METHOD(0x025327F0, app::Vector4, GetTextureScaleAndOffsetImpl, app::Material* this_ptr, int32_t name)
    IL2CPP_REGISTER_METHOD(0x02532880, void, SetTextureOffsetImpl, app::Material* this_ptr, int32_t name, app::Vector2 offset)
    IL2CPP_REGISTER_METHOD(0x025328F0, void, SetTextureScaleImpl, app::Material* this_ptr, int32_t name, app::Vector2 scale)
    IL2CPP_REGISTER_METHOD(0x02532960, void, SetVectorArray_1, app::Material* this_ptr, int32_t name, app::Vector4__Array* values, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x02532AF0,
        void,
        SetVectorArrayEx_1,
        app::Material* this_ptr,
        int32_t name,
        app::Vector4__Array* values,
        int32_t count,
        int32_t max_count
    )
    IL2CPP_REGISTER_METHOD(0x02532290, void, SetFloat, app::Material* this_ptr, int32_t name_i_d, float value)
    IL2CPP_REGISTER_METHOD(0x02532C80, void, SetInt_1, app::Material* this_ptr, app::String* name, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02532300, void, SetInt_2, app::Material* this_ptr, int32_t name_i_d, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02532D40, void, SetColor_1, app::Material* this_ptr, app::String* name, app::Color value)
    IL2CPP_REGISTER_METHOD(0x02532E00, void, SetColor_2, app::Material* this_ptr, int32_t name_i_d, app::Color value)
    IL2CPP_REGISTER_METHOD(0x025323E0, void, SetAlphaFast, app::Material* this_ptr, int32_t name_i_d, float value)
    IL2CPP_REGISTER_METHOD(0x02532E70, void, SetVector, app::Material* this_ptr, int32_t name_i_d, app::Vector4 value)
    IL2CPP_REGISTER_METHOD(0x02532F20, void, SetMatrix, app::Material* this_ptr, int32_t name_i_d, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x02532FB0, void, SetTexture_1, app::Material* this_ptr, app::String* name, app::Texture* value)
    IL2CPP_REGISTER_METHOD(0x025324C0, void, SetTexture_2, app::Material* this_ptr, int32_t name_i_d, app::Texture* value)
    IL2CPP_REGISTER_METHOD(0x02532530, void, SetBuffer, app::Material* this_ptr, int32_t name_i_d, app::ComputeBuffer* value)
    IL2CPP_REGISTER_METHOD(0x02533070, void, SetVectorArray_2, app::Material* this_ptr, int32_t name_i_d, app::List_1_UnityEngine_Vector4_* values)
    IL2CPP_REGISTER_METHOD(0x025331C0, void, SetVectorArray_3, app::Material* this_ptr, int32_t name_i_d, app::Vector4__Array* values)
    IL2CPP_REGISTER_METHOD(0x025331F0, void, SetVectorArrayEx_2, app::Material* this_ptr, int32_t name_i_d, app::Vector4__Array* values, int32_t max_count)
    IL2CPP_REGISTER_METHOD(0x025325A0, float, GetFloat, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02533370, app::Color, GetColor_1, app::Material* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02532600, app::Color, GetColor_2, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02533440, app::Vector4, GetVector, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x025334D0, app::Texture*, GetTexture_1, app::Material* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02532690, app::Texture*, GetTexture_2, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02533580, void, SetTextureOffset_1, app::Material* this_ptr, app::String* name, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02532880, void, SetTextureOffset_2, app::Material* this_ptr, int32_t name_i_d, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02533640, void, SetTextureScale_1, app::Material* this_ptr, app::String* name, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x025328F0, void, SetTextureScale_2, app::Material* this_ptr, int32_t name_i_d, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02533700, app::Vector2, GetTextureOffset_1, app::Material* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02533770, app::Vector2, GetTextureOffset_2, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02533800, app::Vector2, GetTextureScale_1, app::Material* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02533870, app::Vector2, GetTextureScale_2, app::Material* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(0x02533900, int32_t, KeywordToID, app::Material* this_ptr, app::String* keyword)
    IL2CPP_REGISTER_METHOD(0x02533950, void, EnableKeyword_2, app::Material* this_ptr, app::String* keyword)
    IL2CPP_REGISTER_METHOD(0x02533A00, void, DisableKeyword_2, app::Material* this_ptr, app::String* keyword)
    IL2CPP_REGISTER_METHOD(0x02533AB0, void, SetColorImpl_Injected, app::Material* this_ptr, int32_t name, app::Color* value)
    IL2CPP_REGISTER_METHOD(0x02533B20, void, SetMatrixImpl_Injected, app::Material* this_ptr, int32_t name, app::Matrix4x4* value)
    IL2CPP_REGISTER_METHOD(0x02533B90, void, GetColorImpl_Injected, app::Material* this_ptr, int32_t name, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x02533C00, void, GetTextureScaleAndOffsetImpl_Injected, app::Material* this_ptr, int32_t name, app::Vector4* ret)
    IL2CPP_REGISTER_METHOD(0x02533C70, void, SetTextureOffsetImpl_Injected, app::Material* this_ptr, int32_t name, app::Vector2* offset)
    IL2CPP_REGISTER_METHOD(0x02533CE0, void, SetTextureScaleImpl_Injected, app::Material* this_ptr, int32_t name, app::Vector2* scale)
} // namespace app::classes::UnityEngine::Material
