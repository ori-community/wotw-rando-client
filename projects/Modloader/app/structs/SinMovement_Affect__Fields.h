#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinMovement_Affect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinMovement_Affect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement_Affect__Fields_DEFINED)
#include <Modloader/app/structs/SinMovement_Affect_AffectType__Enum.h>
#if defined(IL2CPP_STRUCT_SinMovement_Affect_AffectType__Enum_DEFINED)
#define IL2CPP_STRUCT_SinMovement_Affect__Fields_DEFINED
struct __declspec(align(8)) SinMovement_Affect__Fields {
    float Offset;
    float OffsetRandom;
    float Period;
    float PeriodRandom;
    float Range;
    float RangeRandom;
    SinMovement_Affect_AffectType__Enum Type;

    float m_o;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SinMovement_Affect__Fields_FWDDECL)
#define IL2CPP_STRUCT_SinMovement_Affect__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SinMovement_Affect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement_Affect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SinMovement_Affect__Fields_FWDDECL)
#include <Modloader/app/structs/SinMovement_Affect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinMovement_Affect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
