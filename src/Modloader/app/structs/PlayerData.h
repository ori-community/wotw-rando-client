#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerData_DEFINED)
#include <Modloader/app/structs/PlayerData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerData_DEFINED
struct PlayerData__Class;
struct PlayerData {
    struct PlayerData__Class* klass;
    MonitorData* monitor;
    struct PlayerData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerData_FWDDECL)
#define IL2CPP_STRUCT_PlayerData_FWDDECL
#include <Modloader/app/structs/PlayerData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerData_FWDDECL)
#include <Modloader/app/structs/PlayerData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
