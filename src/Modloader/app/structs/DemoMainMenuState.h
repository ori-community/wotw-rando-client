#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoMainMenuState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoMainMenuState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoMainMenuState_DEFINED)
#include <Modloader/app/structs/DemoMainMenuState__Fields.h>
#if defined(IL2CPP_STRUCT_DemoMainMenuState__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoMainMenuState_DEFINED
struct DemoMainMenuState__Class;
struct DemoMainMenuState {
    struct DemoMainMenuState__Class* klass;
    MonitorData* monitor;
    struct DemoMainMenuState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoMainMenuState_FWDDECL)
#define IL2CPP_STRUCT_DemoMainMenuState_FWDDECL
#include <Modloader/app/structs/DemoMainMenuState__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoMainMenuState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoMainMenuState_DEFINED) && !defined(IL2CPP_STRUCT_DemoMainMenuState_FWDDECL)
#include <Modloader/app/structs/DemoMainMenuState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoMainMenuState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
