#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIStyle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIStyle_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyle_DEFINED)
#include <Modloader/app/structs/GUIStyle__Fields.h>
#if defined(IL2CPP_STRUCT_GUIStyle__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIStyle_DEFINED
struct GUIStyle__Class;
struct GUIStyle {
    struct GUIStyle__Class* klass;
    MonitorData* monitor;
    struct GUIStyle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIStyle_FWDDECL)
#define IL2CPP_STRUCT_GUIStyle_FWDDECL
#include <Modloader/app/structs/GUIStyle__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIStyle_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyle_DEFINED) && !defined(IL2CPP_STRUCT_GUIStyle_FWDDECL)
#include <Modloader/app/structs/GUIStyle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIStyle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
