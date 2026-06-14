#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseScreen_DEFINED)
#include <Modloader/app/structs/PauseScreen__Fields.h>
#if defined(IL2CPP_STRUCT_PauseScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseScreen_DEFINED
struct PauseScreen__Class;
struct PauseScreen {
    struct PauseScreen__Class* klass;
    MonitorData* monitor;
    struct PauseScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseScreen_FWDDECL)
#define IL2CPP_STRUCT_PauseScreen_FWDDECL
#include <Modloader/app/structs/PauseScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_PauseScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseScreen_DEFINED) && !defined(IL2CPP_STRUCT_PauseScreen_FWDDECL)
#include <Modloader/app/structs/PauseScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
