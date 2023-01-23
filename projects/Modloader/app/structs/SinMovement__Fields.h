#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SinMovement__Fields_DEFINED
struct List_1_SinMovement_Affect_;
struct Transform;
struct SinMovement__Fields {
    struct SaveSerialize__Fields _;
    struct List_1_SinMovement_Affect_* Affectors;
    bool DivideByFifty;
    struct Vector3 LocalPosition;
    struct Quaternion LocalRotation;
    struct Vector3 LocalScale;
    struct Transform* Transform;
    float CurrentTime;
    struct Vector3 m_startPosition;
    struct Quaternion m_startRotation;
    struct Vector3 m_startScale;
    bool m_usePosition;
    bool m_useRotation;
    bool m_useScale;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SinMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_SinMovement__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SinMovement_Affect_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SinMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SinMovement__Fields_FWDDECL)
#include <Modloader/app/structs/SinMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
