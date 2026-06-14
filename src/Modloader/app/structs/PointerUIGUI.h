#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIGUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIGUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIGUI_DEFINED)
#include <Modloader/app/structs/PointerUIGUI__Fields.h>
#if defined(IL2CPP_STRUCT_PointerUIGUI__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerUIGUI_DEFINED
struct PointerUIGUI__Class;
struct PointerUIGUI {
    struct PointerUIGUI__Class* klass;
    MonitorData* monitor;
    struct PointerUIGUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIGUI_FWDDECL)
#define IL2CPP_STRUCT_PointerUIGUI_FWDDECL
#include <Modloader/app/structs/PointerUIGUI__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerUIGUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIGUI_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIGUI_FWDDECL)
#include <Modloader/app/structs/PointerUIGUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIGUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
