#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutEntry_DEFINED)
#include <Modloader/app/structs/GUILayoutEntry__Fields.h>
#if defined(IL2CPP_STRUCT_GUILayoutEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_GUILayoutEntry_DEFINED
struct GUILayoutEntry__Class;
struct GUILayoutEntry {
    struct GUILayoutEntry__Class* klass;
    MonitorData* monitor;
    struct GUILayoutEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutEntry_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutEntry_FWDDECL
#include <Modloader/app/structs/GUILayoutEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutEntry_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutEntry_FWDDECL)
#include <Modloader/app/structs/GUILayoutEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
