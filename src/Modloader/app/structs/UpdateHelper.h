#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateHelper_DEFINED)
#define IL2CPP_STRUCT_UpdateHelper_DEFINED
struct UpdateHelper__Class;
struct UpdateHelper {
    struct UpdateHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UpdateHelper_FWDDECL)
#define IL2CPP_STRUCT_UpdateHelper_FWDDECL
#include <Modloader/app/structs/UpdateHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateHelper_DEFINED) && !defined(IL2CPP_STRUCT_UpdateHelper_FWDDECL)
#include <Modloader/app/structs/UpdateHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
