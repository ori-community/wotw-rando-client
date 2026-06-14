#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadHelper_DEFINED)
#include <Modloader/app/structs/ThreadHelper__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadHelper_DEFINED
struct ThreadHelper__Class;
struct ThreadHelper {
    struct ThreadHelper__Class* klass;
    MonitorData* monitor;
    struct ThreadHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadHelper_FWDDECL)
#define IL2CPP_STRUCT_ThreadHelper_FWDDECL
#include <Modloader/app/structs/ThreadHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadHelper_DEFINED) && !defined(IL2CPP_STRUCT_ThreadHelper_FWDDECL)
#include <Modloader/app/structs/ThreadHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
