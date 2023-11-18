#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossCameraTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossCameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraTarget_DEFINED)
#include <Modloader/app/structs/BossCameraTarget__Fields.h>
#if defined(IL2CPP_STRUCT_BossCameraTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_BossCameraTarget_DEFINED
struct BossCameraTarget__Class;
struct BossCameraTarget {
    struct BossCameraTarget__Class* klass;
    MonitorData* monitor;
    struct BossCameraTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossCameraTarget_FWDDECL)
#define IL2CPP_STRUCT_BossCameraTarget_FWDDECL
#include <Modloader/app/structs/BossCameraTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_BossCameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossCameraTarget_DEFINED) && !defined(IL2CPP_STRUCT_BossCameraTarget_FWDDECL)
#include <Modloader/app/structs/BossCameraTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossCameraTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
