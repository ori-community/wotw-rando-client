#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppId_t__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppId_t__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppId_t__Boxed_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#if defined(IL2CPP_STRUCT_AppId_t_DEFINED)
#define IL2CPP_STRUCT_AppId_t__Boxed_DEFINED
struct AppId_t__Class;
struct AppId_t__Boxed {
    struct AppId_t__Class* klass;
    MonitorData* monitor;
    struct AppId_t fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppId_t__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AppId_t__Boxed_FWDDECL
#include <Modloader/app/structs/AppId_t__Class.h>
#endif
#undef IL2CPP_STRUCT_AppId_t__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppId_t__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AppId_t__Boxed_FWDDECL)
#include <Modloader/app/structs/AppId_t__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppId_t__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
