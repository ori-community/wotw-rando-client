#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterCross_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterCross_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterCross_DEFINED)
#include <Modloader/app/structs/UberWaterCross__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterCross__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterCross_DEFINED
struct UberWaterCross__Class;
struct UberWaterCross {
    struct UberWaterCross__Class* klass;
    MonitorData* monitor;
    struct UberWaterCross__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterCross_FWDDECL)
#define IL2CPP_STRUCT_UberWaterCross_FWDDECL
#include <Modloader/app/structs/UberWaterCross__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterCross_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterCross_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterCross_FWDDECL)
#include <Modloader/app/structs/UberWaterCross.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterCross.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
