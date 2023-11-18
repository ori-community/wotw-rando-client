#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobHandle__Boxed_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#if defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_JobHandle__Boxed_DEFINED
struct JobHandle__Class;
struct JobHandle__Boxed {
    struct JobHandle__Class* klass;
    MonitorData* monitor;
    struct JobHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JobHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JobHandle__Boxed_FWDDECL
#include <Modloader/app/structs/JobHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_JobHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JobHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/JobHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
