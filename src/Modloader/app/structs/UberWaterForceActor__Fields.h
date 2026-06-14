#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterForceActor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterForceActor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterForceActor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterForceActor__Fields_DEFINED
struct UberWaterControl;
struct UberWaterForceActor__Fields {
    struct MonoBehaviour__Fields _;
    struct UberWaterControl* m_control;
    float Strength;
    float Radius;
    bool ApplyEveryFrame;
    bool AffectDisplacement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterForceActor__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterForceActor__Fields_FWDDECL
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_UberWaterForceActor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterForceActor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterForceActor__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterForceActor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterForceActor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
