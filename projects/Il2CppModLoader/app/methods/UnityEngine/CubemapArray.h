#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::CubemapArray {
    IL2CPP_REGISTER_METHOD(0x0242B380, void, ctor_1, (app::CubemapArray * this_ptr, int32_t width, int32_t cubemap_count, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x0242B3F0, void, ctor_2, (app::CubemapArray * this_ptr, int32_t width, int32_t cubemap_count, app::TextureFormat__Enum texture_format, bool mip_chain, bool linear))
    IL2CPP_REGISTER_METHOD(0x0242B4F0, void, ctor_3, (app::CubemapArray * this_ptr, int32_t width, int32_t cubemap_count, app::TextureFormat__Enum texture_format, bool mip_chain))
    IL2CPP_REGISTER_METHOD(0x0242B5D0, bool, get_isReadable, (app::CubemapArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242B620, bool, Internal_CreateImpl, (app::CubemapArray * mono, int32_t ext, int32_t count, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x0242B6A0, void, Internal_Create, (app::CubemapArray * mono, int32_t ext, int32_t count, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHODINFO(0x04734A08, CubemapArray_Internal_Create__MethodInfo)
} // namespace app::classes::UnityEngine::CubemapArray
