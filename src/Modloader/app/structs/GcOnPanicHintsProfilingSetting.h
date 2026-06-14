#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_DEFINED)
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_DEFINED
struct GcOnPanicHintsProfilingSetting__Class;
struct GcOnPanicHintsProfilingSetting {
    struct GcOnPanicHintsProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct GcOnPanicHintsProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_FWDDECL
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_GcOnPanicHintsProfilingSetting_FWDDECL)
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GcOnPanicHintsProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
