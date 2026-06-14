#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderModel_ComponentState_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderModel_ComponentState_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderModel_ComponentState_t_DEFINED)
#include <Modloader/app/structs/HmdMatrix34_t.h>
#if defined(IL2CPP_STRUCT_HmdMatrix34_t_DEFINED)
#define IL2CPP_STRUCT_RenderModel_ComponentState_t_DEFINED
struct RenderModel_ComponentState_t {
    struct HmdMatrix34_t mTrackingToComponentRenderModel;
    struct HmdMatrix34_t mTrackingToComponentLocal;
    uint32_t uProperties;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderModel_ComponentState_t_FWDDECL)
#define IL2CPP_STRUCT_RenderModel_ComponentState_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderModel_ComponentState_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderModel_ComponentState_t_DEFINED) && !defined(IL2CPP_STRUCT_RenderModel_ComponentState_t_FWDDECL)
#include <Modloader/app/structs/RenderModel_ComponentState_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderModel_ComponentState_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
