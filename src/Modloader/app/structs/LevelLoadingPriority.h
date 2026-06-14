#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LevelLoadingPriority_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LevelLoadingPriority_INITIALIZING
#if !defined(IL2CPP_STRUCT_LevelLoadingPriority_DEFINED)
#include <Modloader/app/structs/LevelLoadingPriority__Fields.h>
#if defined(IL2CPP_STRUCT_LevelLoadingPriority__Fields_DEFINED)
#define IL2CPP_STRUCT_LevelLoadingPriority_DEFINED
struct LevelLoadingPriority__Class;
struct LevelLoadingPriority {
    struct LevelLoadingPriority__Class* klass;
    MonitorData* monitor;
    struct LevelLoadingPriority__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LevelLoadingPriority_FWDDECL)
#define IL2CPP_STRUCT_LevelLoadingPriority_FWDDECL
#include <Modloader/app/structs/LevelLoadingPriority__Class.h>
#endif
#undef IL2CPP_STRUCT_LevelLoadingPriority_INITIALIZING
#if !defined(IL2CPP_STRUCT_LevelLoadingPriority_DEFINED) && !defined(IL2CPP_STRUCT_LevelLoadingPriority_FWDDECL)
#include <Modloader/app/structs/LevelLoadingPriority.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LevelLoadingPriority.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
