#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/GraphicsFormat__Enum.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Texture2D__Array.h>
#include <Modloader/app/structs/TextureCreationFlags__Enum.h>
#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::UnityEngine::Texture2D {
    IL2CPP_REGISTER_METHOD(
        0x02C66B50,
        void,
        ctor_1,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::GraphicsFormat__Enum format,
        app::TextureCreationFlags__Enum flags,
        void* native_tex
    )
    IL2CPP_REGISTER_METHOD(
        0x02C66BD0,
        void,
        ctor_2,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::GraphicsFormat__Enum format,
        app::TextureCreationFlags__Enum flags
    )
    IL2CPP_REGISTER_METHOD(
        0x02C66CC0,
        void,
        ctor_3,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::TextureFormat__Enum texture_format,
        bool mip_chain,
        bool linear,
        void* native_tex
    )
    IL2CPP_REGISTER_METHOD(
        0x02C66DD0,
        void,
        ctor_4,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::TextureFormat__Enum texture_format,
        bool mip_chain,
        bool linear
    )
    IL2CPP_REGISTER_METHOD(
        0x02C66EA0,
        void,
        ctor_5,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::TextureFormat__Enum texture_format,
        bool mip_chain
    )
    IL2CPP_REGISTER_METHOD(0x02C66F70, void, ctor_6, app::Texture2D* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(0x02C67090, int32_t, get_mipmapCount, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C670E0, app::TextureFormat__Enum, get_format, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67130, app::Texture2D*, get_whiteTexture, )
    IL2CPP_REGISTER_METHOD(0x018F9090, app::Texture2D*, get_blackTexture, )
    IL2CPP_REGISTER_METHOD(0x02C67180, void, Compress, app::Texture2D* this_ptr, bool high_quality)
    IL2CPP_REGISTER_METHOD(
        0x02C671E0,
        bool,
        Internal_CreateImpl,
        app::Texture2D* mono,
        int32_t w,
        int32_t h,
        app::GraphicsFormat__Enum format,
        app::TextureCreationFlags__Enum flags,
        void* native_tex
    )
    IL2CPP_REGISTER_METHOD(
        0x02C67260,
        void,
        Internal_Create,
        app::Texture2D* mono,
        int32_t w,
        int32_t h,
        app::GraphicsFormat__Enum format,
        app::TextureCreationFlags__Enum flags,
        void* native_tex
    )
    IL2CPP_REGISTER_METHOD(0x02C67390, bool, get_isReadable, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C673E0, void, ApplyImpl, app::Texture2D* this_ptr, bool update_mipmaps, bool make_no_longer_readable)
    IL2CPP_REGISTER_METHOD(0x02C67460, bool, ResizeImpl, app::Texture2D* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(0x02C674D0, void, SetPixelImpl, app::Texture2D* this_ptr, int32_t image, int32_t x, int32_t y, app::Color color)
    IL2CPP_REGISTER_METHOD(0x02C67560, app::Color, GetPixelImpl, app::Texture2D* this_ptr, int32_t image, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x02C67610, app::Color, GetPixelBilinearImpl, app::Texture2D* this_ptr, int32_t image, float x, float y)
    IL2CPP_REGISTER_METHOD(
        0x02C676C0,
        bool,
        ResizeWithFormatImpl,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::TextureFormat__Enum format,
        bool has_mip_map
    )
    IL2CPP_REGISTER_METHOD(
        0x02C67750,
        void,
        ReadPixelsImpl,
        app::Texture2D* this_ptr,
        app::Rect source,
        int32_t dest_x,
        int32_t dest_y,
        bool recalculate_mip_maps
    )
    IL2CPP_REGISTER_METHOD(
        0x02C677E0,
        void,
        SetPixelsImpl,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t w,
        int32_t h,
        app::Color__Array* pixel,
        int32_t miplevel,
        int32_t frame
    )
    IL2CPP_REGISTER_METHOD(0x02C67860, bool, LoadRawTextureDataImpl, app::Texture2D* this_ptr, void* data, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02C678D0, bool, LoadRawTextureDataImplArray, app::Texture2D* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x02C67930, void*, GetWritableImageData, app::Texture2D* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x02C67990, int64_t, GetRawImageDataSize, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C679E0, void, GenerateAtlasImpl, app::Vector2__Array* sizes, int32_t padding, int32_t atlas_size, app::Rect__Array* rect)
    IL2CPP_REGISTER_METHOD(0x02C67A60, bool, get_streamingMipmaps, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67AB0, int32_t, get_streamingMipmapsPriority, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67B00, int32_t, get_requestedMipmapLevel, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67B50, void, set_requestedMipmapLevel, app::Texture2D* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02C67BB0, int32_t, get_desiredMipmapLevel, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67C00, int32_t, get_loadingMipmapLevel, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67C50, int32_t, get_loadedMipmapLevel, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67CA0, void, ClearRequestedMipmapLevel, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67CF0, bool, IsRequestedMipmapLevelLoaded, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C67D40, void, UpdateExternalTexture, app::Texture2D* this_ptr, void* native_tex)
    IL2CPP_REGISTER_METHOD(0x02C67DA0, void, SetAllPixels32, app::Texture2D* this_ptr, app::Color32__Array* colors, int32_t miplevel)
    IL2CPP_REGISTER_METHOD(
        0x02C67E10,
        void,
        SetBlockOfPixels32,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height,
        app::Color32__Array* colors,
        int32_t miplevel
    )
    IL2CPP_REGISTER_METHOD(0x02C67E90, app::Byte__Array*, GetRawTextureData, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C67EE0,
        app::Color__Array*,
        GetPixels_1,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height,
        int32_t miplevel
    )
    IL2CPP_REGISTER_METHOD(
        0x02C67F60,
        app::Color__Array*,
        GetPixels_2,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height
    )
    IL2CPP_REGISTER_METHOD(0x02C67FF0, app::Color32__Array*, GetPixels32_1, app::Texture2D* this_ptr, int32_t miplevel)
    IL2CPP_REGISTER_METHOD(0x02C68050, app::Color32__Array*, GetPixels32_2, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C680B0,
        app::Rect__Array*,
        PackTextures_1,
        app::Texture2D* this_ptr,
        app::Texture2D__Array* textures,
        int32_t padding,
        int32_t maximum_atlas_size,
        bool make_no_longer_readable
    )
    IL2CPP_REGISTER_METHOD(
        0x02C68140,
        app::Rect__Array*,
        PackTextures_2,
        app::Texture2D* this_ptr,
        app::Texture2D__Array* textures,
        int32_t padding,
        int32_t maximum_atlas_size
    )
    IL2CPP_REGISTER_METHOD(0x02C681D0, app::Rect__Array*, PackTextures_3, app::Texture2D* this_ptr, app::Texture2D__Array* textures, int32_t padding)
    IL2CPP_REGISTER_METHOD(
        0x02C68250,
        app::Texture2D*,
        CreateExternalTexture,
        int32_t width,
        int32_t height,
        app::TextureFormat__Enum format,
        bool mip_chain,
        bool linear,
        void* native_tex
    )
    IL2CPP_REGISTER_METHOD(0x02C68430, void, SetPixel, app::Texture2D* this_ptr, int32_t x, int32_t y, app::Color color)
    IL2CPP_REGISTER_METHOD(
        0x02C68560,
        void,
        SetPixels_1,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height,
        app::Color__Array* colors,
        int32_t miplevel
    )
    IL2CPP_REGISTER_METHOD(
        0x02C68690,
        void,
        SetPixels_2,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height,
        app::Color__Array* colors
    )
    IL2CPP_REGISTER_METHOD(0x02C686C0, void, SetPixels_3, app::Texture2D* this_ptr, app::Color__Array* colors, int32_t miplevel)
    IL2CPP_REGISTER_METHOD(0x02C68770, void, SetPixels_4, app::Texture2D* this_ptr, app::Color__Array* colors)
    IL2CPP_REGISTER_METHOD(0x02C687E0, app::Color, GetPixel, app::Texture2D* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x02C68920, app::Color, GetPixelBilinear, app::Texture2D* this_ptr, float x, float y)
    IL2CPP_REGISTER_METHOD(0x02C68A60, void, LoadRawTextureData_1, app::Texture2D* this_ptr, void* data, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02C68BE0, void, LoadRawTextureData_2, app::Texture2D* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x02C68D50, void, Apply_1, app::Texture2D* this_ptr, bool update_mipmaps, bool make_no_longer_readable)
    IL2CPP_REGISTER_METHOD(0x02C68E60, void, Apply_2, app::Texture2D* this_ptr, bool update_mipmaps)
    IL2CPP_REGISTER_METHOD(0x02C68E70, void, Apply_3, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C68E80, bool, Resize_1, app::Texture2D* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(
        0x02C68F90,
        bool,
        Resize_2,
        app::Texture2D* this_ptr,
        int32_t width,
        int32_t height,
        app::TextureFormat__Enum format,
        bool has_mip_map
    )
    IL2CPP_REGISTER_METHOD(
        0x02C690C0,
        void,
        ReadPixels_1,
        app::Texture2D* this_ptr,
        app::Rect source,
        int32_t dest_x,
        int32_t dest_y,
        bool recalculate_mip_maps
    )
    IL2CPP_REGISTER_METHOD(0x02C691F0, void, ReadPixels_2, app::Texture2D* this_ptr, app::Rect source, int32_t dest_x, int32_t dest_y)
    IL2CPP_REGISTER_METHOD(
        0x02C69220,
        bool,
        GenerateAtlas,
        app::Vector2__Array* sizes,
        int32_t padding,
        int32_t atlas_size,
        app::List_1_UnityEngine_Rect_* results
    )
    IL2CPP_REGISTER_METHOD(0x02C67DA0, void, SetPixels32_1, app::Texture2D* this_ptr, app::Color32__Array* colors, int32_t miplevel)
    IL2CPP_REGISTER_METHOD(0x02C69520, void, SetPixels32_2, app::Texture2D* this_ptr, app::Color32__Array* colors)
    IL2CPP_REGISTER_METHOD(
        0x02C67E10,
        void,
        SetPixels32_3,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height,
        app::Color32__Array* colors,
        int32_t miplevel
    )
    IL2CPP_REGISTER_METHOD(
        0x02C69590,
        void,
        SetPixels32_4,
        app::Texture2D* this_ptr,
        int32_t x,
        int32_t y,
        int32_t block_width,
        int32_t block_height,
        app::Color32__Array* colors
    )
    IL2CPP_REGISTER_METHOD(0x02C69620, app::Color__Array*, GetPixels_3, app::Texture2D* this_ptr, int32_t miplevel)
    IL2CPP_REGISTER_METHOD(0x02C696F0, app::Color__Array*, GetPixels_4, app::Texture2D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C697B0, void, SetPixelImpl_Injected, app::Texture2D* this_ptr, int32_t image, int32_t x, int32_t y, app::Color* color)
    IL2CPP_REGISTER_METHOD(0x02C69830, void, GetPixelImpl_Injected, app::Texture2D* this_ptr, int32_t image, int32_t x, int32_t y, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x02C698B0, void, GetPixelBilinearImpl_Injected, app::Texture2D* this_ptr, int32_t image, float x, float y, app::Color* ret)
    IL2CPP_REGISTER_METHOD(
        0x02C69930,
        void,
        ReadPixelsImpl_Injected,
        app::Texture2D* this_ptr,
        app::Rect* source,
        int32_t dest_x,
        int32_t dest_y,
        bool recalculate_mip_maps
    )
} // namespace app::classes::UnityEngine::Texture2D
