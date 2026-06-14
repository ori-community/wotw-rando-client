#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentGamesResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentGamesResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesResult_DEFINED)
#include <Modloader/app/structs/CurrentGamesResult__Fields.h>
#if defined(IL2CPP_STRUCT_CurrentGamesResult__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentGamesResult_DEFINED
struct CurrentGamesResult__Class;
struct CurrentGamesResult {
    struct CurrentGamesResult__Class* klass;
    MonitorData* monitor;
    struct CurrentGamesResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentGamesResult_FWDDECL)
#define IL2CPP_STRUCT_CurrentGamesResult_FWDDECL
#include <Modloader/app/structs/CurrentGamesResult__Class.h>
#endif
#undef IL2CPP_STRUCT_CurrentGamesResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesResult_DEFINED) && !defined(IL2CPP_STRUCT_CurrentGamesResult_FWDDECL)
#include <Modloader/app/structs/CurrentGamesResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentGamesResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
