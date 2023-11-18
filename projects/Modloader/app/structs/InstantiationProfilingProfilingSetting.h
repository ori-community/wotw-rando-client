#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_DEFINED)
#include <Modloader/app/structs/InstantiationProfilingProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiationProfilingProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_DEFINED
struct InstantiationProfilingProfilingSetting__Class;
struct InstantiationProfilingProfilingSetting {
    struct InstantiationProfilingProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct InstantiationProfilingProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_FWDDECL
#include <Modloader/app/structs/InstantiationProfilingProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationProfilingProfilingSetting_FWDDECL)
#include <Modloader/app/structs/InstantiationProfilingProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationProfilingProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
