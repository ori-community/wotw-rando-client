#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplineAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplineAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplineAgent_DEFINED)
#include <Modloader/app/structs/SplineAgent__Fields.h>
#if defined(IL2CPP_STRUCT_SplineAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SplineAgent_DEFINED
struct SplineAgent__Class;
struct SplineAgent {
    struct SplineAgent__Class* klass;
    MonitorData* monitor;
    struct SplineAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SplineAgent_FWDDECL)
#define IL2CPP_STRUCT_SplineAgent_FWDDECL
#include <Modloader/app/structs/SplineAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_SplineAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplineAgent_DEFINED) && !defined(IL2CPP_STRUCT_SplineAgent_FWDDECL)
#include <Modloader/app/structs/SplineAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplineAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
