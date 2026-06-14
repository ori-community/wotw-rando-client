#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDateTime__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDateTime__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTime__Boxed_DEFINED)
#include <Modloader/app/structs/XsdDateTime.h>
#if defined(IL2CPP_STRUCT_XsdDateTime_DEFINED)
#define IL2CPP_STRUCT_XsdDateTime__Boxed_DEFINED
struct XsdDateTime__Class;
struct XsdDateTime__Boxed {
    struct XsdDateTime__Class* klass;
    MonitorData* monitor;
    struct XsdDateTime fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdDateTime__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XsdDateTime__Boxed_FWDDECL
#include <Modloader/app/structs/XsdDateTime__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdDateTime__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTime__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XsdDateTime__Boxed_FWDDECL)
#include <Modloader/app/structs/XsdDateTime__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDateTime__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
