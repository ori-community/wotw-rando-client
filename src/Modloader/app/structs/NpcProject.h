#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NpcProject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NpcProject_INITIALIZING
#if !defined(IL2CPP_STRUCT_NpcProject_DEFINED)
#include <Modloader/app/structs/NpcProject__Fields.h>
#if defined(IL2CPP_STRUCT_NpcProject__Fields_DEFINED)
#define IL2CPP_STRUCT_NpcProject_DEFINED
struct NpcProject__Class;
struct NpcProject {
    struct NpcProject__Class* klass;
    MonitorData* monitor;
    struct NpcProject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NpcProject_FWDDECL)
#define IL2CPP_STRUCT_NpcProject_FWDDECL
#include <Modloader/app/structs/NpcProject__Class.h>
#endif
#undef IL2CPP_STRUCT_NpcProject_INITIALIZING
#if !defined(IL2CPP_STRUCT_NpcProject_DEFINED) && !defined(IL2CPP_STRUCT_NpcProject_FWDDECL)
#include <Modloader/app/structs/NpcProject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NpcProject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
