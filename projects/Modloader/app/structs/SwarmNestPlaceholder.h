#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmNestPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmNestPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmNestPlaceholder_DEFINED)
#include <Modloader/app/structs/SwarmNestPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmNestPlaceholder_DEFINED
struct SwarmNestPlaceholder__Class;
struct SwarmNestPlaceholder {
    struct SwarmNestPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SwarmNestPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmNestPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SwarmNestPlaceholder_FWDDECL
#include <Modloader/app/structs/SwarmNestPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmNestPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmNestPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SwarmNestPlaceholder_FWDDECL)
#include <Modloader/app/structs/SwarmNestPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmNestPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
