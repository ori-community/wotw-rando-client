#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Resolution__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Resolution__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Resolution__Boxed_DEFINED)
#include <Modloader/app/structs/Resolution.h>
#if defined(IL2CPP_STRUCT_Resolution_DEFINED)
#define IL2CPP_STRUCT_Resolution__Boxed_DEFINED
struct Resolution__Class;
struct Resolution__Boxed {
    struct Resolution__Class* klass;
    MonitorData* monitor;
    struct Resolution fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Resolution__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Resolution__Boxed_FWDDECL
#include <Modloader/app/structs/Resolution__Class.h>
#endif
#undef IL2CPP_STRUCT_Resolution__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Resolution__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Resolution__Boxed_FWDDECL)
#include <Modloader/app/structs/Resolution__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Resolution__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
