#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Window_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Window_INITIALIZING
#if !defined(IL2CPP_STRUCT_Window_DEFINED)
#include <Modloader/app/structs/Window__Fields.h>
#if defined(IL2CPP_STRUCT_Window__Fields_DEFINED)
#define IL2CPP_STRUCT_Window_DEFINED
struct Window__Class;
struct Window {
    struct Window__Class* klass;
    MonitorData* monitor;
    struct Window__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Window_FWDDECL)
#define IL2CPP_STRUCT_Window_FWDDECL
#include <Modloader/app/structs/Window__Class.h>
#endif
#undef IL2CPP_STRUCT_Window_INITIALIZING
#if !defined(IL2CPP_STRUCT_Window_DEFINED) && !defined(IL2CPP_STRUCT_Window_FWDDECL)
#include <Modloader/app/structs/Window.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Window.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
