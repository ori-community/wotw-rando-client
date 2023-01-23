#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_DEFINED
struct UInt16__Array;
struct Vector2__Array;
struct __declspec(align(8)) MortarEntity_AimVeloCache_Grid__Fields {
    int32_t GridXSteps;
    int32_t GridYSteps;
    float GridXMin;
    float GridXMax;
    float GridYMin;
    float GridYMax;
    struct UInt16__Array* m_packed;
    struct Vector2__Array* m_velo;
};
#endif
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_FWDDECL
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/Vector2__Array.h>
#endif
#undef IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Grid__Fields_FWDDECL)
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Grid__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Grid__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
