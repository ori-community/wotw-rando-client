#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMontage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMontage_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage_DEFINED)
#include <Modloader/app/structs/AnimationMontage__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationMontage__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMontage_DEFINED
struct AnimationMontage__Class;
struct AnimationMontage {
    struct AnimationMontage__Class* klass;
    MonitorData* monitor;
    struct AnimationMontage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMontage_FWDDECL)
#define IL2CPP_STRUCT_AnimationMontage_FWDDECL
#include <Modloader/app/structs/AnimationMontage__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationMontage_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMontage_FWDDECL)
#include <Modloader/app/structs/AnimationMontage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMontage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
