#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SyncAnimations_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SyncAnimations_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyncAnimations_DEFINED)
#include <Modloader/app/structs/SyncAnimations__Fields.h>
#if defined(IL2CPP_STRUCT_SyncAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_SyncAnimations_DEFINED
struct SyncAnimations__Class;
struct SyncAnimations {
    struct SyncAnimations__Class* klass;
    MonitorData* monitor;
    struct SyncAnimations__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SyncAnimations_FWDDECL)
#define IL2CPP_STRUCT_SyncAnimations_FWDDECL
#include <Modloader/app/structs/SyncAnimations__Class.h>
#endif
#undef IL2CPP_STRUCT_SyncAnimations_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyncAnimations_DEFINED) && !defined(IL2CPP_STRUCT_SyncAnimations_FWDDECL)
#include <Modloader/app/structs/SyncAnimations.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SyncAnimations.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
