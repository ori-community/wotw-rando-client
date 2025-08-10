#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GraphicsFormat__Enum.h>
#include <Modloader/app/structs/RenderBuffer.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureMemoryless__Enum.h>
#include <Modloader/app/structs/RenderTextureReadWrite__Enum.h>
#include <Modloader/app/structs/TextureDimension__Enum.h>
#include <Modloader/app/structs/VRTextureUsage__Enum.h>

namespace app::classes::UnityEngine::RenderTexture {
    IL2CPP_REGISTER_METHOD(0x02970C30, void, ctor_1, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02970C40, void, ctor_2, app::RenderTexture* this_ptr, app::RenderTextureDescriptor desc)
    IL2CPP_REGISTER_METHOD(0x02970D40, void, ctor_3, app::RenderTexture* this_ptr, app::RenderTexture* texture_to_copy)
    IL2CPP_REGISTER_METHOD(
        0x02970F40,
        void,
        ctor_4,
        app::RenderTexture* this_ptr,
        int32_t width,
        int32_t height,
        int32_t depth,
        app::GraphicsFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02971140,
        void,
        ctor_5,
        app::RenderTexture* this_ptr,
        int32_t width,
        int32_t height,
        int32_t depth,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write
    )
    IL2CPP_REGISTER_METHOD(
        0x02971430,
        void,
        ctor_6,
        app::RenderTexture* this_ptr,
        int32_t width,
        int32_t height,
        int32_t depth,
        app::RenderTextureFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x02971460, void, ctor_7, app::RenderTexture* this_ptr, int32_t width, int32_t height, int32_t depth)
    IL2CPP_REGISTER_METHOD(0x02971490, int32_t, get_width, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029714E0, void, set_width, app::RenderTexture* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02971540, int32_t, get_height, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971590, void, set_height, app::RenderTexture* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029715F0, void, set_dimension, app::RenderTexture* this_ptr, app::TextureDimension__Enum value)
    IL2CPP_REGISTER_METHOD(0x02971650, void, set_useMipMap, app::RenderTexture* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029716B0, app::RenderTextureFormat__Enum, get_format, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971700, void, set_format, app::RenderTexture* this_ptr, app::RenderTextureFormat__Enum value)
    IL2CPP_REGISTER_METHOD(0x02971760, void, set_autoGenerateMips, app::RenderTexture* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029717C0, int32_t, get_volumeDepth, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971810, void, set_volumeDepth, app::RenderTexture* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02971870, void, set_enableRandomWrite, app::RenderTexture* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_isPowerOfTwo, app::RenderTexture* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029718D0, app::RenderTexture*, GetActive, )
    IL2CPP_REGISTER_METHOD(0x02971920, void, SetActive, app::RenderTexture* rt)
    IL2CPP_REGISTER_METHOD(0x029718D0, app::RenderTexture*, get_active, )
    IL2CPP_REGISTER_METHOD(0x02971920, void, set_active, app::RenderTexture* value)
    IL2CPP_REGISTER_METHOD(0x02971970, app::RenderBuffer, GetColorBuffer, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029719F0, app::RenderBuffer, GetDepthBuffer, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971970, app::RenderBuffer, get_colorBuffer, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029719F0, app::RenderBuffer, get_depthBuffer, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971A70, void, DiscardContents_1, app::RenderTexture* this_ptr, bool discard_color, bool discard_depth)
    IL2CPP_REGISTER_METHOD(0x02971AF0, void, MarkRestoreExpected, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971B40, void, DiscardContents_2, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971BA0, bool, Create, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971BF0, void, Release, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971C40, bool, IsCreated, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971C90, void, SetSRGBReadWrite, app::RenderTexture* this_ptr, bool srgb)
    IL2CPP_REGISTER_METHOD(0x02971CF0, void, Internal_Create, app::RenderTexture* rt)
    IL2CPP_REGISTER_METHOD(0x02971D40, void, SetRenderTextureDescriptor, app::RenderTexture* this_ptr, app::RenderTextureDescriptor desc)
    IL2CPP_REGISTER_METHOD(0x02971DA0, app::RenderTextureDescriptor, GetDescriptor, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971E50, app::RenderTexture*, GetTemporary_Internal, app::RenderTextureDescriptor desc)
    IL2CPP_REGISTER_METHOD(0x02971EA0, void, ReleaseTemporary, app::RenderTexture* temp)
    IL2CPP_REGISTER_METHOD(0x02971EF0, int32_t, get_depth, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971F40, void, set_depth, app::RenderTexture* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02971DA0, app::RenderTextureDescriptor, get_descriptor, app::RenderTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02971FA0, void, ValidateRenderTextureDesc, app::RenderTextureDescriptor desc)
    IL2CPP_REGISTER_METHOD(0x02972190, app::RenderTexture*, GetTemporary_1, app::RenderTextureDescriptor desc)
    IL2CPP_REGISTER_METHOD(
        0x02972240,
        app::RenderTexture*,
        GetTemporaryImpl,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write,
        int32_t anti_aliasing,
        app::RenderTextureMemoryless__Enum memoryless_mode,
        app::VRTextureUsage__Enum vr_usage,
        bool use_dynamic_scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02972310,
        app::RenderTexture*,
        GetTemporary_2,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write
    )
    IL2CPP_REGISTER_METHOD(
        0x029723C0,
        app::RenderTexture*,
        GetTemporary_3,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::RenderTextureFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x02972460, app::RenderTexture*, GetTemporary_4, int32_t width, int32_t height, int32_t depth_buffer)
    IL2CPP_REGISTER_METHOD(0x02972500, app::RenderTexture*, GetTemporary_5, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(0x02972580, void, GetColorBuffer_Injected, app::RenderTexture* this_ptr, app::RenderBuffer* ret)
    IL2CPP_REGISTER_METHOD(0x029725E0, void, GetDepthBuffer_Injected, app::RenderTexture* this_ptr, app::RenderBuffer* ret)
    IL2CPP_REGISTER_METHOD(0x02972640, void, SetRenderTextureDescriptor_Injected, app::RenderTexture* this_ptr, app::RenderTextureDescriptor* desc)
    IL2CPP_REGISTER_METHOD(0x029726A0, void, GetDescriptor_Injected, app::RenderTexture* this_ptr, app::RenderTextureDescriptor* ret)
    IL2CPP_REGISTER_METHOD(0x02972700, app::RenderTexture*, GetTemporary_Internal_Injected, app::RenderTextureDescriptor* desc)
} // namespace app::classes::UnityEngine::RenderTexture
