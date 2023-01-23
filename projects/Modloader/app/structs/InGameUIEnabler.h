#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InGameUIEnabler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InGameUIEnabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_InGameUIEnabler_DEFINED)
#include <Modloader/app/structs/InGameUIEnabler__Fields.h>
#if defined(IL2CPP_STRUCT_InGameUIEnabler__Fields_DEFINED)
#define IL2CPP_STRUCT_InGameUIEnabler_DEFINED
struct InGameUIEnabler__Class;
struct InGameUIEnabler {
    struct InGameUIEnabler__Class* klass;
    MonitorData* monitor;
    struct InGameUIEnabler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InGameUIEnabler_FWDDECL)
#define IL2CPP_STRUCT_InGameUIEnabler_FWDDECL
#include <Modloader/app/structs/InGameUIEnabler__Class.h>
#endif
#undef IL2CPP_STRUCT_InGameUIEnabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_InGameUIEnabler_DEFINED) && !defined(IL2CPP_STRUCT_InGameUIEnabler_FWDDECL)
#include <Modloader/app/structs/InGameUIEnabler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InGameUIEnabler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
