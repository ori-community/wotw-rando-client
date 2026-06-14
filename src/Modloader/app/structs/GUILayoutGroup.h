#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutGroup_DEFINED)
#include <Modloader/app/structs/GUILayoutGroup__Fields.h>
#if defined(IL2CPP_STRUCT_GUILayoutGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_GUILayoutGroup_DEFINED
struct GUILayoutGroup__Class;
struct GUILayoutGroup {
    struct GUILayoutGroup__Class* klass;
    MonitorData* monitor;
    struct GUILayoutGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutGroup_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutGroup_FWDDECL
#include <Modloader/app/structs/GUILayoutGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutGroup_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutGroup_FWDDECL)
#include <Modloader/app/structs/GUILayoutGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
