#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Texture3D {
    IL2CPP_REGISTER_METHOD(0x02C69E50, void, ctor_1, (app::Texture3D * this_ptr, int32_t width, int32_t height, int32_t depth, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x02C69EE0, void, ctor_2, (app::Texture3D * this_ptr, int32_t width, int32_t height, int32_t depth, app::TextureFormat__Enum texture_format, bool mip_chain))
    IL2CPP_REGISTER_METHOD(0x02C69FD0, bool, get_isReadable, (app::Texture3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C6A020, bool, Internal_CreateImpl, (app::Texture3D * mono, int32_t w, int32_t h, int32_t d, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x02C6A0A0, void, Internal_Create, (app::Texture3D * mono, int32_t w, int32_t h, int32_t d, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHODINFO(0x0476AF08, Texture3D_Internal_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C6A1D0, void, ApplyImpl, (app::Texture3D * this_ptr, bool update_mipmaps, bool make_no_longer_readable))
    IL2CPP_REGISTER_METHOD(0x02C6A250, void, SetPixels_1, (app::Texture3D * this_ptr, app::Color__Array * colors, int32_t miplevel))
    IL2CPP_REGISTER_METHOD(0x02C6A2C0, void, SetPixels_2, (app::Texture3D * this_ptr, app::Color__Array * colors))
    IL2CPP_REGISTER_METHOD(0x02C6A330, void, Apply_1, (app::Texture3D * this_ptr, bool update_mipmaps, bool make_no_longer_readable))
    IL2CPP_REGISTER_METHODINFO(0x04731428, Texture3D_Apply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C6A440, void, Apply_2, (app::Texture3D * this_ptr))
}
