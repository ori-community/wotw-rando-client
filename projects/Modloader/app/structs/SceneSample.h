#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSample_DEFINED)
#include <Modloader/app/structs/SceneSample__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSample__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSample_DEFINED
struct SceneSample__Class;
struct SceneSample {
    struct SceneSample__Class* klass;
    MonitorData* monitor;
    struct SceneSample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSample_FWDDECL)
#define IL2CPP_STRUCT_SceneSample_FWDDECL
#include <Modloader/app/structs/SceneSample__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSample_DEFINED) && !defined(IL2CPP_STRUCT_SceneSample_FWDDECL)
#include <Modloader/app/structs/SceneSample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
