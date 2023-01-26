#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::UnityEngine::Shader {
    IL2CPP_REGISTER_METHOD(0x0297D2D0, void, ctor, (app::Shader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297D360, app::Shader*, Find, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0297D3B0, void, set_maximumLOD, (app::Shader * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0297D410, bool, get_isSupported, (app::Shader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297D460, int32_t, KeywordToID, (app::String * keyword))
    IL2CPP_REGISTER_METHOD(0x0297D4B0, void, EnableKeyword, (int32_t keyword_i_d))
    IL2CPP_REGISTER_METHOD(0x0297D500, void, DisableKeyword, (int32_t keyword_i_d))
    IL2CPP_REGISTER_METHOD(0x0297D550, int32_t, PropertyToID, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0297D5A0, void, SetGlobalFloatImpl, (int32_t name, float value))
    IL2CPP_REGISTER_METHOD(0x0297D600, void, SetGlobalVectorImpl, (int32_t name, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x0297D660, void, SetGlobalMatrixImpl, (int32_t name, app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x0297D6C0, void, SetGlobalTextureImpl, (int32_t name, app::Texture* value))
    IL2CPP_REGISTER_METHOD(0x0297D720, void, SetGlobalVectorArrayImpl, (int32_t name, app::Vector4__Array* values, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0297D790, void, SetGlobalVectorArray_1, (int32_t name, app::Vector4__Array* values, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0297D5A0, void, SetGlobalFloat, (int32_t name_i_d, float value))
    IL2CPP_REGISTER_METHOD(0x0297D910, void, SetGlobalInt, (int32_t name_i_d, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0297D970, void, SetGlobalVector, (int32_t name_i_d, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x0297D9D0, void, SetGlobalMatrix, (int32_t name_i_d, app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x0297D6C0, void, SetGlobalTexture, (int32_t name_i_d, app::Texture* value))
    IL2CPP_REGISTER_METHOD(0x0297DA50, void, SetGlobalVectorArray_2, (int32_t name_i_d, app::Vector4__Array* values))
    IL2CPP_REGISTER_METHOD(0x0297DBA0, void, SetGlobalVectorImpl_Injected, (int32_t name, app::Vector4* value))
    IL2CPP_REGISTER_METHOD(0x0297DC00, void, SetGlobalMatrixImpl_Injected, (int32_t name, app::Matrix4x4* value))
} // namespace app::classes::UnityEngine::Shader
