#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSessionRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSessionRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSessionRecord_DEFINED)
#include <Modloader/app/structs/GameSessionRecord__Fields.h>
#if defined(IL2CPP_STRUCT_GameSessionRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_GameSessionRecord_DEFINED
struct GameSessionRecord__Class;
struct GameSessionRecord {
    struct GameSessionRecord__Class* klass;
    MonitorData* monitor;
    struct GameSessionRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameSessionRecord_FWDDECL)
#define IL2CPP_STRUCT_GameSessionRecord_FWDDECL
#include <Modloader/app/structs/GameSessionRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_GameSessionRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSessionRecord_DEFINED) && !defined(IL2CPP_STRUCT_GameSessionRecord_FWDDECL)
#include <Modloader/app/structs/GameSessionRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSessionRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
