#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_DEFINED)
#include <Modloader/app/structs/Uri__Fields.h>
#if defined(IL2CPP_STRUCT_Uri__Fields_DEFINED)
#define IL2CPP_STRUCT_Uri_DEFINED
struct Uri__Class;
struct Uri {
    struct Uri__Class* klass;
    MonitorData* monitor;
    struct Uri__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Uri_FWDDECL)
#define IL2CPP_STRUCT_Uri_FWDDECL
#include <Modloader/app/structs/Uri__Class.h>
#endif
#undef IL2CPP_STRUCT_Uri_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_DEFINED) && !defined(IL2CPP_STRUCT_Uri_FWDDECL)
#include <Modloader/app/structs/Uri.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
