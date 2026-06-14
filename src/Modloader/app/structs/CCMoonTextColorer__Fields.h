#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCMoonTextColorer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCMoonTextColorer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCMoonTextColorer__Fields_DEFINED)
#include <Modloader/app/structs/CCTextModifier__Fields.h>
#if defined(IL2CPP_STRUCT_CCTextModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_CCMoonTextColorer__Fields_DEFINED
struct Color__Array;
struct AnimationCurve;
struct CCMoonTextColorer__Fields {
    struct CCTextModifier__Fields _;
    struct Color__Array* _Colors_k__BackingField;
    float _Count_k__BackingField;
    struct AnimationCurve* OpacityCurve;
    struct AnimationCurve* ScaleCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCMoonTextColorer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCMoonTextColorer__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Color__Array.h>
#endif
#undef IL2CPP_STRUCT_CCMoonTextColorer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCMoonTextColorer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCMoonTextColorer__Fields_FWDDECL)
#include <Modloader/app/structs/CCMoonTextColorer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCMoonTextColorer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
