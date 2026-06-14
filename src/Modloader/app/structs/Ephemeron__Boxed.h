#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ephemeron__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ephemeron__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ephemeron__Boxed_DEFINED)
#include <Modloader/app/structs/Ephemeron.h>
#if defined(IL2CPP_STRUCT_Ephemeron_DEFINED)
#define IL2CPP_STRUCT_Ephemeron__Boxed_DEFINED
struct Ephemeron__Class;
struct Ephemeron__Boxed {
    struct Ephemeron__Class* klass;
    MonitorData* monitor;
    struct Ephemeron fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ephemeron__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Ephemeron__Boxed_FWDDECL
#include <Modloader/app/structs/Ephemeron__Class.h>
#endif
#undef IL2CPP_STRUCT_Ephemeron__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ephemeron__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Ephemeron__Boxed_FWDDECL)
#include <Modloader/app/structs/Ephemeron__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ephemeron__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
