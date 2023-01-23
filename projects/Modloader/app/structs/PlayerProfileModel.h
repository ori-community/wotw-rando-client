#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerProfileModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerProfileModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileModel_DEFINED)
#include <Modloader/app/structs/PlayerProfileModel__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerProfileModel__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerProfileModel_DEFINED
struct PlayerProfileModel__Class;
struct PlayerProfileModel {
    struct PlayerProfileModel__Class* klass;
    MonitorData* monitor;
    struct PlayerProfileModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerProfileModel_FWDDECL)
#define IL2CPP_STRUCT_PlayerProfileModel_FWDDECL
#include <Modloader/app/structs/PlayerProfileModel__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerProfileModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileModel_DEFINED) && !defined(IL2CPP_STRUCT_PlayerProfileModel_FWDDECL)
#include <Modloader/app/structs/PlayerProfileModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerProfileModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
