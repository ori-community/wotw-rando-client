#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PassiveSetupInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PassiveSetupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveSetupInfo_DEFINED)
#include <Modloader/app/structs/PassiveSetupInfo__Fields.h>
#if defined(IL2CPP_STRUCT_PassiveSetupInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_PassiveSetupInfo_DEFINED
struct PassiveSetupInfo__Class;
struct PassiveSetupInfo {
    struct PassiveSetupInfo__Class* klass;
    MonitorData* monitor;
    struct PassiveSetupInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PassiveSetupInfo_FWDDECL)
#define IL2CPP_STRUCT_PassiveSetupInfo_FWDDECL
#include <Modloader/app/structs/PassiveSetupInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_PassiveSetupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveSetupInfo_DEFINED) && !defined(IL2CPP_STRUCT_PassiveSetupInfo_FWDDECL)
#include <Modloader/app/structs/PassiveSetupInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PassiveSetupInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
