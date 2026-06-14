#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_DEFINED
struct Shader;
struct AVProWindowsMediaManager__Fields {
    struct MonoBehaviour__Fields _;
    bool _logVideoLoads;
    struct Shader* _shaderBGRA32;
    struct Shader* _shaderYUY2;
    struct Shader* _shaderYUY2_709;
    struct Shader* _shaderUYVY;
    struct Shader* _shaderYVYU;
    struct Shader* _shaderHDYC;
    struct Shader* _shaderNV12;
    struct Shader* _shaderCopy;
    struct Shader* _shaderHap_YCoCg;
    bool _isInitialised;
    bool _useExternalTextures;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_FWDDECL
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaManager__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
