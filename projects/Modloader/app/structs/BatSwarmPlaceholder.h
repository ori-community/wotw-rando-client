#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarmPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarmPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmPlaceholder_DEFINED)
#include <Modloader/app/structs/BatSwarmPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_BatSwarmPlaceholder_DEFINED
struct BatSwarmPlaceholder__Class;
struct BatSwarmPlaceholder {
    struct BatSwarmPlaceholder__Class* klass;
    MonitorData* monitor;
    struct BatSwarmPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarmPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_BatSwarmPlaceholder_FWDDECL
#include <Modloader/app/structs/BatSwarmPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_BatSwarmPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarmPlaceholder_FWDDECL)
#include <Modloader/app/structs/BatSwarmPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarmPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
