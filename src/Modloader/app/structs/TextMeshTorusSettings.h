#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshTorusSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshTorusSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshTorusSettings_DEFINED)
#include <Modloader/app/structs/TextMeshTorusSettings__Fields.h>
#if defined(IL2CPP_STRUCT_TextMeshTorusSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_TextMeshTorusSettings_DEFINED
struct TextMeshTorusSettings__Class;
struct TextMeshTorusSettings {
    struct TextMeshTorusSettings__Class* klass;
    MonitorData* monitor;
    struct TextMeshTorusSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshTorusSettings_FWDDECL)
#define IL2CPP_STRUCT_TextMeshTorusSettings_FWDDECL
#include <Modloader/app/structs/TextMeshTorusSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_TextMeshTorusSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshTorusSettings_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshTorusSettings_FWDDECL)
#include <Modloader/app/structs/TextMeshTorusSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshTorusSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
