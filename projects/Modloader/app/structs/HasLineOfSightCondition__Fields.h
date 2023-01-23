#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasLineOfSightCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasLineOfSightCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasLineOfSightCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_HasLineOfSightCondition__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct String__Array;
struct RaycastHit__Array;
struct HasLineOfSightCondition__Fields {
    struct Condition__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* CheckTarget;
    struct LayerMask LayerMask;
    bool IgnoreTags;
    struct String__Array* Tags;
    struct RaycastHit__Array* m_raycastHits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasLineOfSightCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_HasLineOfSightCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_HasLineOfSightCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasLineOfSightCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HasLineOfSightCondition__Fields_FWDDECL)
#include <Modloader/app/structs/HasLineOfSightCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasLineOfSightCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
