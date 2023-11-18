#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDateTime__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDateTime__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTime__Boxed_DEFINED)
#include <Modloader/app/structs/SqlDateTime.h>
#if defined(IL2CPP_STRUCT_SqlDateTime_DEFINED)
#define IL2CPP_STRUCT_SqlDateTime__Boxed_DEFINED
struct SqlDateTime__Class;
struct SqlDateTime__Boxed {
    struct SqlDateTime__Class* klass;
    MonitorData* monitor;
    struct SqlDateTime fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDateTime__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlDateTime__Boxed_FWDDECL
#include <Modloader/app/structs/SqlDateTime__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlDateTime__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTime__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlDateTime__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlDateTime__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDateTime__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
