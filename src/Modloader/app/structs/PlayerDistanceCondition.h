#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDistanceCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDistanceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDistanceCondition_DEFINED)
#include <Modloader/app/structs/PlayerDistanceCondition__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDistanceCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDistanceCondition_DEFINED
struct PlayerDistanceCondition__Class;
struct PlayerDistanceCondition {
    struct PlayerDistanceCondition__Class* klass;
    MonitorData* monitor;
    struct PlayerDistanceCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDistanceCondition_FWDDECL)
#define IL2CPP_STRUCT_PlayerDistanceCondition_FWDDECL
#include <Modloader/app/structs/PlayerDistanceCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDistanceCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDistanceCondition_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDistanceCondition_FWDDECL)
#include <Modloader/app/structs/PlayerDistanceCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDistanceCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
