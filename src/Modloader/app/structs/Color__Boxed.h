#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Color__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Color__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Color__Boxed_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Color__Boxed_DEFINED
struct Color__Class;
struct Color__Boxed {
    struct Color__Class* klass;
    MonitorData* monitor;
    struct Color fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Color__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Color__Boxed_FWDDECL
#include <Modloader/app/structs/Color__Class.h>
#endif
#undef IL2CPP_STRUCT_Color__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Color__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Color__Boxed_FWDDECL)
#include <Modloader/app/structs/Color__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Color__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
