#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBoolean__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBoolean__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBoolean__Boxed_DEFINED)
#include <Modloader/app/structs/SqlBoolean.h>
#if defined(IL2CPP_STRUCT_SqlBoolean_DEFINED)
#define IL2CPP_STRUCT_SqlBoolean__Boxed_DEFINED
struct SqlBoolean__Class;
struct SqlBoolean__Boxed {
    struct SqlBoolean__Class* klass;
    MonitorData* monitor;
    struct SqlBoolean fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlBoolean__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlBoolean__Boxed_FWDDECL
#include <Modloader/app/structs/SqlBoolean__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlBoolean__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBoolean__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlBoolean__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlBoolean__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBoolean__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
