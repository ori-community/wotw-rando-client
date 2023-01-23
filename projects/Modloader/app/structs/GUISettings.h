#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUISettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUISettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISettings_DEFINED)
#include <Modloader/app/structs/GUISettings__Fields.h>
#if defined(IL2CPP_STRUCT_GUISettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GUISettings_DEFINED
struct GUISettings__Class;
struct GUISettings {
    struct GUISettings__Class* klass;
    MonitorData* monitor;
    struct GUISettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUISettings_FWDDECL)
#define IL2CPP_STRUCT_GUISettings_FWDDECL
#include <Modloader/app/structs/GUISettings__Class.h>
#endif
#undef IL2CPP_STRUCT_GUISettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISettings_DEFINED) && !defined(IL2CPP_STRUCT_GUISettings_FWDDECL)
#include <Modloader/app/structs/GUISettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUISettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
