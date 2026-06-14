#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingClassInitialization_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingClassInitialization_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingClassInitialization_DEFINED)
#include <Modloader/app/structs/LoadingClassInitialization__Fields.h>
#if defined(IL2CPP_STRUCT_LoadingClassInitialization__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadingClassInitialization_DEFINED
struct LoadingClassInitialization__Class;
struct LoadingClassInitialization {
    struct LoadingClassInitialization__Class* klass;
    MonitorData* monitor;
    struct LoadingClassInitialization__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadingClassInitialization_FWDDECL)
#define IL2CPP_STRUCT_LoadingClassInitialization_FWDDECL
#include <Modloader/app/structs/LoadingClassInitialization__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadingClassInitialization_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingClassInitialization_DEFINED) && !defined(IL2CPP_STRUCT_LoadingClassInitialization_FWDDECL)
#include <Modloader/app/structs/LoadingClassInitialization.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingClassInitialization.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
