#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_DEFINED
struct ShaderAnimationTimeDriver__Fields {
    struct MonoBehaviour__Fields _;
    float GameTimeMultiplier;
    float m_time;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_FWDDECL)
#include <Modloader/app/structs/ShaderAnimationTimeDriver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderAnimationTimeDriver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
