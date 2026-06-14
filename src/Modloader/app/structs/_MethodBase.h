#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__MethodBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__MethodBase_INITIALIZING
#if !defined(IL2CPP_STRUCT__MethodBase_DEFINED)
#define IL2CPP_STRUCT__MethodBase_DEFINED
struct _MethodBase__Class;
struct _MethodBase {
    struct _MethodBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__MethodBase_FWDDECL)
#define IL2CPP_STRUCT__MethodBase_FWDDECL
#include <Modloader/app/structs/_MethodBase__Class.h>
#endif
#undef IL2CPP_STRUCT__MethodBase_INITIALIZING
#if !defined(IL2CPP_STRUCT__MethodBase_DEFINED) && !defined(IL2CPP_STRUCT__MethodBase_FWDDECL)
#include <Modloader/app/structs/_MethodBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_MethodBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
