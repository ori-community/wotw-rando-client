#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlInt64__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlInt64__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt64__Boxed_DEFINED)
#include <Modloader/app/structs/SqlInt64.h>
#if defined(IL2CPP_STRUCT_SqlInt64_DEFINED)
#define IL2CPP_STRUCT_SqlInt64__Boxed_DEFINED
struct SqlInt64__Class;
struct SqlInt64__Boxed {
    struct SqlInt64__Class* klass;
    MonitorData* monitor;
    struct SqlInt64 fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlInt64__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlInt64__Boxed_FWDDECL
#include <Modloader/app/structs/SqlInt64__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlInt64__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt64__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlInt64__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlInt64__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlInt64__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
