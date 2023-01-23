#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreLateUpdate__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreLateUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLateUpdate__Boxed_DEFINED)
#include <Modloader/app/structs/PreLateUpdate.h>
#if defined(IL2CPP_STRUCT_PreLateUpdate_DEFINED)
#define IL2CPP_STRUCT_PreLateUpdate__Boxed_DEFINED
struct PreLateUpdate__Class;
struct PreLateUpdate__Boxed {
    struct PreLateUpdate__Class* klass;
    MonitorData* monitor;
    struct PreLateUpdate fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreLateUpdate__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PreLateUpdate__Boxed_FWDDECL
#include <Modloader/app/structs/PreLateUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_PreLateUpdate__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLateUpdate__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PreLateUpdate__Boxed_FWDDECL)
#include <Modloader/app/structs/PreLateUpdate__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreLateUpdate__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
