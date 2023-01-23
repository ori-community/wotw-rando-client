#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossCameraSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossCameraSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraSetup_DEFINED)
#include <Modloader/app/structs/BossCameraSetup__Fields.h>
#if defined(IL2CPP_STRUCT_BossCameraSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_BossCameraSetup_DEFINED
struct BossCameraSetup__Class;
struct BossCameraSetup {
    struct BossCameraSetup__Class* klass;
    MonitorData* monitor;
    struct BossCameraSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossCameraSetup_FWDDECL)
#define IL2CPP_STRUCT_BossCameraSetup_FWDDECL
#include <Modloader/app/structs/BossCameraSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_BossCameraSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraSetup_DEFINED) && !defined(IL2CPP_STRUCT_BossCameraSetup_FWDDECL)
#include <Modloader/app/structs/BossCameraSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossCameraSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
