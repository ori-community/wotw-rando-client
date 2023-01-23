#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarm__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_UberSwarm__Fields_DEFINED
struct List_1_UberSwarmer_;
struct UberSwarm__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UberSwarmer_* Swarmers;
    struct LayerMask RaycastLayerMask;
    bool DebugShowVectorAlignment;
    bool DebugShowVectorSeparation;
    bool DebugShowVectorCohesion;
    bool DebugShowVectorAvoidance;
    bool DebugShowVectorGlobalPOI;
    bool DebugShowVectorWander;
    bool DebugShowRaysAvoidance;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarm__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberSwarm__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberSwarmer_.h>
#endif
#undef IL2CPP_STRUCT_UberSwarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarm__Fields_FWDDECL)
#include <Modloader/app/structs/UberSwarm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
