#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceGroundMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceGroundMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceGroundMovement_DEFINED)
#include <Modloader/app/structs/TraceGroundMovement__Fields.h>
#if defined(IL2CPP_STRUCT_TraceGroundMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceGroundMovement_DEFINED
struct TraceGroundMovement__Class;
struct TraceGroundMovement {
    struct TraceGroundMovement__Class* klass;
    MonitorData* monitor;
    struct TraceGroundMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceGroundMovement_FWDDECL)
#define IL2CPP_STRUCT_TraceGroundMovement_FWDDECL
#include <Modloader/app/structs/TraceGroundMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_TraceGroundMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceGroundMovement_DEFINED) && !defined(IL2CPP_STRUCT_TraceGroundMovement_FWDDECL)
#include <Modloader/app/structs/TraceGroundMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceGroundMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
