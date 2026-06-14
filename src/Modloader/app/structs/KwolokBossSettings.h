#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossSettings_DEFINED)
#include <Modloader/app/structs/KwolokBossSettings__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossSettings_DEFINED
struct KwolokBossSettings__Class;
struct KwolokBossSettings {
    struct KwolokBossSettings__Class* klass;
    MonitorData* monitor;
    struct KwolokBossSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossSettings_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossSettings_FWDDECL
#include <Modloader/app/structs/KwolokBossSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossSettings_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossSettings_FWDDECL)
#include <Modloader/app/structs/KwolokBossSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
