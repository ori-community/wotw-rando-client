#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchScreenKeyboard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchScreenKeyboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchScreenKeyboard_DEFINED)
#define IL2CPP_STRUCT_TouchScreenKeyboard_DEFINED
struct TouchScreenKeyboard__Class;
struct TouchScreenKeyboard {
    struct TouchScreenKeyboard__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TouchScreenKeyboard_FWDDECL)
#define IL2CPP_STRUCT_TouchScreenKeyboard_FWDDECL
#include <Modloader/app/structs/TouchScreenKeyboard__Class.h>
#endif
#undef IL2CPP_STRUCT_TouchScreenKeyboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchScreenKeyboard_DEFINED) && !defined(IL2CPP_STRUCT_TouchScreenKeyboard_FWDDECL)
#include <Modloader/app/structs/TouchScreenKeyboard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchScreenKeyboard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
