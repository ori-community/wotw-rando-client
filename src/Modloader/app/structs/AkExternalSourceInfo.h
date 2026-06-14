#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkExternalSourceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkExternalSourceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkExternalSourceInfo_DEFINED)
#include <Modloader/app/structs/AkExternalSourceInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkExternalSourceInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkExternalSourceInfo_DEFINED
struct AkExternalSourceInfo__Class;
struct AkExternalSourceInfo {
    struct AkExternalSourceInfo__Class* klass;
    MonitorData* monitor;
    struct AkExternalSourceInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkExternalSourceInfo_FWDDECL)
#define IL2CPP_STRUCT_AkExternalSourceInfo_FWDDECL
#include <Modloader/app/structs/AkExternalSourceInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkExternalSourceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkExternalSourceInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkExternalSourceInfo_FWDDECL)
#include <Modloader/app/structs/AkExternalSourceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkExternalSourceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
