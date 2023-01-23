#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterLineModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterLineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterLineModifier_DEFINED)
#include <Modloader/app/structs/WaterLineModifier__Fields.h>
#if defined(IL2CPP_STRUCT_WaterLineModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterLineModifier_DEFINED
struct WaterLineModifier__Class;
struct WaterLineModifier {
    struct WaterLineModifier__Class* klass;
    MonitorData* monitor;
    struct WaterLineModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterLineModifier_FWDDECL)
#define IL2CPP_STRUCT_WaterLineModifier_FWDDECL
#include <Modloader/app/structs/WaterLineModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterLineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterLineModifier_DEFINED) && !defined(IL2CPP_STRUCT_WaterLineModifier_FWDDECL)
#include <Modloader/app/structs/WaterLineModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterLineModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
