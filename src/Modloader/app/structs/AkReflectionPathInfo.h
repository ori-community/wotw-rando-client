#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkReflectionPathInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkReflectionPathInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkReflectionPathInfo_DEFINED)
#include <Modloader/app/structs/AkReflectionPathInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkReflectionPathInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkReflectionPathInfo_DEFINED
struct AkReflectionPathInfo__Class;
struct AkReflectionPathInfo {
    struct AkReflectionPathInfo__Class* klass;
    MonitorData* monitor;
    struct AkReflectionPathInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkReflectionPathInfo_FWDDECL)
#define IL2CPP_STRUCT_AkReflectionPathInfo_FWDDECL
#include <Modloader/app/structs/AkReflectionPathInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkReflectionPathInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkReflectionPathInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkReflectionPathInfo_FWDDECL)
#include <Modloader/app/structs/AkReflectionPathInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkReflectionPathInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
