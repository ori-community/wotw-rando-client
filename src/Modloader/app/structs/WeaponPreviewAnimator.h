#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponPreviewAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponPreviewAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponPreviewAnimator_DEFINED)
#include <Modloader/app/structs/WeaponPreviewAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponPreviewAnimator_DEFINED
struct WeaponPreviewAnimator__Class;
struct WeaponPreviewAnimator {
    struct WeaponPreviewAnimator__Class* klass;
    MonitorData* monitor;
    struct WeaponPreviewAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponPreviewAnimator_FWDDECL)
#define IL2CPP_STRUCT_WeaponPreviewAnimator_FWDDECL
#include <Modloader/app/structs/WeaponPreviewAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponPreviewAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponPreviewAnimator_DEFINED) && !defined(IL2CPP_STRUCT_WeaponPreviewAnimator_FWDDECL)
#include <Modloader/app/structs/WeaponPreviewAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponPreviewAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
