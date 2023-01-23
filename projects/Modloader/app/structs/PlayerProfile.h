#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerProfile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerProfile_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfile_DEFINED)
#include <Modloader/app/structs/PlayerProfile__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerProfile__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerProfile_DEFINED
struct PlayerProfile__Class;
struct PlayerProfile {
    struct PlayerProfile__Class* klass;
    MonitorData* monitor;
    struct PlayerProfile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerProfile_FWDDECL)
#define IL2CPP_STRUCT_PlayerProfile_FWDDECL
#include <Modloader/app/structs/PlayerProfile__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerProfile_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfile_DEFINED) && !defined(IL2CPP_STRUCT_PlayerProfile_FWDDECL)
#include <Modloader/app/structs/PlayerProfile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerProfile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
