#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSanityB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSanityB_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSanityB_DEFINED)
#include <Modloader/app/structs/SceneSanityB__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSanityB__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSanityB_DEFINED
struct SceneSanityB__Class;
struct SceneSanityB {
    struct SceneSanityB__Class* klass;
    MonitorData* monitor;
    struct SceneSanityB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSanityB_FWDDECL)
#define IL2CPP_STRUCT_SceneSanityB_FWDDECL
#include <Modloader/app/structs/SceneSanityB__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSanityB_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSanityB_DEFINED) && !defined(IL2CPP_STRUCT_SceneSanityB_FWDDECL)
#include <Modloader/app/structs/SceneSanityB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSanityB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
