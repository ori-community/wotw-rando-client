#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenePaddingBoundary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenePaddingBoundary_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenePaddingBoundary_DEFINED)
#include <Modloader/app/structs/ScenePaddingBoundary__Fields.h>
#if defined(IL2CPP_STRUCT_ScenePaddingBoundary__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenePaddingBoundary_DEFINED
struct ScenePaddingBoundary__Class;
struct ScenePaddingBoundary {
    struct ScenePaddingBoundary__Class* klass;
    MonitorData* monitor;
    struct ScenePaddingBoundary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenePaddingBoundary_FWDDECL)
#define IL2CPP_STRUCT_ScenePaddingBoundary_FWDDECL
#include <Modloader/app/structs/ScenePaddingBoundary__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenePaddingBoundary_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenePaddingBoundary_DEFINED) && !defined(IL2CPP_STRUCT_ScenePaddingBoundary_FWDDECL)
#include <Modloader/app/structs/ScenePaddingBoundary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenePaddingBoundary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
