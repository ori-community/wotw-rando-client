#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreen_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_MenuScreen_DEFINED
struct MenuScreen__Class;
struct MenuScreen {
    struct MenuScreen__Class* klass;
    MonitorData* monitor;
    struct MenuScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuScreen_FWDDECL)
#define IL2CPP_STRUCT_MenuScreen_FWDDECL
#include <Modloader/app/structs/MenuScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_MenuScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreen_DEFINED) && !defined(IL2CPP_STRUCT_MenuScreen_FWDDECL)
#include <Modloader/app/structs/MenuScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
