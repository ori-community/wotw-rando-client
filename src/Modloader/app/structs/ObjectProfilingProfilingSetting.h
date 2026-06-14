#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectProfilingProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectProfilingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilingProfilingSetting_DEFINED)
#include <Modloader/app/structs/ObjectProfilingProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectProfilingProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectProfilingProfilingSetting_DEFINED
struct ObjectProfilingProfilingSetting__Class;
struct ObjectProfilingProfilingSetting {
    struct ObjectProfilingProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct ObjectProfilingProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectProfilingProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_ObjectProfilingProfilingSetting_FWDDECL
#include <Modloader/app/structs/ObjectProfilingProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectProfilingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilingProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_ObjectProfilingProfilingSetting_FWDDECL)
#include <Modloader/app/structs/ObjectProfilingProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectProfilingProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
