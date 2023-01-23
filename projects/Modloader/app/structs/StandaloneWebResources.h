#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandaloneWebResources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandaloneWebResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneWebResources_DEFINED)
#include <Modloader/app/structs/StandaloneWebResources__Fields.h>
#if defined(IL2CPP_STRUCT_StandaloneWebResources__Fields_DEFINED)
#define IL2CPP_STRUCT_StandaloneWebResources_DEFINED
struct StandaloneWebResources__Class;
struct StandaloneWebResources {
    struct StandaloneWebResources__Class* klass;
    MonitorData* monitor;
    struct StandaloneWebResources__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandaloneWebResources_FWDDECL)
#define IL2CPP_STRUCT_StandaloneWebResources_FWDDECL
#include <Modloader/app/structs/StandaloneWebResources__Class.h>
#endif
#undef IL2CPP_STRUCT_StandaloneWebResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneWebResources_DEFINED) && !defined(IL2CPP_STRUCT_StandaloneWebResources_FWDDECL)
#include <Modloader/app/structs/StandaloneWebResources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandaloneWebResources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
