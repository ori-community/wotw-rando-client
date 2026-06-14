#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_DEFINED)
#include <Modloader/app/structs/UberWaterControl__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterControl__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl_DEFINED
struct UberWaterControl__Class;
struct UberWaterControl {
    struct UberWaterControl__Class* klass;
    MonitorData* monitor;
    struct UberWaterControl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl_FWDDECL
#include <Modloader/app/structs/UberWaterControl__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterControl_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl_FWDDECL)
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
