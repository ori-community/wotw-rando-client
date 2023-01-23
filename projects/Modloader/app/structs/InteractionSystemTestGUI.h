#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionSystemTestGUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionSystemTestGUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystemTestGUI_DEFINED)
#include <Modloader/app/structs/InteractionSystemTestGUI__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionSystemTestGUI_DEFINED
struct InteractionSystemTestGUI__Class;
struct InteractionSystemTestGUI {
    struct InteractionSystemTestGUI__Class* klass;
    MonitorData* monitor;
    struct InteractionSystemTestGUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionSystemTestGUI_FWDDECL)
#define IL2CPP_STRUCT_InteractionSystemTestGUI_FWDDECL
#include <Modloader/app/structs/InteractionSystemTestGUI__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionSystemTestGUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystemTestGUI_DEFINED) && !defined(IL2CPP_STRUCT_InteractionSystemTestGUI_FWDDECL)
#include <Modloader/app/structs/InteractionSystemTestGUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionSystemTestGUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
