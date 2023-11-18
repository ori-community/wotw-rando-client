#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailWispsHook__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailWispsHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailWispsHook__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoonTrailWispsHook__Fields_DEFINED
struct MoonTrail__Array;
struct MoonTrailWispsHook__Fields {
    struct MonoBehaviour__Fields _;
    bool m_resetTrails;
    SuspendableMask__Enum m_suspensionMask;

    struct Bounds m_localBounds;
    bool m_insideFrustum;
    struct MoonTrail__Array* m_trails;
    struct Vector3 _Speed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailWispsHook__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailWispsHook__Fields_FWDDECL
#include <Modloader/app/structs/MoonTrail__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailWispsHook__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailWispsHook__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailWispsHook__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTrailWispsHook__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailWispsHook__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
