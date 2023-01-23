#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingHitWallState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingHitWallState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingHitWallState_DEFINED)
#include <Modloader/app/structs/RammingHitWallState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingHitWallState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingHitWallState_DEFINED
struct RammingHitWallState__Class;
struct RammingHitWallState {
    struct RammingHitWallState__Class* klass;
    MonitorData* monitor;
    struct RammingHitWallState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingHitWallState_FWDDECL)
#define IL2CPP_STRUCT_RammingHitWallState_FWDDECL
#include <Modloader/app/structs/RammingHitWallState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingHitWallState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingHitWallState_DEFINED) && !defined(IL2CPP_STRUCT_RammingHitWallState_FWDDECL)
#include <Modloader/app/structs/RammingHitWallState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingHitWallState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
