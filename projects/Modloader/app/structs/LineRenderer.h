#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineRenderer_DEFINED)
#include <Modloader/app/structs/LineRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_LineRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_LineRenderer_DEFINED
struct LineRenderer__Class;
struct LineRenderer {
    struct LineRenderer__Class* klass;
    MonitorData* monitor;
    struct LineRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineRenderer_FWDDECL)
#define IL2CPP_STRUCT_LineRenderer_FWDDECL
#include <Modloader/app/structs/LineRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_LineRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineRenderer_DEFINED) && !defined(IL2CPP_STRUCT_LineRenderer_FWDDECL)
#include <Modloader/app/structs/LineRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
