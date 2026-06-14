#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_DEFINED)
#include <Modloader/app/structs/InteractionObject_WeightCurve_Type__Enum.h>
#if defined(IL2CPP_STRUCT_InteractionObject_WeightCurve_Type__Enum_DEFINED)
#define IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_DEFINED
struct __declspec(align(8)) InteractionObject_Multiplier__Fields {
    InteractionObject_WeightCurve_Type__Enum curve;

    float multiplier;
    InteractionObject_WeightCurve_Type__Enum result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject_Multiplier__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionObject_Multiplier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject_Multiplier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
