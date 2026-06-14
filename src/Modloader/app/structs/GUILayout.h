#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayout_DEFINED)
#define IL2CPP_STRUCT_GUILayout_DEFINED
struct GUILayout__Class;
struct GUILayout {
    struct GUILayout__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GUILayout_FWDDECL)
#define IL2CPP_STRUCT_GUILayout_FWDDECL
#include <Modloader/app/structs/GUILayout__Class.h>
#endif
#undef IL2CPP_STRUCT_GUILayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayout_DEFINED) && !defined(IL2CPP_STRUCT_GUILayout_FWDDECL)
#include <Modloader/app/structs/GUILayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
