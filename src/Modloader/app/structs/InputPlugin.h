#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputPlugin_DEFINED)
#include <Modloader/app/structs/InputPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_InputPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_InputPlugin_DEFINED
struct InputPlugin__Class;
struct InputPlugin {
    struct InputPlugin__Class* klass;
    MonitorData* monitor;
    struct InputPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputPlugin_FWDDECL)
#define IL2CPP_STRUCT_InputPlugin_FWDDECL
#include <Modloader/app/structs/InputPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_InputPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputPlugin_DEFINED) && !defined(IL2CPP_STRUCT_InputPlugin_FWDDECL)
#include <Modloader/app/structs/InputPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
