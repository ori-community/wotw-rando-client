#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_1__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Trail_1__Fields_DEFINED
struct LineMesh;
struct Transform;
struct List_1_Trail_TrailPosition_;
struct Trail_1__Fields {
    struct MonoBehaviour__Fields _;
    struct LineMesh* m_lineMesh;
    struct Transform* m_transform;
    float MinVertexDistance;
    float MaxTime;
    float MaxDistance;
    float m_time;
    bool m_resetTrails;
    struct List_1_Trail_TrailPosition_* Data;
    struct Vector3 LastPosition;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Vector3 _Speed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Trail_1__Fields_FWDDECL
#include <Modloader/app/structs/LineMesh.h>
#include <Modloader/app/structs/List_1_Trail_TrailPosition_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Trail_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Trail_1__Fields_FWDDECL)
#include <Modloader/app/structs/Trail_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
