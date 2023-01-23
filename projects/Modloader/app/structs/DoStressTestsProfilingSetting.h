#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoStressTestsProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoStressTestsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoStressTestsProfilingSetting_DEFINED)
#include <Modloader/app/structs/DoStressTestsProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_DoStressTestsProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_DoStressTestsProfilingSetting_DEFINED
struct DoStressTestsProfilingSetting__Class;
struct DoStressTestsProfilingSetting {
    struct DoStressTestsProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct DoStressTestsProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoStressTestsProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_DoStressTestsProfilingSetting_FWDDECL
#include <Modloader/app/structs/DoStressTestsProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_DoStressTestsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoStressTestsProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_DoStressTestsProfilingSetting_FWDDECL)
#include <Modloader/app/structs/DoStressTestsProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoStressTestsProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
