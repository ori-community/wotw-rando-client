#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__ParameterInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__ParameterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__ParameterInfo_DEFINED)
#define IL2CPP_STRUCT__ParameterInfo_DEFINED
struct _ParameterInfo__Class;
struct _ParameterInfo {
    struct _ParameterInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__ParameterInfo_FWDDECL)
#define IL2CPP_STRUCT__ParameterInfo_FWDDECL
#include <Modloader/app/structs/_ParameterInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__ParameterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__ParameterInfo_DEFINED) && !defined(IL2CPP_STRUCT__ParameterInfo_FWDDECL)
#include <Modloader/app/structs/_ParameterInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_ParameterInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
