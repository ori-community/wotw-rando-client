#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightBerryModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightBerryModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightBerryModifier_DEFINED)
#include <Modloader/app/structs/NightBerryModifier__Fields.h>
#if defined(IL2CPP_STRUCT_NightBerryModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_NightBerryModifier_DEFINED
struct NightBerryModifier__Class;
struct NightBerryModifier {
    struct NightBerryModifier__Class* klass;
    MonitorData* monitor;
    struct NightBerryModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightBerryModifier_FWDDECL)
#define IL2CPP_STRUCT_NightBerryModifier_FWDDECL
#include <Modloader/app/structs/NightBerryModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_NightBerryModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightBerryModifier_DEFINED) && !defined(IL2CPP_STRUCT_NightBerryModifier_FWDDECL)
#include <Modloader/app/structs/NightBerryModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightBerryModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
