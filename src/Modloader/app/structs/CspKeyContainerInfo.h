#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CspKeyContainerInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CspKeyContainerInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspKeyContainerInfo_DEFINED)
#include <Modloader/app/structs/CspKeyContainerInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CspKeyContainerInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CspKeyContainerInfo_DEFINED
struct CspKeyContainerInfo__Class;
struct CspKeyContainerInfo {
    struct CspKeyContainerInfo__Class* klass;
    MonitorData* monitor;
    struct CspKeyContainerInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CspKeyContainerInfo_FWDDECL)
#define IL2CPP_STRUCT_CspKeyContainerInfo_FWDDECL
#include <Modloader/app/structs/CspKeyContainerInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CspKeyContainerInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspKeyContainerInfo_DEFINED) && !defined(IL2CPP_STRUCT_CspKeyContainerInfo_FWDDECL)
#include <Modloader/app/structs/CspKeyContainerInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CspKeyContainerInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
