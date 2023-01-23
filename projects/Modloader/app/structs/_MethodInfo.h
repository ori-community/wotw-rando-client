#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__MethodInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__MethodInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__MethodInfo_DEFINED)
#define IL2CPP_STRUCT__MethodInfo_DEFINED
struct _MethodInfo__Class;
struct _MethodInfo {
    struct _MethodInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__MethodInfo_FWDDECL)
#define IL2CPP_STRUCT__MethodInfo_FWDDECL
#include <Modloader/app/structs/_MethodInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__MethodInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__MethodInfo_DEFINED) && !defined(IL2CPP_STRUCT__MethodInfo_FWDDECL)
#include <Modloader/app/structs/_MethodInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_MethodInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
