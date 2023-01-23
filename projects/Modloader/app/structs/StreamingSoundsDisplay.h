#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamingSoundsDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamingSoundsDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingSoundsDisplay_DEFINED)
#include <Modloader/app/structs/StreamingSoundsDisplay__Fields.h>
#if defined(IL2CPP_STRUCT_StreamingSoundsDisplay__Fields_DEFINED)
#define IL2CPP_STRUCT_StreamingSoundsDisplay_DEFINED
struct StreamingSoundsDisplay__Class;
struct StreamingSoundsDisplay {
    struct StreamingSoundsDisplay__Class* klass;
    MonitorData* monitor;
    struct StreamingSoundsDisplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamingSoundsDisplay_FWDDECL)
#define IL2CPP_STRUCT_StreamingSoundsDisplay_FWDDECL
#include <Modloader/app/structs/StreamingSoundsDisplay__Class.h>
#endif
#undef IL2CPP_STRUCT_StreamingSoundsDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingSoundsDisplay_DEFINED) && !defined(IL2CPP_STRUCT_StreamingSoundsDisplay_FWDDECL)
#include <Modloader/app/structs/StreamingSoundsDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamingSoundsDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
