#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeMethodInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeMethodInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeMethodInfo_DEFINED)
#define IL2CPP_STRUCT_RuntimeMethodInfo_DEFINED
struct RuntimeMethodInfo__Class;
struct RuntimeMethodInfo {
    struct RuntimeMethodInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeMethodInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimeMethodInfo_FWDDECL
#include <Modloader/app/structs/RuntimeMethodInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeMethodInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeMethodInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeMethodInfo_FWDDECL)
#include <Modloader/app/structs/RuntimeMethodInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeMethodInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
