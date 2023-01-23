#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandPrediction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandPrediction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandPrediction_DEFINED)
#include <Modloader/app/structs/LandPrediction__Fields.h>
#if defined(IL2CPP_STRUCT_LandPrediction__Fields_DEFINED)
#define IL2CPP_STRUCT_LandPrediction_DEFINED
struct LandPrediction__Class;
struct LandPrediction {
    struct LandPrediction__Class* klass;
    MonitorData* monitor;
    struct LandPrediction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandPrediction_FWDDECL)
#define IL2CPP_STRUCT_LandPrediction_FWDDECL
#include <Modloader/app/structs/LandPrediction__Class.h>
#endif
#undef IL2CPP_STRUCT_LandPrediction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandPrediction_DEFINED) && !defined(IL2CPP_STRUCT_LandPrediction_FWDDECL)
#include <Modloader/app/structs/LandPrediction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandPrediction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
