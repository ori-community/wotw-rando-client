#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeBool__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeBool__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeBool__Boxed_DEFINED)
#include <Modloader/app/structs/NativeBool.h>
#if defined(IL2CPP_STRUCT_NativeBool_DEFINED)
#define IL2CPP_STRUCT_NativeBool__Boxed_DEFINED
struct NativeBool__Class;
struct NativeBool__Boxed {
    struct NativeBool__Class* klass;
    MonitorData* monitor;
    struct NativeBool fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeBool__Boxed_FWDDECL)
#define IL2CPP_STRUCT_NativeBool__Boxed_FWDDECL
#include <Modloader/app/structs/NativeBool__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeBool__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeBool__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_NativeBool__Boxed_FWDDECL)
#include <Modloader/app/structs/NativeBool__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeBool__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
