#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterSplash_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterSplash_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterSplash_DEFINED)
#include <Modloader/app/structs/UberWaterSplash__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterSplash__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterSplash_DEFINED
struct UberWaterSplash__Class;
struct UberWaterSplash {
    struct UberWaterSplash__Class* klass;
    MonitorData* monitor;
    struct UberWaterSplash__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterSplash_FWDDECL)
#define IL2CPP_STRUCT_UberWaterSplash_FWDDECL
#include <Modloader/app/structs/UberWaterSplash__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterSplash_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterSplash_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterSplash_FWDDECL)
#include <Modloader/app/structs/UberWaterSplash.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterSplash.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
