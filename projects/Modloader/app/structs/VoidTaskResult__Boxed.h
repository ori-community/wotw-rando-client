#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoidTaskResult__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoidTaskResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoidTaskResult__Boxed_DEFINED)
#include <Modloader/app/structs/VoidTaskResult.h>
#if defined(IL2CPP_STRUCT_VoidTaskResult_DEFINED)
#define IL2CPP_STRUCT_VoidTaskResult__Boxed_DEFINED
struct VoidTaskResult__Class;
struct VoidTaskResult__Boxed {
    struct VoidTaskResult__Class* klass;
    MonitorData* monitor;
    struct VoidTaskResult fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VoidTaskResult__Boxed_FWDDECL)
#define IL2CPP_STRUCT_VoidTaskResult__Boxed_FWDDECL
#include <Modloader/app/structs/VoidTaskResult__Class.h>
#endif
#undef IL2CPP_STRUCT_VoidTaskResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoidTaskResult__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_VoidTaskResult__Boxed_FWDDECL)
#include <Modloader/app/structs/VoidTaskResult__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoidTaskResult__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
