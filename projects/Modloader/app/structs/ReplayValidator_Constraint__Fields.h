#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_DEFINED
struct __declspec(align(8)) ReplayValidator_Constraint__Fields {
    float Interval;
    struct Vector2 Min;
    struct Vector2 Max;
    float SqrMagnitude;
    struct Vector2 MinRecorded;
    struct Vector2 MaxRecorded;
    float RecordedSqrMagnitude;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidator_Constraint__Fields_FWDDECL)
#include <Modloader/app/structs/ReplayValidator_Constraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidator_Constraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
