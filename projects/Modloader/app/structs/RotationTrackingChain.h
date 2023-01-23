#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationTrackingChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationTrackingChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationTrackingChain_DEFINED)
#include <Modloader/app/structs/RotationTrackingChain__Fields.h>
#if defined(IL2CPP_STRUCT_RotationTrackingChain__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationTrackingChain_DEFINED
struct RotationTrackingChain__Class;
struct RotationTrackingChain {
    struct RotationTrackingChain__Class* klass;
    MonitorData* monitor;
    struct RotationTrackingChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationTrackingChain_FWDDECL)
#define IL2CPP_STRUCT_RotationTrackingChain_FWDDECL
#include <Modloader/app/structs/RotationTrackingChain__Class.h>
#endif
#undef IL2CPP_STRUCT_RotationTrackingChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationTrackingChain_DEFINED) && !defined(IL2CPP_STRUCT_RotationTrackingChain_FWDDECL)
#include <Modloader/app/structs/RotationTrackingChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationTrackingChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
