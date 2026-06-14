#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIStyleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIStyleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyleState_DEFINED)
#include <Modloader/app/structs/GUIStyleState__Fields.h>
#if defined(IL2CPP_STRUCT_GUIStyleState__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIStyleState_DEFINED
struct GUIStyleState__Class;
struct GUIStyleState {
    struct GUIStyleState__Class* klass;
    MonitorData* monitor;
    struct GUIStyleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIStyleState_FWDDECL)
#define IL2CPP_STRUCT_GUIStyleState_FWDDECL
#include <Modloader/app/structs/GUIStyleState__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIStyleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyleState_DEFINED) && !defined(IL2CPP_STRUCT_GUIStyleState_FWDDECL)
#include <Modloader/app/structs/GUIStyleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIStyleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
