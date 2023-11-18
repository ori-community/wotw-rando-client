#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ray__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ray__Boxed_DEFINED)
#include <Modloader/app/structs/Ray.h>
#if defined(IL2CPP_STRUCT_Ray_DEFINED)
#define IL2CPP_STRUCT_Ray__Boxed_DEFINED
struct Ray__Class;
struct Ray__Boxed {
    struct Ray__Class* klass;
    MonitorData* monitor;
    struct Ray fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ray__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Ray__Boxed_FWDDECL
#include <Modloader/app/structs/Ray__Class.h>
#endif
#undef IL2CPP_STRUCT_Ray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ray__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Ray__Boxed_FWDDECL)
#include <Modloader/app/structs/Ray__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ray__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
