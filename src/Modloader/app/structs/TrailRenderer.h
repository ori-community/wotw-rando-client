#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrailRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrailRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailRenderer_DEFINED)
#include <Modloader/app/structs/TrailRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_TrailRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_TrailRenderer_DEFINED
struct TrailRenderer__Class;
struct TrailRenderer {
    struct TrailRenderer__Class* klass;
    MonitorData* monitor;
    struct TrailRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrailRenderer_FWDDECL)
#define IL2CPP_STRUCT_TrailRenderer_FWDDECL
#include <Modloader/app/structs/TrailRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_TrailRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailRenderer_DEFINED) && !defined(IL2CPP_STRUCT_TrailRenderer_FWDDECL)
#include <Modloader/app/structs/TrailRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrailRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
