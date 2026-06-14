#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflection_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflection_DEFINED
struct UberWaterReflection__Class;
struct UberWaterReflection {
    struct UberWaterReflection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflection_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflection_FWDDECL
#include <Modloader/app/structs/UberWaterReflection__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflection_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflection_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflection_FWDDECL)
#include <Modloader/app/structs/UberWaterReflection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
