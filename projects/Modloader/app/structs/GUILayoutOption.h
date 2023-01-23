#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutOption_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutOption_DEFINED)
#include <Modloader/app/structs/GUILayoutOption__Fields.h>
#if defined(IL2CPP_STRUCT_GUILayoutOption__Fields_DEFINED)
#define IL2CPP_STRUCT_GUILayoutOption_DEFINED
struct GUILayoutOption__Class;
struct GUILayoutOption {
    struct GUILayoutOption__Class* klass;
    MonitorData* monitor;
    struct GUILayoutOption__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutOption_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutOption_FWDDECL
#include <Modloader/app/structs/GUILayoutOption__Class.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutOption_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutOption_FWDDECL)
#include <Modloader/app/structs/GUILayoutOption.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutOption.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
