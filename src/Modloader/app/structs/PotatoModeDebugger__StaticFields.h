#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_DEFINED
struct MoonRenderPipelineAsset;
struct PotatoModeDebugger__StaticFields {
    struct MoonRenderPipelineAsset* m_originalSettings;
    struct MoonRenderPipelineAsset* m_potatoSettings;
    bool m_enabled;
};
#endif
#if !defined(IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_FWDDECL
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#endif
#undef IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PotatoModeDebugger__StaticFields_FWDDECL)
#include <Modloader/app/structs/PotatoModeDebugger__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PotatoModeDebugger__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
