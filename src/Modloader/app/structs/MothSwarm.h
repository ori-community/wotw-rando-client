#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothSwarm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothSwarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothSwarm_DEFINED)
#include <Modloader/app/structs/MothSwarm__Fields.h>
#if defined(IL2CPP_STRUCT_MothSwarm__Fields_DEFINED)
#define IL2CPP_STRUCT_MothSwarm_DEFINED
struct MothSwarm__Class;
struct MothSwarm {
    struct MothSwarm__Class* klass;
    MonitorData* monitor;
    struct MothSwarm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothSwarm_FWDDECL)
#define IL2CPP_STRUCT_MothSwarm_FWDDECL
#include <Modloader/app/structs/MothSwarm__Class.h>
#endif
#undef IL2CPP_STRUCT_MothSwarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothSwarm_DEFINED) && !defined(IL2CPP_STRUCT_MothSwarm_FWDDECL)
#include <Modloader/app/structs/MothSwarm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothSwarm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
