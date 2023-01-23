#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PanicHintsProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PanicHintsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PanicHintsProfilingSetting_DEFINED)
#include <Modloader/app/structs/PanicHintsProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_PanicHintsProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_PanicHintsProfilingSetting_DEFINED
struct PanicHintsProfilingSetting__Class;
struct PanicHintsProfilingSetting {
    struct PanicHintsProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct PanicHintsProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PanicHintsProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_PanicHintsProfilingSetting_FWDDECL
#include <Modloader/app/structs/PanicHintsProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_PanicHintsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PanicHintsProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_PanicHintsProfilingSetting_FWDDECL)
#include <Modloader/app/structs/PanicHintsProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PanicHintsProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
