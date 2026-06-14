#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUICamera_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUICamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUICamera_DEFINED)
#include <Modloader/app/structs/GUICamera__Fields.h>
#if defined(IL2CPP_STRUCT_GUICamera__Fields_DEFINED)
#define IL2CPP_STRUCT_GUICamera_DEFINED
struct GUICamera__Class;
struct GUICamera {
    struct GUICamera__Class* klass;
    MonitorData* monitor;
    struct GUICamera__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUICamera_FWDDECL)
#define IL2CPP_STRUCT_GUICamera_FWDDECL
#include <Modloader/app/structs/GUICamera__Class.h>
#endif
#undef IL2CPP_STRUCT_GUICamera_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUICamera_DEFINED) && !defined(IL2CPP_STRUCT_GUICamera_FWDDECL)
#include <Modloader/app/structs/GUICamera.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUICamera.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
