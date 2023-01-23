#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateCondition_DEFINED)
#include <Modloader/app/structs/GameStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_GameStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_GameStateCondition_DEFINED
struct GameStateCondition__Class;
struct GameStateCondition {
    struct GameStateCondition__Class* klass;
    MonitorData* monitor;
    struct GameStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameStateCondition_FWDDECL)
#define IL2CPP_STRUCT_GameStateCondition_FWDDECL
#include <Modloader/app/structs/GameStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_GameStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_GameStateCondition_FWDDECL)
#include <Modloader/app/structs/GameStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
