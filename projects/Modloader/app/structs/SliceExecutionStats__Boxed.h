#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliceExecutionStats__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliceExecutionStats__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceExecutionStats__Boxed_DEFINED)
#include <Modloader/app/structs/SliceExecutionStats.h>
#if defined(IL2CPP_STRUCT_SliceExecutionStats_DEFINED)
#define IL2CPP_STRUCT_SliceExecutionStats__Boxed_DEFINED
struct SliceExecutionStats__Class;
struct SliceExecutionStats__Boxed {
    struct SliceExecutionStats__Class* klass;
    MonitorData* monitor;
    struct SliceExecutionStats fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SliceExecutionStats__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SliceExecutionStats__Boxed_FWDDECL
#include <Modloader/app/structs/SliceExecutionStats__Class.h>
#endif
#undef IL2CPP_STRUCT_SliceExecutionStats__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceExecutionStats__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SliceExecutionStats__Boxed_FWDDECL)
#include <Modloader/app/structs/SliceExecutionStats__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliceExecutionStats__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
