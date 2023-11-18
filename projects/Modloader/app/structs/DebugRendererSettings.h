#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRendererSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRendererSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRendererSettings_DEFINED)
#include <Modloader/app/structs/DebugRendererSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DebugRendererSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugRendererSettings_DEFINED
struct DebugRendererSettings__Class;
struct DebugRendererSettings {
    struct DebugRendererSettings__Class* klass;
    MonitorData* monitor;
    struct DebugRendererSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRendererSettings_FWDDECL)
#define IL2CPP_STRUCT_DebugRendererSettings_FWDDECL
#include <Modloader/app/structs/DebugRendererSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugRendererSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRendererSettings_DEFINED) && !defined(IL2CPP_STRUCT_DebugRendererSettings_FWDDECL)
#include <Modloader/app/structs/DebugRendererSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRendererSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
