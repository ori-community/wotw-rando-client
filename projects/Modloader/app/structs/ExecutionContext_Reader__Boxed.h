#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_DEFINED)
#include <Modloader/app/structs/ExecutionContext_Reader.h>
#if defined(IL2CPP_STRUCT_ExecutionContext_Reader_DEFINED)
#define IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_DEFINED
struct ExecutionContext_Reader__Class;
struct ExecutionContext_Reader__Boxed {
    struct ExecutionContext_Reader__Class* klass;
    MonitorData* monitor;
    struct ExecutionContext_Reader fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_FWDDECL
#include <Modloader/app/structs/ExecutionContext_Reader__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionContext_Reader__Boxed_FWDDECL)
#include <Modloader/app/structs/ExecutionContext_Reader__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionContext_Reader__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
