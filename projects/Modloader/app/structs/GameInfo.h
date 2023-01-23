#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameInfo_DEFINED)
#include <Modloader/app/structs/GameInfo__Fields.h>
#if defined(IL2CPP_STRUCT_GameInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_GameInfo_DEFINED
struct GameInfo__Class;
struct GameInfo {
    struct GameInfo__Class* klass;
    MonitorData* monitor;
    struct GameInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameInfo_FWDDECL)
#define IL2CPP_STRUCT_GameInfo_FWDDECL
#include <Modloader/app/structs/GameInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_GameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameInfo_DEFINED) && !defined(IL2CPP_STRUCT_GameInfo_FWDDECL)
#include <Modloader/app/structs/GameInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
