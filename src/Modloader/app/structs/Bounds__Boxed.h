#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bounds__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bounds__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bounds__Boxed_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_Bounds__Boxed_DEFINED
struct Bounds__Class;
struct Bounds__Boxed {
    struct Bounds__Class* klass;
    MonitorData* monitor;
    struct Bounds fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bounds__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Bounds__Boxed_FWDDECL
#include <Modloader/app/structs/Bounds__Class.h>
#endif
#undef IL2CPP_STRUCT_Bounds__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bounds__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Bounds__Boxed_FWDDECL)
#include <Modloader/app/structs/Bounds__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bounds__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
