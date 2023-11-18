#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIGroup__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIGroup__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIGroup__Boxed_DEFINED)
#include <Modloader/app/structs/GUIGroup.h>
#if defined(IL2CPP_STRUCT_GUIGroup_DEFINED)
#define IL2CPP_STRUCT_GUIGroup__Boxed_DEFINED
struct GUIGroup__Class;
struct GUIGroup__Boxed {
    struct GUIGroup__Class* klass;
    MonitorData* monitor;
    struct GUIGroup fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIGroup__Boxed_FWDDECL)
#define IL2CPP_STRUCT_GUIGroup__Boxed_FWDDECL
#include <Modloader/app/structs/GUIGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIGroup__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIGroup__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_GUIGroup__Boxed_FWDDECL)
#include <Modloader/app/structs/GUIGroup__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIGroup__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
