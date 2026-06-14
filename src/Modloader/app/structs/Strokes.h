#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Strokes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Strokes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Strokes_DEFINED)
#include <Modloader/app/structs/Strokes__Fields.h>
#if defined(IL2CPP_STRUCT_Strokes__Fields_DEFINED)
#define IL2CPP_STRUCT_Strokes_DEFINED
struct Strokes__Class;
struct Strokes {
    struct Strokes__Class* klass;
    MonitorData* monitor;
    struct Strokes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Strokes_FWDDECL)
#define IL2CPP_STRUCT_Strokes_FWDDECL
#include <Modloader/app/structs/Strokes__Class.h>
#endif
#undef IL2CPP_STRUCT_Strokes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Strokes_DEFINED) && !defined(IL2CPP_STRUCT_Strokes_FWDDECL)
#include <Modloader/app/structs/Strokes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Strokes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
