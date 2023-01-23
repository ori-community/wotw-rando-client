#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED)
#define IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED
struct SnapTrapEntity_SnapTrapParameters {
    float StayClosedDuration;
    float StayOpenAfterCaughtDuration;
    float ChewDamage;
};
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapEntity_SnapTrapParameters_FWDDECL)
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
