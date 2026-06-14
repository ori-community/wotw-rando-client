#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YieldAwaitable__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YieldAwaitable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_YieldAwaitable__Boxed_DEFINED)
#include <Modloader/app/structs/YieldAwaitable.h>
#if defined(IL2CPP_STRUCT_YieldAwaitable_DEFINED)
#define IL2CPP_STRUCT_YieldAwaitable__Boxed_DEFINED
struct YieldAwaitable__Class;
struct YieldAwaitable__Boxed {
    struct YieldAwaitable__Class* klass;
    MonitorData* monitor;
    struct YieldAwaitable fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_YieldAwaitable__Boxed_FWDDECL)
#define IL2CPP_STRUCT_YieldAwaitable__Boxed_FWDDECL
#include <Modloader/app/structs/YieldAwaitable__Class.h>
#endif
#undef IL2CPP_STRUCT_YieldAwaitable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_YieldAwaitable__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_YieldAwaitable__Boxed_FWDDECL)
#include <Modloader/app/structs/YieldAwaitable__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YieldAwaitable__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
