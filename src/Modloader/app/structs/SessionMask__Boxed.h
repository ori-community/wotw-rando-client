#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SessionMask__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SessionMask__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionMask__Boxed_DEFINED)
#include <Modloader/app/structs/SessionMask.h>
#if defined(IL2CPP_STRUCT_SessionMask_DEFINED)
#define IL2CPP_STRUCT_SessionMask__Boxed_DEFINED
struct SessionMask__Class;
struct SessionMask__Boxed {
    struct SessionMask__Class* klass;
    MonitorData* monitor;
    struct SessionMask fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SessionMask__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SessionMask__Boxed_FWDDECL
#include <Modloader/app/structs/SessionMask__Class.h>
#endif
#undef IL2CPP_STRUCT_SessionMask__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionMask__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SessionMask__Boxed_FWDDECL)
#include <Modloader/app/structs/SessionMask__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SessionMask__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
