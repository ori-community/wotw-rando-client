#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpText__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpText__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpText__Fields_DEFINED
struct LegacyScaleAnimator;
struct LegacyTransparencyAnimator;
struct ExpText__Fields {
    struct Suspendable__Fields _;
    struct LegacyScaleAnimator* ScaleShake;
    struct LegacyTransparencyAnimator* TransparencyAnimator;
    bool _IsSuspended_k__BackingField;
    float m_time;
    int32_t m_amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpText__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpText__Fields_FWDDECL
#include <Modloader/app/structs/LegacyScaleAnimator.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#endif
#undef IL2CPP_STRUCT_ExpText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpText__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpText__Fields_FWDDECL)
#include <Modloader/app/structs/ExpText__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpText__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
