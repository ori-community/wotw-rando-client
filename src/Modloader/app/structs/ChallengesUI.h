#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChallengesUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChallengesUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengesUI_DEFINED)
#include <Modloader/app/structs/ChallengesUI__Fields.h>
#if defined(IL2CPP_STRUCT_ChallengesUI__Fields_DEFINED)
#define IL2CPP_STRUCT_ChallengesUI_DEFINED
struct ChallengesUI__Class;
struct ChallengesUI {
    struct ChallengesUI__Class* klass;
    MonitorData* monitor;
    struct ChallengesUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChallengesUI_FWDDECL)
#define IL2CPP_STRUCT_ChallengesUI_FWDDECL
#include <Modloader/app/structs/ChallengesUI__Class.h>
#endif
#undef IL2CPP_STRUCT_ChallengesUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengesUI_DEFINED) && !defined(IL2CPP_STRUCT_ChallengesUI_FWDDECL)
#include <Modloader/app/structs/ChallengesUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChallengesUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
