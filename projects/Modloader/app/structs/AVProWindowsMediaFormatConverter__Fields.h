#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_DEFINED)
#include <Modloader/app/structs/AVProWindowsMediaPlugin_VideoFrameFormat__Enum.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_AVProWindowsMediaPlugin_VideoFrameFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_DEFINED
struct Texture2D;
struct RenderTexture;
struct Texture;
struct Material;
struct __declspec(align(8)) AVProWindowsMediaFormatConverter__Fields {
    int32_t _movieHandle;
    struct Texture2D* _rawTexture;
    bool _isExternalTexture;
    struct RenderTexture* _finalTexture;
    struct Texture* _outputTexture;
    struct Material* _conversionMaterial;
    int32_t _usedTextureWidth;
    int32_t _usedTextureHeight;
    struct Vector4 _uv;
    int32_t _lastFrameUploaded;
    int32_t _width;
    int32_t _height;
    bool _flipX;
    bool _flipY;
    AVProWindowsMediaPlugin_VideoFrameFormat__Enum _sourceVideoFormat;

    bool _useBT709;
    bool _requiresTextureCrop;
    bool _requiresConversion;
    bool _ValidPicture_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaFormatConverter__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaFormatConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
