#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_DEFINED)
#include <Modloader/app/structs/FXAA_ConsoleSettings.h>
#if defined(IL2CPP_STRUCT_FXAA_ConsoleSettings_DEFINED)
#define IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_DEFINED
struct FXAA_ConsoleSettings__Class;
struct FXAA_ConsoleSettings__Boxed {
    struct FXAA_ConsoleSettings__Class* klass;
    MonitorData* monitor;
    struct FXAA_ConsoleSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_FWDDECL
#include <Modloader/app/structs/FXAA_ConsoleSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/FXAA_ConsoleSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_ConsoleSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
