#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OperationCanceledException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OperationCanceledException_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperationCanceledException_DEFINED)
#include <Modloader/app/structs/OperationCanceledException__Fields.h>
#if defined(IL2CPP_STRUCT_OperationCanceledException__Fields_DEFINED)
#define IL2CPP_STRUCT_OperationCanceledException_DEFINED
struct OperationCanceledException__Class;
struct OperationCanceledException {
    struct OperationCanceledException__Class* klass;
    MonitorData* monitor;
    struct OperationCanceledException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OperationCanceledException_FWDDECL)
#define IL2CPP_STRUCT_OperationCanceledException_FWDDECL
#include <Modloader/app/structs/OperationCanceledException__Class.h>
#endif
#undef IL2CPP_STRUCT_OperationCanceledException_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperationCanceledException_DEFINED) && !defined(IL2CPP_STRUCT_OperationCanceledException_FWDDECL)
#include <Modloader/app/structs/OperationCanceledException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OperationCanceledException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
