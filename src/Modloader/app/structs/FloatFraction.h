#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatFraction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatFraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatFraction_DEFINED)
#define IL2CPP_STRUCT_FloatFraction_DEFINED
struct FloatFraction {
    float Value;
    float Max;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatFraction_FWDDECL)
#define IL2CPP_STRUCT_FloatFraction_FWDDECL
#endif
#undef IL2CPP_STRUCT_FloatFraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatFraction_DEFINED) && !defined(IL2CPP_STRUCT_FloatFraction_FWDDECL)
#include <Modloader/app/structs/FloatFraction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatFraction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
