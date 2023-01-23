#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriHelper_DEFINED)
#define IL2CPP_STRUCT_UriHelper_DEFINED
struct UriHelper__Class;
struct UriHelper {
    struct UriHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UriHelper_FWDDECL)
#define IL2CPP_STRUCT_UriHelper_FWDDECL
#include <Modloader/app/structs/UriHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_UriHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriHelper_DEFINED) && !defined(IL2CPP_STRUCT_UriHelper_FWDDECL)
#include <Modloader/app/structs/UriHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
