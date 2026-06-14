#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderTextureCreationFlags__Enum.h>
#include <Modloader/app/structs/RenderTextureDescriptor__Boxed.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureMemoryless__Enum.h>
#include <Modloader/app/structs/ShadowSamplingMode__Enum.h>
#include <Modloader/app/structs/TextureDimension__Enum.h>
#include <Modloader/app/structs/VRTextureUsage__Enum.h>

namespace app::classes::UnityEngine::RenderTextureDescriptor {
    IL2CPP_REGISTER_METHOD(0x00218070, void, ctor_1, app::RenderTextureDescriptor__Boxed* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(
        0x002180C0,
        void,
        ctor_2,
        app::RenderTextureDescriptor__Boxed* this_ptr,
        int32_t width,
        int32_t height,
        app::RenderTextureFormat__Enum color_format,
        int32_t depth_buffer_bits
    )
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_width, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_width, app::RenderTextureDescriptor__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_height, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_height, app::RenderTextureDescriptor__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_msaaSamples, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_msaaSamples, app::RenderTextureDescriptor__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00218140, int32_t, get_volumeDepth, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EC7C0, void, set_volumeDepth, app::RenderTextureDescriptor__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00120160, app::RenderTextureFormat__Enum, get_colorFormat, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00116230, void, set_colorFormat, app::RenderTextureDescriptor__Boxed* this_ptr, app::RenderTextureFormat__Enum value)
    IL2CPP_REGISTER_METHOD(0x00218150, int32_t, get_depthBufferBits, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00218160, void, set_depthBufferBits, app::RenderTextureDescriptor__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0010FB70, void, set_dimension, app::RenderTextureDescriptor__Boxed* this_ptr, app::TextureDimension__Enum value)
    IL2CPP_REGISTER_METHOD(0x0010FB80, void, set_shadowSamplingMode, app::RenderTextureDescriptor__Boxed* this_ptr, app::ShadowSamplingMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x001542F0, void, set_vrUsage, app::RenderTextureDescriptor__Boxed* this_ptr, app::VRTextureUsage__Enum value)
    IL2CPP_REGISTER_METHOD(0x001CF280, void, set_memoryless, app::RenderTextureDescriptor__Boxed* this_ptr, app::RenderTextureMemoryless__Enum value)
    IL2CPP_REGISTER_METHOD(
        0x00218180,
        void,
        SetOrClearRenderTextureCreationFlag,
        app::RenderTextureDescriptor__Boxed* this_ptr,
        bool value,
        app::RenderTextureCreationFlags__Enum flag
    )
    IL2CPP_REGISTER_METHOD(0x002181A0, void, set_sRGB, app::RenderTextureDescriptor__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002181C0, bool, get_useMipMap, app::RenderTextureDescriptor__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002181D0, void, set_enableRandomWrite, app::RenderTextureDescriptor__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002181F0, void, set_bindMS, app::RenderTextureDescriptor__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00218210, void, set_createdFromScript, app::RenderTextureDescriptor__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00218230, void, set_useDynamicScale, app::RenderTextureDescriptor__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02972820, void, cctor, )
} // namespace app::classes::UnityEngine::RenderTextureDescriptor
