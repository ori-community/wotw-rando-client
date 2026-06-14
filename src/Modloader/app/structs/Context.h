#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context_DEFINED)
#include <Modloader/app/structs/Context__Fields.h>
#if defined(IL2CPP_STRUCT_Context__Fields_DEFINED)
#define IL2CPP_STRUCT_Context_DEFINED
struct Context__Class;
struct Context {
    struct Context__Class* klass;
    MonitorData* monitor;
    struct Context__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Context_FWDDECL)
#define IL2CPP_STRUCT_Context_FWDDECL
#include <Modloader/app/structs/Context__Class.h>
#endif
#undef IL2CPP_STRUCT_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context_DEFINED) && !defined(IL2CPP_STRUCT_Context_FWDDECL)
#include <Modloader/app/structs/Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
