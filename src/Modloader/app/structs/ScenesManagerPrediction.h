#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerPrediction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerPrediction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction_DEFINED)
#include <Modloader/app/structs/ScenesManagerPrediction__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesManagerPrediction__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerPrediction_DEFINED
struct ScenesManagerPrediction__Class;
struct ScenesManagerPrediction {
    struct ScenesManagerPrediction__Class* klass;
    MonitorData* monitor;
    struct ScenesManagerPrediction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerPrediction_FWDDECL
#include <Modloader/app/structs/ScenesManagerPrediction__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerPrediction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerPrediction_FWDDECL)
#include <Modloader/app/structs/ScenesManagerPrediction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerPrediction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
