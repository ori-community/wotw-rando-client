#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDuration__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDuration__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDuration__Boxed_DEFINED)
#include <Modloader/app/structs/XsdDuration.h>
#if defined(IL2CPP_STRUCT_XsdDuration_DEFINED)
#define IL2CPP_STRUCT_XsdDuration__Boxed_DEFINED
struct XsdDuration__Class;
struct XsdDuration__Boxed {
    struct XsdDuration__Class* klass;
    MonitorData* monitor;
    struct XsdDuration fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdDuration__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XsdDuration__Boxed_FWDDECL
#include <Modloader/app/structs/XsdDuration__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdDuration__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDuration__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XsdDuration__Boxed_FWDDECL)
#include <Modloader/app/structs/XsdDuration__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDuration__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
