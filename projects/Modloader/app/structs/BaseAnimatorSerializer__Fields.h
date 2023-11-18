#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_DEFINED
struct BaseAnimator__Array;
struct BaseAnimatorSerializer__Fields {
    struct SaveSerialize__Fields _;
    struct BaseAnimator__Array* m_animators;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator__Array.h>
#endif
#undef IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_FWDDECL)
#include <Modloader/app/structs/BaseAnimatorSerializer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseAnimatorSerializer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
