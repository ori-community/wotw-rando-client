#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_DEFINED)
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_DEFINED
struct PlayerCompletedPasswordResetEventData__Class;
struct PlayerCompletedPasswordResetEventData {
    struct PlayerCompletedPasswordResetEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerCompletedPasswordResetEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_FWDDECL
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCompletedPasswordResetEventData_FWDDECL)
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
