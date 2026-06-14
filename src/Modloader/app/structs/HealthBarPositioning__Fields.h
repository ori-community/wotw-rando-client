#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthBarPositioning__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthBarPositioning__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBarPositioning__Fields_DEFINED)
#include <Modloader/app/structs/HealthBarPositioning_PositionType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_HealthBarPositioning_PositionType__Enum_DEFINED)
#define IL2CPP_STRUCT_HealthBarPositioning__Fields_DEFINED
struct Transform;
struct HealthBarPositioning__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* PivotTransform;
    struct Vector3 Offset;
    float OffsetToNeck;
    struct Vector3 VerticalOffset;
    struct Vector3 HorizontalOffset;
    HealthBarPositioning_PositionType__Enum PositioningType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthBarPositioning__Fields_FWDDECL)
#define IL2CPP_STRUCT_HealthBarPositioning__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HealthBarPositioning__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBarPositioning__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HealthBarPositioning__Fields_FWDDECL)
#include <Modloader/app/structs/HealthBarPositioning__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthBarPositioning__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
