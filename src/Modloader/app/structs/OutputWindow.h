#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OutputWindow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OutputWindow_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputWindow_DEFINED)
#include <Modloader/app/structs/OutputWindow__Fields.h>
#if defined(IL2CPP_STRUCT_OutputWindow__Fields_DEFINED)
#define IL2CPP_STRUCT_OutputWindow_DEFINED
struct OutputWindow__Class;
struct OutputWindow {
    struct OutputWindow__Class* klass;
    MonitorData* monitor;
    struct OutputWindow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OutputWindow_FWDDECL)
#define IL2CPP_STRUCT_OutputWindow_FWDDECL
#include <Modloader/app/structs/OutputWindow__Class.h>
#endif
#undef IL2CPP_STRUCT_OutputWindow_INITIALIZING
#if !defined(IL2CPP_STRUCT_OutputWindow_DEFINED) && !defined(IL2CPP_STRUCT_OutputWindow_FWDDECL)
#include <Modloader/app/structs/OutputWindow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OutputWindow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
