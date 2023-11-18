#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlString__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlString__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString__Boxed_DEFINED)
#include <Modloader/app/structs/SqlString.h>
#if defined(IL2CPP_STRUCT_SqlString_DEFINED)
#define IL2CPP_STRUCT_SqlString__Boxed_DEFINED
struct SqlString__Class;
struct SqlString__Boxed {
    struct SqlString__Class* klass;
    MonitorData* monitor;
    struct SqlString fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlString__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlString__Boxed_FWDDECL
#include <Modloader/app/structs/SqlString__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlString__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlString__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlString__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlString__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
