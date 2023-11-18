#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Navigation__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Navigation__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Navigation__Boxed_DEFINED)
#include <Modloader/app/structs/Navigation.h>
#if defined(IL2CPP_STRUCT_Navigation_DEFINED)
#define IL2CPP_STRUCT_Navigation__Boxed_DEFINED
struct Navigation__Class;
struct Navigation__Boxed {
    struct Navigation__Class* klass;
    MonitorData* monitor;
    struct Navigation fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Navigation__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Navigation__Boxed_FWDDECL
#include <Modloader/app/structs/Navigation__Class.h>
#endif
#undef IL2CPP_STRUCT_Navigation__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Navigation__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Navigation__Boxed_FWDDECL)
#include <Modloader/app/structs/Navigation__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Navigation__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
