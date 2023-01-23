#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsObjectProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsObjectProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsObjectProcessor_DEFINED)
#define IL2CPP_STRUCT_fsObjectProcessor_DEFINED
struct fsObjectProcessor__Class;
struct fsObjectProcessor {
    struct fsObjectProcessor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsObjectProcessor_FWDDECL)
#define IL2CPP_STRUCT_fsObjectProcessor_FWDDECL
#include <Modloader/app/structs/fsObjectProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_fsObjectProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsObjectProcessor_DEFINED) && !defined(IL2CPP_STRUCT_fsObjectProcessor_FWDDECL)
#include <Modloader/app/structs/fsObjectProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsObjectProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
