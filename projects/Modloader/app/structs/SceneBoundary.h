#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneBoundary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneBoundary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBoundary_DEFINED)
#include <Modloader/app/structs/SceneBoundary__Fields.h>
#if defined(IL2CPP_STRUCT_SceneBoundary__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneBoundary_DEFINED
struct SceneBoundary__Class;
struct SceneBoundary {
    struct SceneBoundary__Class* klass;
    MonitorData* monitor;
    struct SceneBoundary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneBoundary_FWDDECL)
#define IL2CPP_STRUCT_SceneBoundary_FWDDECL
#include <Modloader/app/structs/SceneBoundary__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneBoundary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBoundary_DEFINED) && !defined(IL2CPP_STRUCT_SceneBoundary_FWDDECL)
#include <Modloader/app/structs/SceneBoundary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneBoundary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
