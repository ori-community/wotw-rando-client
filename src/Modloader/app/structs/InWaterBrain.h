#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InWaterBrain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InWaterBrain_INITIALIZING
#if !defined(IL2CPP_STRUCT_InWaterBrain_DEFINED)
#include <Modloader/app/structs/InWaterBrain__Fields.h>
#if defined(IL2CPP_STRUCT_InWaterBrain__Fields_DEFINED)
#define IL2CPP_STRUCT_InWaterBrain_DEFINED
struct InWaterBrain__Class;
struct InWaterBrain {
    struct InWaterBrain__Class* klass;
    MonitorData* monitor;
    struct InWaterBrain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InWaterBrain_FWDDECL)
#define IL2CPP_STRUCT_InWaterBrain_FWDDECL
#include <Modloader/app/structs/InWaterBrain__Class.h>
#endif
#undef IL2CPP_STRUCT_InWaterBrain_INITIALIZING
#if !defined(IL2CPP_STRUCT_InWaterBrain_DEFINED) && !defined(IL2CPP_STRUCT_InWaterBrain_FWDDECL)
#include <Modloader/app/structs/InWaterBrain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InWaterBrain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
