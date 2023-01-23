#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameParameters_DEFINED)
#include <Modloader/app/structs/GameParameters__Fields.h>
#if defined(IL2CPP_STRUCT_GameParameters__Fields_DEFINED)
#define IL2CPP_STRUCT_GameParameters_DEFINED
struct GameParameters__Class;
struct GameParameters {
    struct GameParameters__Class* klass;
    MonitorData* monitor;
    struct GameParameters__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameParameters_FWDDECL)
#define IL2CPP_STRUCT_GameParameters_FWDDECL
#include <Modloader/app/structs/GameParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_GameParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameParameters_DEFINED) && !defined(IL2CPP_STRUCT_GameParameters_FWDDECL)
#include <Modloader/app/structs/GameParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
