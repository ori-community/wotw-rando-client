#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__EventInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__EventInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__EventInfo_DEFINED)
#define IL2CPP_STRUCT__EventInfo_DEFINED
struct _EventInfo__Class;
struct _EventInfo {
    struct _EventInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__EventInfo_FWDDECL)
#define IL2CPP_STRUCT__EventInfo_FWDDECL
#include <Modloader/app/structs/_EventInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__EventInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__EventInfo_DEFINED) && !defined(IL2CPP_STRUCT__EventInfo_FWDDECL)
#include <Modloader/app/structs/_EventInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_EventInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
