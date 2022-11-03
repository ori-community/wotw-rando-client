#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Cubemap {
    IL2CPP_REGISTER_METHOD(0x0242AE70, void, ctor_1, (app::Cubemap * this_ptr, int32_t width, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags))
    IL2CPP_REGISTER_METHOD(0x0242AF50, void, ctor_2, (app::Cubemap * this_ptr, int32_t width, app::TextureFormat__Enum texture_format, bool mip_chain, void* native_tex))
    IL2CPP_REGISTER_METHOD(0x0242B030, void, ctor_3, (app::Cubemap * this_ptr, int32_t width, app::TextureFormat__Enum texture_format, bool mip_chain))
    IL2CPP_REGISTER_METHOD(0x0242B180, bool, Internal_CreateImpl, (app::Cubemap * mono, int32_t ext, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags, void* native_tex))
    IL2CPP_REGISTER_METHOD(0x0242B200, void, Internal_Create, (app::Cubemap * mono, int32_t ext, app::GraphicsFormat__Enum format, app::TextureCreationFlags__Enum flags, void* native_tex))
    IL2CPP_REGISTER_METHODINFO(0x04738F48, Cubemap_Internal_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0242B330, bool, get_isReadable, (app::Cubemap * this_ptr))
} // namespace app::classes::UnityEngine::Cubemap
