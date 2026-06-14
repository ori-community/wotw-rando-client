#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_App_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_App_INITIALIZING
#if !defined(IL2CPP_STRUCT_App_DEFINED)
#include <Modloader/app/structs/App__Fields.h>
#if defined(IL2CPP_STRUCT_App__Fields_DEFINED)
#define IL2CPP_STRUCT_App_DEFINED
struct App__Class;
struct App {
    struct App__Class* klass;
    MonitorData* monitor;
    struct App__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_App_FWDDECL)
#define IL2CPP_STRUCT_App_FWDDECL
#include <Modloader/app/structs/App__Class.h>
#endif
#undef IL2CPP_STRUCT_App_INITIALIZING
#if !defined(IL2CPP_STRUCT_App_DEFINED) && !defined(IL2CPP_STRUCT_App_FWDDECL)
#include <Modloader/app/structs/App.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/App.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
