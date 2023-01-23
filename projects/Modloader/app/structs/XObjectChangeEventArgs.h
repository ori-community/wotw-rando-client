#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XObjectChangeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XObjectChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectChangeEventArgs_DEFINED)
#include <Modloader/app/structs/XObjectChangeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_XObjectChangeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XObjectChangeEventArgs_DEFINED
struct XObjectChangeEventArgs__Class;
struct XObjectChangeEventArgs {
    struct XObjectChangeEventArgs__Class* klass;
    MonitorData* monitor;
    struct XObjectChangeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XObjectChangeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_XObjectChangeEventArgs_FWDDECL
#include <Modloader/app/structs/XObjectChangeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_XObjectChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectChangeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_XObjectChangeEventArgs_FWDDECL)
#include <Modloader/app/structs/XObjectChangeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XObjectChangeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
