#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiTargetCameraSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiTargetCameraSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiTargetCameraSetup_DEFINED)
#include <Modloader/app/structs/MultiTargetCameraSetup__Fields.h>
#if defined(IL2CPP_STRUCT_MultiTargetCameraSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiTargetCameraSetup_DEFINED
struct MultiTargetCameraSetup__Class;
struct MultiTargetCameraSetup {
    struct MultiTargetCameraSetup__Class* klass;
    MonitorData* monitor;
    struct MultiTargetCameraSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiTargetCameraSetup_FWDDECL)
#define IL2CPP_STRUCT_MultiTargetCameraSetup_FWDDECL
#include <Modloader/app/structs/MultiTargetCameraSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_MultiTargetCameraSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiTargetCameraSetup_DEFINED) && !defined(IL2CPP_STRUCT_MultiTargetCameraSetup_FWDDECL)
#include <Modloader/app/structs/MultiTargetCameraSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiTargetCameraSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
