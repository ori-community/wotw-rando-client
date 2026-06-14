#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonIconRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonIconRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIconRenderer_DEFINED)
#include <Modloader/app/structs/MoonIconRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_MoonIconRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonIconRenderer_DEFINED
struct MoonIconRenderer__Class;
struct MoonIconRenderer {
    struct MoonIconRenderer__Class* klass;
    MonitorData* monitor;
    struct MoonIconRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonIconRenderer_FWDDECL)
#define IL2CPP_STRUCT_MoonIconRenderer_FWDDECL
#include <Modloader/app/structs/MoonIconRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonIconRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIconRenderer_DEFINED) && !defined(IL2CPP_STRUCT_MoonIconRenderer_FWDDECL)
#include <Modloader/app/structs/MoonIconRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonIconRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
