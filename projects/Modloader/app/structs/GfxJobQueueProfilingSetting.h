#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GfxJobQueueProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GfxJobQueueProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_GfxJobQueueProfilingSetting_DEFINED)
#include <Modloader/app/structs/GfxJobQueueProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_GfxJobQueueProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_GfxJobQueueProfilingSetting_DEFINED
struct GfxJobQueueProfilingSetting__Class;
struct GfxJobQueueProfilingSetting {
    struct GfxJobQueueProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct GfxJobQueueProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GfxJobQueueProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_GfxJobQueueProfilingSetting_FWDDECL
#include <Modloader/app/structs/GfxJobQueueProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_GfxJobQueueProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_GfxJobQueueProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_GfxJobQueueProfilingSetting_FWDDECL)
#include <Modloader/app/structs/GfxJobQueueProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GfxJobQueueProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
