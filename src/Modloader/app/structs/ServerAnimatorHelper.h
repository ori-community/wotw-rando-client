#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerAnimatorHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerAnimatorHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_DEFINED)
#define IL2CPP_STRUCT_ServerAnimatorHelper_DEFINED
struct ServerAnimatorHelper__Class;
struct ServerAnimatorHelper {
    struct ServerAnimatorHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_FWDDECL)
#define IL2CPP_STRUCT_ServerAnimatorHelper_FWDDECL
#include <Modloader/app/structs/ServerAnimatorHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerAnimatorHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_DEFINED) && !defined(IL2CPP_STRUCT_ServerAnimatorHelper_FWDDECL)
#include <Modloader/app/structs/ServerAnimatorHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerAnimatorHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
