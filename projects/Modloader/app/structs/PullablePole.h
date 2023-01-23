#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PullablePole_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PullablePole_INITIALIZING
#if !defined(IL2CPP_STRUCT_PullablePole_DEFINED)
#include <Modloader/app/structs/PullablePole__Fields.h>
#if defined(IL2CPP_STRUCT_PullablePole__Fields_DEFINED)
#define IL2CPP_STRUCT_PullablePole_DEFINED
struct PullablePole__Class;
struct PullablePole {
    struct PullablePole__Class* klass;
    MonitorData* monitor;
    struct PullablePole__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PullablePole_FWDDECL)
#define IL2CPP_STRUCT_PullablePole_FWDDECL
#include <Modloader/app/structs/PullablePole__Class.h>
#endif
#undef IL2CPP_STRUCT_PullablePole_INITIALIZING
#if !defined(IL2CPP_STRUCT_PullablePole_DEFINED) && !defined(IL2CPP_STRUCT_PullablePole_FWDDECL)
#include <Modloader/app/structs/PullablePole.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PullablePole.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
