#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloomSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloomSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomSettings_DEFINED)
#include <Modloader/app/structs/BloomSettings__Fields.h>
#if defined(IL2CPP_STRUCT_BloomSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_BloomSettings_DEFINED
struct BloomSettings__Class;
struct BloomSettings {
    struct BloomSettings__Class* klass;
    MonitorData* monitor;
    struct BloomSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloomSettings_FWDDECL)
#define IL2CPP_STRUCT_BloomSettings_FWDDECL
#include <Modloader/app/structs/BloomSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_BloomSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomSettings_DEFINED) && !defined(IL2CPP_STRUCT_BloomSettings_FWDDECL)
#include <Modloader/app/structs/BloomSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloomSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
