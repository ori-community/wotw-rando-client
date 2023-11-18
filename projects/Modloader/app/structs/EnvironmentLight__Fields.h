#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentLight__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentLight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLight__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_EnvironmentLight__Fields_DEFINED
struct EnvironmentLightTexture;
struct EnvironmentLight__Fields {
    struct MonoBehaviour__Fields _;
    struct EnvironmentLightTexture* MainLight;
    struct EnvironmentLightTexture* BounceLight;
    struct Rect Area;
    struct Color ChannelColorOri;
    struct Color ChannelColorNaru;
    struct Color ChannelColorEffects;
    struct Color ChannelColorEnemies;
    int32_t ChannelMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentLight__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentLight__Fields_FWDDECL
#include <Modloader/app/structs/EnvironmentLightTexture.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentLight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLight__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentLight__Fields_FWDDECL)
#include <Modloader/app/structs/EnvironmentLight__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentLight__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
