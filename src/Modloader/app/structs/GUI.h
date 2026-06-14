#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUI_DEFINED)
#define IL2CPP_STRUCT_GUI_DEFINED
struct GUI__Class;
struct GUI {
    struct GUI__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GUI_FWDDECL)
#define IL2CPP_STRUCT_GUI_FWDDECL
#include <Modloader/app/structs/GUI__Class.h>
#endif
#undef IL2CPP_STRUCT_GUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUI_DEFINED) && !defined(IL2CPP_STRUCT_GUI_FWDDECL)
#include <Modloader/app/structs/GUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
