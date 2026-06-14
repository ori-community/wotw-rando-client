#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRenderer_DEFINED)
#include <Modloader/app/structs/DebugRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_DebugRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugRenderer_DEFINED
struct DebugRenderer__Class;
struct DebugRenderer {
    struct DebugRenderer__Class* klass;
    MonitorData* monitor;
    struct DebugRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRenderer_FWDDECL)
#define IL2CPP_STRUCT_DebugRenderer_FWDDECL
#include <Modloader/app/structs/DebugRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRenderer_DEFINED) && !defined(IL2CPP_STRUCT_DebugRenderer_FWDDECL)
#include <Modloader/app/structs/DebugRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
