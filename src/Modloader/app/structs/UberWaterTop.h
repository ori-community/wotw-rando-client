#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterTop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterTop_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterTop_DEFINED)
#include <Modloader/app/structs/UberWaterTop__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterTop__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterTop_DEFINED
struct UberWaterTop__Class;
struct UberWaterTop {
    struct UberWaterTop__Class* klass;
    MonitorData* monitor;
    struct UberWaterTop__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterTop_FWDDECL)
#define IL2CPP_STRUCT_UberWaterTop_FWDDECL
#include <Modloader/app/structs/UberWaterTop__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterTop_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterTop_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterTop_FWDDECL)
#include <Modloader/app/structs/UberWaterTop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterTop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
