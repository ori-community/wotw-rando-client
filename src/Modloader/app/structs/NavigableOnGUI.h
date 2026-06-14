#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigableOnGUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigableOnGUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_DEFINED)
#include <Modloader/app/structs/NavigableOnGUI__Fields.h>
#if defined(IL2CPP_STRUCT_NavigableOnGUI__Fields_DEFINED)
#define IL2CPP_STRUCT_NavigableOnGUI_DEFINED
struct NavigableOnGUI__Class;
struct NavigableOnGUI {
    struct NavigableOnGUI__Class* klass;
    MonitorData* monitor;
    struct NavigableOnGUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_FWDDECL)
#define IL2CPP_STRUCT_NavigableOnGUI_FWDDECL
#include <Modloader/app/structs/NavigableOnGUI__Class.h>
#endif
#undef IL2CPP_STRUCT_NavigableOnGUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_DEFINED) && !defined(IL2CPP_STRUCT_NavigableOnGUI_FWDDECL)
#include <Modloader/app/structs/NavigableOnGUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigableOnGUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
