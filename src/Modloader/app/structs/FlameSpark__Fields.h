#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlameSpark__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlameSpark__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlameSpark__Fields_DEFINED)
#include <Modloader/app/structs/Flammable_FlameColor__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Flammable_FlameColor__Enum_DEFINED)
#define IL2CPP_STRUCT_FlameSpark__Fields_DEFINED
struct FlameSpark__Fields {
    struct MonoBehaviour__Fields _;
    struct LayerMask InteractionMask;
    float Radius;
    struct Vector3 Offset;
    int32_t SparkFrames;
    Flammable_FlameColor__Enum Color;

    int32_t m_framesRemaining;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlameSpark__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlameSpark__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FlameSpark__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlameSpark__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlameSpark__Fields_FWDDECL)
#include <Modloader/app/structs/FlameSpark__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlameSpark__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
