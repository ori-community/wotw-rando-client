#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainMenuState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainMenuState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainMenuState_DEFINED)
#include <Modloader/app/structs/MainMenuState__Fields.h>
#if defined(IL2CPP_STRUCT_MainMenuState__Fields_DEFINED)
#define IL2CPP_STRUCT_MainMenuState_DEFINED
struct MainMenuState__Class;
struct MainMenuState {
    struct MainMenuState__Class* klass;
    MonitorData* monitor;
    struct MainMenuState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainMenuState_FWDDECL)
#define IL2CPP_STRUCT_MainMenuState_FWDDECL
#include <Modloader/app/structs/MainMenuState__Class.h>
#endif
#undef IL2CPP_STRUCT_MainMenuState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainMenuState_DEFINED) && !defined(IL2CPP_STRUCT_MainMenuState_FWDDECL)
#include <Modloader/app/structs/MainMenuState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainMenuState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
