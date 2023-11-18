#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreditsTextPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreditsTextPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreditsTextPosition_DEFINED)
#include <Modloader/app/structs/CreditsTextPosition__Fields.h>
#if defined(IL2CPP_STRUCT_CreditsTextPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_CreditsTextPosition_DEFINED
struct CreditsTextPosition__Class;
struct CreditsTextPosition {
    struct CreditsTextPosition__Class* klass;
    MonitorData* monitor;
    struct CreditsTextPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreditsTextPosition_FWDDECL)
#define IL2CPP_STRUCT_CreditsTextPosition_FWDDECL
#include <Modloader/app/structs/CreditsTextPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_CreditsTextPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreditsTextPosition_DEFINED) && !defined(IL2CPP_STRUCT_CreditsTextPosition_FWDDECL)
#include <Modloader/app/structs/CreditsTextPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreditsTextPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
