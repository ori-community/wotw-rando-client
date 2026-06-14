#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimePropertyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimePropertyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimePropertyInfo_DEFINED)
#define IL2CPP_STRUCT_RuntimePropertyInfo_DEFINED
struct RuntimePropertyInfo__Class;
struct RuntimePropertyInfo {
    struct RuntimePropertyInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimePropertyInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimePropertyInfo_FWDDECL
#include <Modloader/app/structs/RuntimePropertyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimePropertyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimePropertyInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimePropertyInfo_FWDDECL)
#include <Modloader/app/structs/RuntimePropertyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimePropertyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
