#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleVision_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleVision_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleVision_DEFINED)
#include <Modloader/app/structs/DoubleVision__Fields.h>
#if defined(IL2CPP_STRUCT_DoubleVision__Fields_DEFINED)
#define IL2CPP_STRUCT_DoubleVision_DEFINED
struct DoubleVision__Class;
struct DoubleVision {
    struct DoubleVision__Class* klass;
    MonitorData* monitor;
    struct DoubleVision__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleVision_FWDDECL)
#define IL2CPP_STRUCT_DoubleVision_FWDDECL
#include <Modloader/app/structs/DoubleVision__Class.h>
#endif
#undef IL2CPP_STRUCT_DoubleVision_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleVision_DEFINED) && !defined(IL2CPP_STRUCT_DoubleVision_FWDDECL)
#include <Modloader/app/structs/DoubleVision.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleVision.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
