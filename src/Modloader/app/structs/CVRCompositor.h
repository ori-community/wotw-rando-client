#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRCompositor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRCompositor_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRCompositor_DEFINED)
#include <Modloader/app/structs/CVRCompositor__Fields.h>
#if defined(IL2CPP_STRUCT_CVRCompositor__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRCompositor_DEFINED
struct CVRCompositor__Class;
struct CVRCompositor {
    struct CVRCompositor__Class* klass;
    MonitorData* monitor;
    struct CVRCompositor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRCompositor_FWDDECL)
#define IL2CPP_STRUCT_CVRCompositor_FWDDECL
#include <Modloader/app/structs/CVRCompositor__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRCompositor_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRCompositor_DEFINED) && !defined(IL2CPP_STRUCT_CVRCompositor_FWDDECL)
#include <Modloader/app/structs/CVRCompositor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRCompositor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
