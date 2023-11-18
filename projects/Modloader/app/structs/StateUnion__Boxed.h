#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateUnion__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateUnion__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateUnion__Boxed_DEFINED)
#include <Modloader/app/structs/StateUnion.h>
#if defined(IL2CPP_STRUCT_StateUnion_DEFINED)
#define IL2CPP_STRUCT_StateUnion__Boxed_DEFINED
struct StateUnion__Class;
struct StateUnion__Boxed {
    struct StateUnion__Class* klass;
    MonitorData* monitor;
    struct StateUnion fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateUnion__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StateUnion__Boxed_FWDDECL
#include <Modloader/app/structs/StateUnion__Class.h>
#endif
#undef IL2CPP_STRUCT_StateUnion__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateUnion__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StateUnion__Boxed_FWDDECL)
#include <Modloader/app/structs/StateUnion__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateUnion__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
