#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathTracerOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathTracerOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathTracerOutput_DEFINED)
#include <Modloader/app/structs/PathTracerOutput__Fields.h>
#if defined(IL2CPP_STRUCT_PathTracerOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_PathTracerOutput_DEFINED
struct PathTracerOutput__Class;
struct PathTracerOutput {
    struct PathTracerOutput__Class* klass;
    MonitorData* monitor;
    struct PathTracerOutput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathTracerOutput_FWDDECL)
#define IL2CPP_STRUCT_PathTracerOutput_FWDDECL
#include <Modloader/app/structs/PathTracerOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_PathTracerOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathTracerOutput_DEFINED) && !defined(IL2CPP_STRUCT_PathTracerOutput_FWDDECL)
#include <Modloader/app/structs/PathTracerOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathTracerOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
