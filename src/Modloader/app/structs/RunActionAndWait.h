#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunActionAndWait_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunActionAndWait_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionAndWait_DEFINED)
#include <Modloader/app/structs/RunActionAndWait__Fields.h>
#if defined(IL2CPP_STRUCT_RunActionAndWait__Fields_DEFINED)
#define IL2CPP_STRUCT_RunActionAndWait_DEFINED
struct RunActionAndWait__Class;
struct RunActionAndWait {
    struct RunActionAndWait__Class* klass;
    MonitorData* monitor;
    struct RunActionAndWait__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunActionAndWait_FWDDECL)
#define IL2CPP_STRUCT_RunActionAndWait_FWDDECL
#include <Modloader/app/structs/RunActionAndWait__Class.h>
#endif
#undef IL2CPP_STRUCT_RunActionAndWait_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionAndWait_DEFINED) && !defined(IL2CPP_STRUCT_RunActionAndWait_FWDDECL)
#include <Modloader/app/structs/RunActionAndWait.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunActionAndWait.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
