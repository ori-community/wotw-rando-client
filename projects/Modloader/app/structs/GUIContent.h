#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent_DEFINED)
#include <Modloader/app/structs/GUIContent__Fields.h>
#if defined(IL2CPP_STRUCT_GUIContent__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIContent_DEFINED
struct GUIContent__Class;
struct GUIContent {
    struct GUIContent__Class* klass;
    MonitorData* monitor;
    struct GUIContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIContent_FWDDECL)
#define IL2CPP_STRUCT_GUIContent_FWDDECL
#include <Modloader/app/structs/GUIContent__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContent_DEFINED) && !defined(IL2CPP_STRUCT_GUIContent_FWDDECL)
#include <Modloader/app/structs/GUIContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
