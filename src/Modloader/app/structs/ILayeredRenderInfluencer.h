#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayeredRenderInfluencer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayeredRenderInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayeredRenderInfluencer_DEFINED)
#define IL2CPP_STRUCT_ILayeredRenderInfluencer_DEFINED
struct ILayeredRenderInfluencer__Class;
struct ILayeredRenderInfluencer {
    struct ILayeredRenderInfluencer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayeredRenderInfluencer_FWDDECL)
#define IL2CPP_STRUCT_ILayeredRenderInfluencer_FWDDECL
#include <Modloader/app/structs/ILayeredRenderInfluencer__Class.h>
#endif
#undef IL2CPP_STRUCT_ILayeredRenderInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayeredRenderInfluencer_DEFINED) && !defined(IL2CPP_STRUCT_ILayeredRenderInfluencer_FWDDECL)
#include <Modloader/app/structs/ILayeredRenderInfluencer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayeredRenderInfluencer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
