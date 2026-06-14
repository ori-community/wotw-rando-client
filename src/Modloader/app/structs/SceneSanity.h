#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSanity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSanity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSanity_DEFINED)
#include <Modloader/app/structs/SceneSanity__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSanity__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSanity_DEFINED
struct SceneSanity__Class;
struct SceneSanity {
    struct SceneSanity__Class* klass;
    MonitorData* monitor;
    struct SceneSanity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSanity_FWDDECL)
#define IL2CPP_STRUCT_SceneSanity_FWDDECL
#include <Modloader/app/structs/SceneSanity__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSanity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSanity_DEFINED) && !defined(IL2CPP_STRUCT_SceneSanity_FWDDECL)
#include <Modloader/app/structs/SceneSanity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSanity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
