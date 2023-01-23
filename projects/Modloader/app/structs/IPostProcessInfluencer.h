#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPostProcessInfluencer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPostProcessInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPostProcessInfluencer_DEFINED)
#define IL2CPP_STRUCT_IPostProcessInfluencer_DEFINED
struct IPostProcessInfluencer__Class;
struct IPostProcessInfluencer {
    struct IPostProcessInfluencer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPostProcessInfluencer_FWDDECL)
#define IL2CPP_STRUCT_IPostProcessInfluencer_FWDDECL
#include <Modloader/app/structs/IPostProcessInfluencer__Class.h>
#endif
#undef IL2CPP_STRUCT_IPostProcessInfluencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPostProcessInfluencer_DEFINED) && !defined(IL2CPP_STRUCT_IPostProcessInfluencer_FWDDECL)
#include <Modloader/app/structs/IPostProcessInfluencer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPostProcessInfluencer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
