#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionBlurProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionBlurProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurProfilingSetting_DEFINED)
#include <Modloader/app/structs/MotionBlurProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_MotionBlurProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionBlurProfilingSetting_DEFINED
struct MotionBlurProfilingSetting__Class;
struct MotionBlurProfilingSetting {
    struct MotionBlurProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct MotionBlurProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionBlurProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_MotionBlurProfilingSetting_FWDDECL
#include <Modloader/app/structs/MotionBlurProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_MotionBlurProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_MotionBlurProfilingSetting_FWDDECL)
#include <Modloader/app/structs/MotionBlurProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionBlurProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
