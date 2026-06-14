#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsSettings_DEFINED)
#include <Modloader/app/structs/GraphicsSettings__Fields.h>
#if defined(IL2CPP_STRUCT_GraphicsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GraphicsSettings_DEFINED
struct GraphicsSettings__Class;
struct GraphicsSettings {
    struct GraphicsSettings__Class* klass;
    MonitorData* monitor;
    struct GraphicsSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GraphicsSettings_FWDDECL)
#define IL2CPP_STRUCT_GraphicsSettings_FWDDECL
#include <Modloader/app/structs/GraphicsSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_GraphicsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsSettings_DEFINED) && !defined(IL2CPP_STRUCT_GraphicsSettings_FWDDECL)
#include <Modloader/app/structs/GraphicsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
