#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED)
#define IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_DEFINED
struct __declspec(align(8)) OffsetModifier_OffsetLimits__Fields {
    FullBodyBipedEffector__Enum effector;

    float spring;
    bool x;
    bool y;
    bool z;
    float minX;
    float maxX;
    float minY;
    float maxY;
    float minZ;
    float maxZ;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_FWDDECL)
#define IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OffsetModifier_OffsetLimits__Fields_FWDDECL)
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
