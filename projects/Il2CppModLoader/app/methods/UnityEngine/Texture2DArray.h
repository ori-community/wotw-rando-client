#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Texture2DArray {
    IL2CPP_REGISTER_METHOD(0x02C699C0, void, ctor_1, (app::Texture2DArray * this_ptr, int32_t width, int32_t height, int32_t depth, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x02C69A50, void, ctor_2, (app::Texture2DArray * this_ptr, int32_t width, int32_t height, int32_t depth, app::TextureFormat__Enum texture_format, bool mip_chain, bool linear))
    IL2CPP_REGISTER_METHOD(0x02C69B60, void, ctor_3, (app::Texture2DArray * this_ptr, int32_t width, int32_t height, int32_t depth, app::TextureFormat__Enum texture_format, bool mip_chain))
    IL2CPP_REGISTER_METHOD(0x02C69C50, bool, get_isReadable, (app::Texture2DArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C69CA0, bool, Internal_CreateImpl, (app::Texture2DArray * mono, int32_t w, int32_t h, int32_t d, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x02C69D20, void, Internal_Create, (app::Texture2DArray * mono, int32_t w, int32_t h, int32_t d, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHODINFO(0x04731328, Texture2DArray_Internal_Create__MethodInfo)
} // namespace app::classes::UnityEngine::Texture2DArray
