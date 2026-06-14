#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EffectorOffset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EffectorOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectorOffset__Fields_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_EffectorOffset__Fields_DEFINED
struct EffectorOffset__Fields {
    struct OffsetModifier__Fields _;
    float handsMaintainRelativePositionWeight;
    struct Vector3 bodyOffset;
    struct Vector3 leftShoulderOffset;
    struct Vector3 rightShoulderOffset;
    struct Vector3 leftThighOffset;
    struct Vector3 rightThighOffset;
    struct Vector3 leftHandOffset;
    struct Vector3 rightHandOffset;
    struct Vector3 leftFootOffset;
    struct Vector3 rightFootOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EffectorOffset__Fields_FWDDECL)
#define IL2CPP_STRUCT_EffectorOffset__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EffectorOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectorOffset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EffectorOffset__Fields_FWDDECL)
#include <Modloader/app/structs/EffectorOffset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EffectorOffset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
