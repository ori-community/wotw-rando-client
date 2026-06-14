#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderSettings_DEFINED)
#include <Modloader/app/structs/RecorderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderSettings_DEFINED
struct RecorderSettings__Class;
struct RecorderSettings {
    struct RecorderSettings__Class* klass;
    MonitorData* monitor;
    struct RecorderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderSettings_FWDDECL)
#define IL2CPP_STRUCT_RecorderSettings_FWDDECL
#include <Modloader/app/structs/RecorderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderSettings_DEFINED) && !defined(IL2CPP_STRUCT_RecorderSettings_FWDDECL)
#include <Modloader/app/structs/RecorderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
