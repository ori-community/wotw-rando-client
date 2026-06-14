#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_DEFINED
struct __declspec(align(8)) OffsetEffector_EffectorLink__Fields {
    FullBodyBipedEffector__Enum effectorType;

    float weightMultiplier;
    struct Vector3 localPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_FWDDECL)
#define IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OffsetEffector_EffectorLink__Fields_FWDDECL)
#include <Modloader/app/structs/OffsetEffector_EffectorLink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetEffector_EffectorLink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
