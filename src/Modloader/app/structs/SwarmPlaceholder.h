#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmPlaceholder_DEFINED)
#include <Modloader/app/structs/SwarmPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmPlaceholder_DEFINED
struct SwarmPlaceholder__Class;
struct SwarmPlaceholder {
    struct SwarmPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SwarmPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SwarmPlaceholder_FWDDECL
#include <Modloader/app/structs/SwarmPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SwarmPlaceholder_FWDDECL)
#include <Modloader/app/structs/SwarmPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
