#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__PropertyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__PropertyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__PropertyInfo_DEFINED)
#define IL2CPP_STRUCT__PropertyInfo_DEFINED
struct _PropertyInfo__Class;
struct _PropertyInfo {
    struct _PropertyInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__PropertyInfo_FWDDECL)
#define IL2CPP_STRUCT__PropertyInfo_FWDDECL
#include <Modloader/app/structs/_PropertyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__PropertyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__PropertyInfo_DEFINED) && !defined(IL2CPP_STRUCT__PropertyInfo_FWDDECL)
#include <Modloader/app/structs/_PropertyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_PropertyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
