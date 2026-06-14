#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__ConstructorInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__ConstructorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__ConstructorInfo_DEFINED)
#define IL2CPP_STRUCT__ConstructorInfo_DEFINED
struct _ConstructorInfo__Class;
struct _ConstructorInfo {
    struct _ConstructorInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__ConstructorInfo_FWDDECL)
#define IL2CPP_STRUCT__ConstructorInfo_FWDDECL
#include <Modloader/app/structs/_ConstructorInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__ConstructorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__ConstructorInfo_DEFINED) && !defined(IL2CPP_STRUCT__ConstructorInfo_FWDDECL)
#include <Modloader/app/structs/_ConstructorInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_ConstructorInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
