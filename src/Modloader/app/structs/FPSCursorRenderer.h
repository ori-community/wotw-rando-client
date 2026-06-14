#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSCursorRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSCursorRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCursorRenderer_DEFINED)
#include <Modloader/app/structs/FPSCursorRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_FPSCursorRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSCursorRenderer_DEFINED
struct FPSCursorRenderer__Class;
struct FPSCursorRenderer {
    struct FPSCursorRenderer__Class* klass;
    MonitorData* monitor;
    struct FPSCursorRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSCursorRenderer_FWDDECL)
#define IL2CPP_STRUCT_FPSCursorRenderer_FWDDECL
#include <Modloader/app/structs/FPSCursorRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSCursorRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCursorRenderer_DEFINED) && !defined(IL2CPP_STRUCT_FPSCursorRenderer_FWDDECL)
#include <Modloader/app/structs/FPSCursorRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSCursorRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
