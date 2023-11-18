#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__ArrayPoolDefault_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__ArrayPoolDefault_INITIALIZING
#if !defined(IL2CPP_STRUCT__ArrayPoolDefault_DEFINED)
#include <Modloader/app/structs/_ArrayPoolDefault__Fields.h>
#if defined(IL2CPP_STRUCT__ArrayPoolDefault__Fields_DEFINED)
#define IL2CPP_STRUCT__ArrayPoolDefault_DEFINED
struct _ArrayPoolDefault__Class;
struct _ArrayPoolDefault {
    struct _ArrayPoolDefault__Class* klass;
    MonitorData* monitor;
    struct _ArrayPoolDefault__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT__ArrayPoolDefault_FWDDECL)
#define IL2CPP_STRUCT__ArrayPoolDefault_FWDDECL
#include <Modloader/app/structs/_ArrayPoolDefault__Class.h>
#endif
#undef IL2CPP_STRUCT__ArrayPoolDefault_INITIALIZING
#if !defined(IL2CPP_STRUCT__ArrayPoolDefault_DEFINED) && !defined(IL2CPP_STRUCT__ArrayPoolDefault_FWDDECL)
#include <Modloader/app/structs/_ArrayPoolDefault.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_ArrayPoolDefault.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
