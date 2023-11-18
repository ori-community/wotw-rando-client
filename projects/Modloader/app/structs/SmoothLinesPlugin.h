#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmoothLinesPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmoothLinesPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothLinesPlugin_DEFINED)
#include <Modloader/app/structs/SmoothLinesPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_SmoothLinesPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_SmoothLinesPlugin_DEFINED
struct SmoothLinesPlugin__Class;
struct SmoothLinesPlugin {
    struct SmoothLinesPlugin__Class* klass;
    MonitorData* monitor;
    struct SmoothLinesPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmoothLinesPlugin_FWDDECL)
#define IL2CPP_STRUCT_SmoothLinesPlugin_FWDDECL
#include <Modloader/app/structs/SmoothLinesPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_SmoothLinesPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothLinesPlugin_DEFINED) && !defined(IL2CPP_STRUCT_SmoothLinesPlugin_FWDDECL)
#include <Modloader/app/structs/SmoothLinesPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmoothLinesPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
