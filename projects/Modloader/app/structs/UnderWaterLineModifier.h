#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnderWaterLineModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnderWaterLineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnderWaterLineModifier_DEFINED)
#include <Modloader/app/structs/UnderWaterLineModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UnderWaterLineModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_UnderWaterLineModifier_DEFINED
struct UnderWaterLineModifier__Class;
struct UnderWaterLineModifier {
    struct UnderWaterLineModifier__Class* klass;
    MonitorData* monitor;
    struct UnderWaterLineModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnderWaterLineModifier_FWDDECL)
#define IL2CPP_STRUCT_UnderWaterLineModifier_FWDDECL
#include <Modloader/app/structs/UnderWaterLineModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_UnderWaterLineModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnderWaterLineModifier_DEFINED) && !defined(IL2CPP_STRUCT_UnderWaterLineModifier_FWDDECL)
#include <Modloader/app/structs/UnderWaterLineModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnderWaterLineModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
