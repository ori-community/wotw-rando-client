#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointFunctionality__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointFunctionality__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointFunctionality__Boxed_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#if defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_CheckpointFunctionality__Boxed_DEFINED
struct CheckpointFunctionality__Class;
struct CheckpointFunctionality__Boxed {
    struct CheckpointFunctionality__Class* klass;
    MonitorData* monitor;
    struct CheckpointFunctionality fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckpointFunctionality__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CheckpointFunctionality__Boxed_FWDDECL
#include <Modloader/app/structs/CheckpointFunctionality__Class.h>
#endif
#undef IL2CPP_STRUCT_CheckpointFunctionality__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointFunctionality__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointFunctionality__Boxed_FWDDECL)
#include <Modloader/app/structs/CheckpointFunctionality__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointFunctionality__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
