#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawRendererSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawRendererSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSettings_DEFINED)
#include <Modloader/app/structs/DrawRendererFlags__Enum.h>
#include <Modloader/app/structs/DrawRendererSettings_shaderPassNames_FixedBuffer12.h>
#include <Modloader/app/structs/DrawRendererSortSettings.h>
#include <Modloader/app/structs/RendererConfiguration__Enum.h>
#if defined(IL2CPP_STRUCT_DrawRendererSortSettings_DEFINED) && defined(IL2CPP_STRUCT_DrawRendererSettings_shaderPassNames_FixedBuffer12_DEFINED) && defined(IL2CPP_STRUCT_RendererConfiguration__Enum_DEFINED) && defined(IL2CPP_STRUCT_DrawRendererFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_DrawRendererSettings_DEFINED
struct DrawRendererSettings {
    struct DrawRendererSortSettings sorting;
    struct DrawRendererSettings_shaderPassNames_FixedBuffer12 shaderPassNames;
    RendererConfiguration__Enum rendererConfiguration;

    DrawRendererFlags__Enum flags;

    int32_t m_OverrideMaterialInstanceId;
    int32_t m_OverrideMaterialPassIdx;
    int32_t useSRPBatcher;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrawRendererSettings_FWDDECL)
#define IL2CPP_STRUCT_DrawRendererSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_DrawRendererSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSettings_DEFINED) && !defined(IL2CPP_STRUCT_DrawRendererSettings_FWDDECL)
#include <Modloader/app/structs/DrawRendererSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawRendererSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
