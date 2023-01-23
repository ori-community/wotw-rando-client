#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureUberScreenInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureUberScreenInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureUberScreenInfo_DEFINED)
#include <Modloader/app/structs/UberScreenMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberScreenMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TextureUberScreenInfo_DEFINED
struct TextureUberScreenInfo {
    UberScreenMode__Enum Mode;

    float Tweak;
    struct Vector3 Error;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureUberScreenInfo_FWDDECL)
#define IL2CPP_STRUCT_TextureUberScreenInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextureUberScreenInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureUberScreenInfo_DEFINED) && !defined(IL2CPP_STRUCT_TextureUberScreenInfo_FWDDECL)
#include <Modloader/app/structs/TextureUberScreenInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureUberScreenInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
