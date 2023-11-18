#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRChaperoneSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRChaperoneSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRChaperoneSetup_DEFINED)
#include <Modloader/app/structs/CVRChaperoneSetup__Fields.h>
#if defined(IL2CPP_STRUCT_CVRChaperoneSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRChaperoneSetup_DEFINED
struct CVRChaperoneSetup__Class;
struct CVRChaperoneSetup {
    struct CVRChaperoneSetup__Class* klass;
    MonitorData* monitor;
    struct CVRChaperoneSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRChaperoneSetup_FWDDECL)
#define IL2CPP_STRUCT_CVRChaperoneSetup_FWDDECL
#include <Modloader/app/structs/CVRChaperoneSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRChaperoneSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRChaperoneSetup_DEFINED) && !defined(IL2CPP_STRUCT_CVRChaperoneSetup_FWDDECL)
#include <Modloader/app/structs/CVRChaperoneSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRChaperoneSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
