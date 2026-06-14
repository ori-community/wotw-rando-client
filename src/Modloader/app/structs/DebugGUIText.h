#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugGUIText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugGUIText_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugGUIText_DEFINED)
#include <Modloader/app/structs/DebugGUIText__Fields.h>
#if defined(IL2CPP_STRUCT_DebugGUIText__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugGUIText_DEFINED
struct DebugGUIText__Class;
struct DebugGUIText {
    struct DebugGUIText__Class* klass;
    MonitorData* monitor;
    struct DebugGUIText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugGUIText_FWDDECL)
#define IL2CPP_STRUCT_DebugGUIText_FWDDECL
#include <Modloader/app/structs/DebugGUIText__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugGUIText_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugGUIText_DEFINED) && !defined(IL2CPP_STRUCT_DebugGUIText_FWDDECL)
#include <Modloader/app/structs/DebugGUIText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugGUIText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
