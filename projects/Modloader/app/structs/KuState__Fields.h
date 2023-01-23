#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_KuState__Fields_DEFINED
struct Ku;
struct KuController;
struct KuState__Fields {
    struct SaveSerialize__Fields _;
    struct Ku* m_ku;
    struct KuController* m_kuController;
    struct ActiveAnimationHandle m_animationState;
    bool m_isActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuState__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuState__Fields_FWDDECL
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/KuController.h>
#endif
#undef IL2CPP_STRUCT_KuState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuState__Fields_FWDDECL)
#include <Modloader/app/structs/KuState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
